#include<stdio.h>

int main(){
    FILE *pointerFile;
    char line[20];
    pointerFile = fopen("output.txt", "r");
    if(pointerFile == NULL){
        printf("Unable to open file.\n");
        return 1;
    }
    while(fgets(line, sizeof(line), pointerFile)){
        printf("%s", line);
    }

    fclose(pointerFile);
    return 0;
}