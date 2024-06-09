#include <stdio.h>

int main() {
    FILE *first_file, *second_file;
    char ch;

    first_file = fopen("first.txt", "r");
    if (first_file == NULL) {
        perror("Error opening source file");
        return 1;
    }

    second_file = fopen("second.txt", "w");
    if (second_file == NULL) {
        perror("Error opening second file");
        fclose(first_file);
        return 1;
    }

    while ((ch = fgetc(first_file)) != EOF) {
        fputc(ch, second_file);
    }

    printf("File copied successfully.\n");

    fclose(first_file);
    fclose(second_file);

    return 0;
}