#include <stdio.h>
#include <stdlib.h>

int main() {
    // FILE is a data type
    FILE *pFile = fopen("employees.txt", "w"); // if this file does not exists, it will be created

    fprintf(pFile, "This is awesome \n I just have broken a line \n C language \n");

    fclose(pFile);

    // **********************************************************

    FILE *pFileToAppend = fopen("random.txt", "a"); // if this file does not exists, it will be created, append mode does not overwrite, but append text to the end of the file

    fprintf(pFileToAppend, "This is awesome \n I just have broken a line \n C language \n");

    fclose(pFileToAppend);

    // **********************************************************
    
    char line[255];
    FILE *pFileToRead = fopen("employees.txt", "r"); // read mode

    fgets(line, 255, pFileToRead); // reads the first line of the file and puts its contents in the variable line

    fclose(pFileToRead);
    
    // **********************************************************

    return 0;
}