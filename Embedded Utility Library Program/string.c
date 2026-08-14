#include "string.h"
#include <stdio.h>

int strLen(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}

void strCopy(char src[], char dest[])
{
    printf("String Copying..!\n");

    int i = 0;

    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
}

int strCmp(char str1[], char str2[])
{
    int n = strLen(str1);
    int m = strLen(str2);

    if(n != m)
    {
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        if(str1[i] != str2[i])
        {
            return 0;
        }
    }

    return 1;
}

void strConcat(char src[], char dest[])
{
    int i = 0;
    int j = strLen(dest);

    while(src[i] != '\0')
    {
        dest[j] = src[i];
        i++;
        j++;
    }

    dest[j] = '\0';
}

void strRev(char str[])
{
    int start = 0;
    int end = strLen(str) - 1;

    while(start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int strCountVowel(char str[])
{
    int count = 0;
    int i = 0;

    while(str[i] != '\0')
    {
        char ch = str[i];

        if(ch == 'A' || ch == 'E' || ch == 'I' ||
           ch == 'O' || ch == 'U' ||
           ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u')
        {
            count++;
        }

        i++;
    }

    return count;
}

int strCountConsonant(char str[])
{
    int count = 0;
    int i = 0;

    while(str[i] != '\0')
    {
        char ch = str[i];

        if((ch >= 'A' && ch <= 'Z') ||
           (ch >= 'a' && ch <= 'z'))
        {
            if(!(ch == 'A' || ch == 'E' || ch == 'I' ||
                 ch == 'O' || ch == 'U' ||
                 ch == 'a' || ch == 'e' || ch == 'i' ||
                 ch == 'o' || ch == 'u'))
            {
                count++;
            }
        }

        i++;
    }

    return count;
}

void strtoUpper(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        i++;
    }
}

void strtoLower(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }
}

int strPalindrome(char str[])
{
    int start = 0;
    int end = strLen(str) - 1;

    while(start < end)
    {
        if(str[start] != str[end])
        {
            return 0;
        }

        start++;
        end--;
    }

    return 1;
}