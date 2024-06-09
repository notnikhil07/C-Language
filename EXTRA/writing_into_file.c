#include <stdio.h>

int main() {
    FILE *pointerFile;
    char text[50];

    pointerFile = fopen("output.txt", "w");

    if (pointerFile == NULL) {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("Enter text to write into the file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(pointerFile, "%s", text);

    fclose(pointerFile);

    printf("SUCCESSFULL");

    return 0;
}