//pro102 A C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int characters=0,words=0,lines=0;
	fp=fopen("sample.txt","r");
	char ch;
	

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) 
	{
        characters++;

        // Count words
        if (ch == ' ' || ch == '\n' || ch == '\t') 
		{
            words++;
        }

        // Count lines
        if (ch == '\n') {
            lines++;
        }
    }

    // Handling the last word (if the file doesn't end with a delimiter)
    if (characters > 0) 
	{
        words++;
    }

    fclose(fp);

    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);
    printf("Number of lines: %d\n", lines + 1); // Adding 1 for the last line

    return 0;
}
	

