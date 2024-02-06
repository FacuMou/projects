#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUMBER_SIZE 12

int romanToInt(char *s);

int main(void)
{
    char input[MAX_NUMBER_SIZE];
    int romanNumeral = 0;
    printf("Type a Roman Number: ");
    scanf("%s", input);

    romanNumeral = romanToInt(input);
    printf("The number is %d\n", romanNumeral);
    return 0;
}

int romanToInt(char *s)
{
    int number = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        switch (s[i])
        {
        case 'I':
            number += 1;
            i += 1;
            break;
        case 'V':
            number += 5;
            if (i >= 1)
            {
                if (s[i - 1] == 'I')
                {
                    number -= 2;
                }
            }
            i += 1;
            break;
        case 'X':
            number += 10;
            if (i >= 1)
            {
                if (s[i - 1] == 'I')
                {
                    number -= 2;
                }
            }
            i += 1;
            break;
        case 'L':
            number += 50;
            if (i >= 1)
            {
                if (s[i - 1] == 'X')
                {
                    number -= 20;
                }
            }
            i += 1;
            break;
        case 'C':
            number += 100;
            if (i >= 1)
            {
                if (s[i - 1] == 'X')
                {
                    number -= 20;
                }
            }
            i += 1;
            break;
        case 'D':
            number += 500;
            if (i >= 1)
            {
                if (s[i - 1] == 'C')
                {
                    number -= 200;
                }
            }
            i += 1;
            break;
        case 'M':
            number += 1000;
            if (i >= 1)
            {
                if (s[i - 1] == 'C')
                {
                    number -= 200;
                }
            }
            i += 1;
            break;
        }
    }
    return number;
}