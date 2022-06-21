#include <stdio.h>
#include <stdlib.h>

int main()
{   
    FILE* file = malloc(sizeof(FILE));
    file = fopen("test_in.txt", "r");
    char* buffer = malloc(sizeof(FILE));
     while (!feof(file)) {
        fgets(buffer, sizeof(FILE), file);
        printf("%s", buffer);
     }
    //fgets(buffer, sizeof(FILE), file);
    //printf("%s\n", buffer);
    return 0;
}