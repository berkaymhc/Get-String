#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[80];
    FILE *belge;
    char word[500];


    belge = fopen("C:\\Users\\berka\\OneDrive\\Masaüstü\\belge.txt", "r");

    if (belge == NULL)
        printf("Can't open %s for reading.\n", name);
    else
    {
        while (fscanf(belge, "%s", word) != EOF)
        {
            printf("%s\n", word);
        }
        fclose(belge);
    }
    return 0;
}
