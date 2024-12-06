#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int lines = 0, words = 0, sentences = 0, letters = 0;
    int inWord = 0; // Flag to check if we're in a word


    printf("Enter the filename: ");
    scanf("%s", filename);

  
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        // Count letters
        if (isalpha(ch)) {
            letters++;
        }

        // Count sentences
        if (ch == '.' || ch == '!' || ch == '?') {
            sentences++;
        }

        // Count words
        if (isspace(ch) || ch == '\n') {
            if (inWord) {
                words++;
                inWord = 0; 
            }
        } else if (!isspace(ch)) {
            inWord = 1; 
        }

        // Count lines
        if (ch == '\n') {
            lines++;
        }
    }

    
    if (inWord) {
        words++;
    }


    fclose(file);


    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Sentences: %d\n", sentences);
}
