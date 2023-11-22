#include <stdio.h>

int main()
{
    int column1, column2;

    printf("Messi Win :  ");
    scanf("%d", &column1);

    printf("Ronaldo Win ");
    scanf("%d", &column2);

    for (int i = 1; i <= column1 || i <= column2; i++)
    {
        if (i <= column1)
        {
            printf("%d\t", i);
        }
        else
        {
            printf("\t");
        }

        if (i <= column2)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}
