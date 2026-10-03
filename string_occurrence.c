#include <stdio.h>
#include <string.h>

int main()
{
    char words[6][50];
    char search[50];
    int count = 0;

    printf("Enter 6 words:\n");

    for (int i = 0; i < 6; i++)
    {
        printf("Word %d: ", i + 1);
        scanf("%49s", words[i]);
    }

    printf("\nEnter word to search: ");
    scanf("%49s", search);

    for (int i = 0; i < 6; i++)
    {
        if (strcmp(words[i], search) == 0)
        {
            count++;
        }
    }

    printf("'%s' occurs %d time(s).\n", search, count);

    return 0;
}
