#include <stdio.h>
#include <stdlib.h>
/*N times for a sentence entered by the user to the info.txt file
C program that allows it to be written one under the other.*/

int main()
{
    FILE*file;
    char sentence[30];
    int N,i;
    file=fopen("info.txt","w");
    if(file==NULL)
    {
        printf("The file could not be created.");
    }
    else
    {
        printf("Please,enter a sentence:");
        gets(sentence);
        printf("Enter how many lines to write:");
        scanf("%d",&N);
        for(i=1;i<=N;i++)
        {
            fprintf(file,"line no:%d Sentence:%s \n",i,sentence);
        }
        fclose(file);
        printf("The information has been written to the file.");
    }





    return 0;
}
