#include <stdio.h>

int main()
{
    int a, b, sum = 0;
    printf("Sample Input: ");
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        sum += i;
    }

    printf("Output: %d", sum);

    return 0;
}
