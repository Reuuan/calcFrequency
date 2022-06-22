#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "bstree.h"

int main()
{

    FILE *file = malloc(sizeof(FILE));
    file = fopen("test_in.txt", "r");
    char *buffer = malloc(sizeof(FILE));

    bst *tree = bstree_create(" ", 0);
    bst *node = NULL;
    while (!feof(file))
    {
        fgets(buffer, sizeof(FILE), file);

        for (int i = 0; buffer[i] != '\n'; i++)
        {
            char word[20];
            int a = 0;
            int j;
            for (int j = i; (tolower(buffer[j]) >= 97) && (tolower(buffer[j] <= 122)); j++)
            {
                word[a] = buffer[j];
                a++;
            }
            word[a+1] = '\n';
            printf("%s\n", word);
        }
    }

    // fgets(buffer, sizeof(FILE), file);
    // printf("%s\n", buffer);

    return 0;
}