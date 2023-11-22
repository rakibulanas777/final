#include <stdio.h>

int main()
{
    char name[50];
    int charCount = 0, vowelCount = 0, consonantCount = 0;
    printf("Enter your name: ");
    scanf("%s", name);

    for (int i = 0; name[i] != '\0'; i++)
    {
        char currentChar = name[i];

        if ((currentChar >= 'a' && currentChar <= 'z') || (currentChar >= 'A' && currentChar <= 'Z'))
        {
            charCount++;
            if (currentChar == 'a' || currentChar == 'A' || currentChar == 'e' || currentChar == 'E' ||
                currentChar == 'i' || currentChar == 'I' || currentChar == 'o' || currentChar == 'O' ||
                currentChar == 'u' || currentChar == 'U')
            {
                vowelCount++;
            }
            else
            {
                consonantCount++;
            }
        }
    }
    printf("Number of characters in the name: %d\n", charCount);
    printf("Number of vowels in the name: %d\n", vowelCount);
    printf("Number of consonants in the name: %d\n", consonantCount);

    return 0;
}
