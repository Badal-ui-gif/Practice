#include <stdio.h>

void copyfile();

FILE *fsrc, *fdest;

int main()
{
    fsrc = fopen("source.txt", "w");
    fprintf(fsrc, "Hello World from C");
    fclose(fsrc);

    copyfile();

    return 0;
}

void copyfile()
{
    char strr[100];

    fsrc = fopen("source.txt", "r");
    if (fsrc == NULL)
    {
        printf("Error opening source file\n");
        return;
    }

    fdest = fopen("destination.txt", "w");  // FIXED
    if (fdest == NULL)
    {
        printf("Error opening destination file\n");
        fclose(fsrc);
        return;
    }

    // Copy full content line by line
    while (fgets(strr, sizeof(strr), fsrc) != NULL)
    {
        fputs(strr, fdest);
    }

    fclose(fsrc);
    fclose(fdest);

    printf("File copied successfully!\n");
}