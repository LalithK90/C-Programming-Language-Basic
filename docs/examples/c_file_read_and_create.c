#include <stdio.h>
#include <string.h>

int main() {
    FILE *md_file, *txt_file;
    char md_filename[] = "c_stdio_h_note.md";
    char txt_filename[256];
    char line[512];

    // Create .txt filename based on .md filename
    strcpy(txt_filename, md_filename);
    char *dot = strrchr(txt_filename, '.');
    if (dot != NULL) {
        strcpy(dot, ".txt");
    } else {
        strcat(txt_filename, ".txt");
    }

    // Open the Markdown file for reading
    md_file = fopen(md_filename, "r");
    if (md_file == NULL) {
        printf("Could not open file %s\n", md_filename);
        return 1;
    }

    // Open the new text file for writing
    txt_file = fopen(txt_filename, "w");
    if (txt_file == NULL) {
        printf("Could not create file %s\n", txt_filename);
        fclose(md_file);
        return 1;
    }

    // Read from .md and write to .txt
    while (fgets(line, sizeof(line), md_file)) {
        fputs(line, txt_file);
    }

    fclose(md_file);
    fclose(txt_file);

    printf("Content copied from %s to %s\n", md_filename, txt_filename);
    return 0;
}