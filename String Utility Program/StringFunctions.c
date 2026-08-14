#include <stdio.h>

//string length
int strLen(char str[]){
    int i=0;
   while(str[i]!='\0'){
       i+=1;
   }
   return i;
}

//string copy
void strCopy(char src[],char dest[]){
    printf("String Coping..!\n");
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] ='\0';
}
//string compare
int strCmp(char str1[],char str2[]){
    int n=strLen(str1);
    int m=strLen(str2);
    if (n != m) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (str1[i] != str2[i]) {
            
            return 0; 
        }
    }
    return 1;
}
//string concatination
void strConcat(char src[], char dest[]) {
    int i = 0;
    int j = strLen(dest);
    while (src[i] != '\0') {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
}
//string reverse

void strRev(char str[]){
    int start=0;
    int end=strLen(str)-1;
    while(start<end){
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;end--;
    }
}
//string vowel count
int strCountVowel(char str[]) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0'){
        char ch = str[i];
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        i++;
    }
    return count;
}
//string consonent count
int strCountConsonant(char str[]) {
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (!(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                  ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
                count++;
            }
        }
        i++;
    }
    return count;
}
//string to uppercase
void strtoUpper(char str[]){
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        i++;
    }
}
//string to lower case
void strtoLower(char str[])
{
    int i=0;

    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }

        i++;
    }
}
//string check for palindrome
int strPalindrome(char str[]) {
    int start = 0;
    int end = strLen(str) - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main()
{
    while(1){
    int ch;
    char str1[100], str2[200];

    printf("\n----- String Utilities -----\n");
    printf("1. String Length\n");
    printf("2. String Copy\n");
    printf("3. String Compare\n");
    printf("4. String Concatenate\n");
    printf("5. String Reverse\n");
    printf("6. Count Vowels\n");
    printf("7. Count Consonants\n");
    printf("8. Convert to Uppercase\n");
    printf("9. Convert to Lowercase\n");
    printf("10. Palindrome Check\n");
    printf("11.Exit..\n");

    printf("Enter Choice : ");
    scanf("%d",&ch);

        if(ch == 1)
        {
            printf("Enter String : ");
            scanf("%s",str1);

            printf("Length = %d\n",strLen(str1));
        }
        else if(ch == 2)
        {
            printf("Enter String : ");
            scanf("%s",str1);

            strCopy(str1,str2);

            printf("Copied String : %s\n",str2);
        }
        else if(ch == 3)
        {
            printf("Enter First String : ");
            scanf("%s",str1);

            printf("Enter Second String : ");
            scanf("%s",str2);

            if(strCmp(str1,str2))
                printf("Strings are Equal\n");
            else
                printf("Strings are Not Equal\n");
        }
        else if(ch == 4)
        {
            printf("Enter Destination String : ");
            scanf("%s",str1);

            printf("Enter Source String : ");
            scanf("%s",str2);

            strConcat(str2,str1);

            printf("Concatenated String : %s\n",str1);
        }
        else if(ch == 5)
        {
            printf("Enter String : ");
            scanf("%s",str1);

            strRev(str1);

            printf("Reversed String : %s\n",str1);
        }
        else if(ch == 6)
        {
            printf("Enter String : ");
            scanf("%s",str1);

            printf("Number of Vowels = %d\n",strCountVowel(str1));
        }
        else if(ch == 7)
        {
            printf("Enter String : ");
            scanf("%s",str1);

            printf("Number of Consonants = %d\n",strCountConsonant(str1));
        }
        else if(ch == 8)
        {
            printf("Enter String : ");
            scanf("%s",str1);

            strtoUpper(str1);

            printf("Uppercase : %s\n",str1);
        }
        else if(ch == 9)
        {
            printf("Enter String : ");
            scanf("%s",str1);

            strtoLower(str1);

            printf("Lowercase : %s\n",str1);
        }
        else if(ch == 10)
        {
            printf("Enter String : ");
            scanf("%s",str1);

            if(strPalindrome(str1))
                printf("Palindrome\n");
            else
                printf("Not Palindrome\n");
        }
        else if(ch == 11)
        {
            printf("Exiting...\n");
            break;
        }
        else
        {
            printf("Invalid Choice\n");
        }
    }
}