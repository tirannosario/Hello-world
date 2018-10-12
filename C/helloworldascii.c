#include <stdio.h>

int main()
{
    char string[] = {'H','e','l','l','o',' ','W','o','r','l','d'};
    printf("\nPRINTED IN ASCII: ");
    for(int i=0; i<sizeof(string); i++)
        printf("%d ",string[i]);
    return 0;
}
