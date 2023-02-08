#include <stdio.h>
#include <stdlib.h>

#include "include/data.h"
#define BUFSIZE 255



//---------------------------- Liste chaine ----------------------------//


//---------------------------- file ----------------------------//



/*FILE *open(char *fName, char *mode)
{
    FILE *file = fopen(fName, mode);

    if (!file) {
        printf("Unable to open file %s\n", fName);
        exit(1);
    }
    return file;
}

int *fileTodata(char *fName)
{
    FILE *file = open(fName, "r");
    char buff[BUFSIZE];
    static  int tab[12];

    for (int i = 0; fgets(buff, BUFSIZE, file); ++i)
            tab[i] = atoi(buff);
    fclose(file);
    return tab;
}

void dataToFile(char *fName, int *tab)
{
    FILE *file = open(fName, "w");

    for(int i = 0; i < 12; ++i)
        fprintf(file, "%d\n", tab[i]);

    fclose(file);
}*/