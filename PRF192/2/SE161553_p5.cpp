#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int nVowels = 0, nConsonants = 0, nOthers = 0;
    char ch;
    printf("Press a string: ");

    do
    {
        ch = getchar();
        putchar(ch);

        if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
        {
            switch (ch)
            {
            case 'E':
                nVowels++;
                break;
            case 'U':
                nVowels++;
                break;
            case 'O':
                nVowels++;
                break;
            case 'A':
                nVowels++;
                break;
            case 'I':
                nVowels++;
                break;
            case 'e':
                nVowels++;
                break;
            case 'u':
                nVowels++;
                break;
            case 'o':
                nVowels++;
                break;
            case 'a':
                nVowels++;
                break;
            case 'i':
                nVowels++;
                break;

            default:
                nConsonants++;
                break;
            }
        }
        else if (ch != 10)
            nOthers++;

    } while (ch != '\n');
    printf("\nVowel: %d", nVowels);
    printf("\nConsonants: %d", nConsonants);
    printf("\nOthers: %d", nOthers);
}
