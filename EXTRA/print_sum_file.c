#include<stdio.h>

int main (){
    FILE *pointerFile;
    int num[50],i=0,sum=0;
    pointerFile=fopen("int1.txt","r");

    if(pointerFile == NULL)
     {
      printf("File Not Found\n");
      exit(0);
     }
     else
     {
      while(fscanf(pointerFile,"%d",&num[i])!=EOF)
      {
       i++;
      }
     }

     for(i=0;i<10;i++)
     {
      sum+=num[i];
     }
    printf("Sum=%d\n",sum);
    fclose(pointerFile);
}