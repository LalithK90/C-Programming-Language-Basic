#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>

/*
    THE UNIX SYSTEM INTERFACE IN C

    File Descriptors:
    - An integer that refers to an open file.
    - 0: standard input, 1: standard output, 2: standard error.
*/

/*
    Low Level I/O - Read and Write:
    - read(fd, buffer, count): Reads bytes from file descriptor.
    - write(fd, buffer, count): Writes bytes to file descriptor.
    - Example:
        char buf[100];
        int n = read(fd, buf, 100);
        write(1, buf, n); // write to stdout
*/

/*
    Open, Creat, Close, Unlink:
    - open(): Opens a file, returns file descriptor.
    - creat(): Creates a new file.
    - close(): Closes a file descriptor.
    - unlink(): Deletes a file.
    - Example:
        int fd = open("file.txt", O_RDONLY);
        close(fd);
        unlink("file.txt");
*/

/*
    Random Access - Seek and Lseek:
    - lseek(fd, offset, whence): Moves file pointer.
    - whence: SEEK_SET (from start), SEEK_CUR (from current), SEEK_END (from end)
    - Example:
        lseek(fd, 0, SEEK_SET); // go to start of file
*/

/*
    Example - An Implementation of Fopen and Getc:
    - You can use open/read to mimic fopen/fgetc.
    - Example:
        int fd = open("file.txt", O_RDONLY);
        char c;
        while (read(fd, &c, 1) == 1) { putchar(c); }
        close(fd);
*/

/*
    Example - Listing Directories:
    - Use opendir(), readdir(), closedir() to list files in a directory.
    - Example:
        DIR *d = opendir(".");
        struct dirent *entry;
        while ((entry = readdir(d)) != NULL) {
            printf("%s\n", entry->d_name);
        }
        closedir(d);
*/

/*
    Example - A Storage Allocator:
    - You can write your own memory allocator using sbrk() or malloc().
    - Example: See K&R "The C Programming Language" for a simple allocator.
*/

int main() {
    // Low Level I/O Example: Write to a file and read it back
    int fd = creat("lowlevel.txt", 0644); // Create file
    if (fd < 0) {
        perror("creat");
        exit(1);
    }
    char *msg = "Hello, low-level I/O!\n";
    write(fd, msg, strlen(msg));
    close(fd);

    fd = open("lowlevel.txt", O_RDONLY); // Open file for reading
    if (fd < 0) {
        perror("open");
        exit(1);
    }
    char buf[100];
    int n = read(fd, buf, sizeof(buf) - 1);
    if (n > 0) {
        buf[n] = '\0';
        printf("Read from file: %s", buf);
    }
    close(fd);

    // Random Access Example: Seek to a position in the file
    fd = open("lowlevel.txt", O_RDONLY);
    if (fd >= 0) {
        lseek(fd, 7, SEEK_SET); // Move to 7th byte
        n = read(fd, buf, 5);
        buf[n] = '\0';
        printf("Random access (5 bytes from 7th): %s\n", buf);
        close(fd);
    }

    // Example - Listing Directories
    printf("Directory listing for current directory:\n");
    DIR *d = opendir(".");
    struct dirent *entry;
    if (d) {
        while ((entry = readdir(d)) != NULL) {
            printf("%s\n", entry->d_name);
        }
        closedir(d);
    }

    // Example - An Implementation of Fopen and Getc using open/read
    printf("Reading file character by character:\n");
    fd = open("lowlevel.txt", O_RDONLY);
    if (fd >= 0) {
        char c;
        while (read(fd, &c, 1) == 1) {
            putchar(c);
        }
        close(fd);
    }

    // Example - A Storage Allocator (simple demonstration using malloc/free)
    printf("Simple storage allocator example:\n");
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr) {
        for (int i = 0; i < 5; i++) arr[i] = i * i;
        for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
        printf("\n");
        free(arr);
    }

    // Clean up
    unlink("lowlevel.txt"); // Delete the file

    return 0;
}