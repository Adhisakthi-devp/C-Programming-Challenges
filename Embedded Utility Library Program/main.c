#include <stdio.h>
#include "string.h"
#include "array.h"
#include "math.h"

int main()
{
    int choice;

    while(1)
    {
        printf("\n====== EMBEDDED UTILITY LIBRARY ======\n");
        printf("1. String Utilities\n");
        printf("2. Array Utilities\n");
        printf("3. Math Utilities\n");
        printf("4. Exit\n");

        printf("Enter Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {

        case 1:
        {
            int ch;
            char str1[100], str2[100];

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

            printf("Enter Choice : ");
            scanf("%d",&ch);

            switch(ch)
            {
                case 1:
                    printf("Enter String : ");
                    scanf("%s",str1);
                    printf("Length = %d\n",strLen(str1));
                    break;

                case 2:
                    printf("Enter String : ");
                    scanf("%s",str1);
                    strCopy(str1,str2);
                    printf("Copied String : %s\n",str2);
                    break;

                case 3:
                    printf("Enter First String : ");
                    scanf("%s",str1);

                    printf("Enter Second String : ");
                    scanf("%s",str2);

                    if(strCmp(str1,str2))
                        printf("Strings are Equal\n");
                    else
                        printf("Strings are Not Equal\n");

                    break;

                case 4:
                    printf("Enter Destination String : ");
                    scanf("%s",str1);

                    printf("Enter Source String : ");
                    scanf("%s",str2);

                    strConcat(str2,str1);

                    printf("Result : %s\n",str1);
                    break;

                case 5:
                    printf("Enter String : ");
                    scanf("%s",str1);

                    strRev(str1);

                    printf("Reversed String : %s\n",str1);
                    break;

                case 6:
                    printf("Enter String : ");
                    scanf("%s",str1);

                    printf("Vowels = %d\n",strCountVowel(str1));
                    break;

                case 7:
                    printf("Enter String : ");
                    scanf("%s",str1);

                    printf("Consonants = %d\n",strCountConsonant(str1));
                    break;

                case 8:
                    printf("Enter String : ");
                    scanf("%s",str1);

                    strtoUpper(str1);

                    printf("%s\n",str1);
                    break;

                case 9:
                    printf("Enter String : ");
                    scanf("%s",str1);

                    strtoLower(str1);

                    printf("%s\n",str1);
                    break;

                case 10:
                    printf("Enter String : ");
                    scanf("%s",str1);

                    if(strPalindrome(str1))
                        printf("Palindrome\n");
                    else
                        printf("Not Palindrome\n");

                    break;

                default:
                    printf("Invalid Choice\n");
            }

            break;
        }

        case 2:
        {
            int ch;

            printf("\n----- Array Utilities -----\n");
            printf("1. Maximum\n");
            printf("2. Minimum\n");
            printf("3. Sum\n");
            printf("4. Average\n");
            printf("5. Search\n");
            printf("6. Sort\n");
            printf("7. Reverse\n");
            printf("8. Count Occurrences\n");
            printf("9. Second Largest\n");
            printf("10. Copy Array\n");

            printf("Enter Choice : ");
            scanf("%d",&ch);

            switch(ch)
            {
                case 1:
                {
                    int n;
                    printf("Enter Array Size : ");
                    scanf("%d",&n);

                    int arr[n];

                    printf("Enter %d Elements :\n",n);
                    for(int i=0;i<n;i++)
                        scanf("%d",&arr[i]);

                    printf("Maximum = %d\n",findMaximum(arr,n));
                    break;
                }

                case 2:
                {
                    int n;
                    printf("Enter Array Size : ");
                    scanf("%d",&n);

                    int arr[n];

                    printf("Enter %d Elements :\n",n);
                    for(int i=0;i<n;i++)
                        scanf("%d",&arr[i]);

                    printf("Minimum = %d\n",findMinimum(arr,n));
                    break;
                }

                case 3:
                {
                    int n;
                    printf("Enter Array Size : ");
                    scanf("%d",&n);

                    int arr[n];

                    printf("Enter %d Elements :\n",n);
                    for(int i=0;i<n;i++)
                        scanf("%d",&arr[i]);

                    printf("Sum = %d\n",findSum(arr,n));
                    break;
                }

                case 4:
                {
                    int n;
                    printf("Enter Array Size : ");
                    scanf("%d",&n);

                    int arr[n];

                    printf("Enter %d Elements :\n",n);
                    for(int i=0;i<n;i++)
                        scanf("%d",&arr[i]);

                    printf("Average = %.2f\n",findAverage(arr,n));
                    break;
                }

                case 5:
                {
                    int n,key;

                    printf("Enter Array Size : ");
                    scanf("%d",&n);

                    int arr[n];

                    printf("Enter %d Elements :\n",n);
                    for(int i=0;i<n;i++)
                        scanf("%d",&arr[i]);

                    printf("Enter Element to Search : ");
                    scanf("%d",&key);

                    int pos = linearSearch(arr,n,key);

                    if(pos==-1)
                        printf("Element Not Found\n");
                    else
                        printf("Element Found at Index %d\n",pos);

                    break;
                }

                case 6:
                {
                    int n;

                    printf("Enter Array Size : ");
                    scanf("%d",&n);

                    int arr[n];

                    printf("Enter %d Elements :\n",n);
                    for(int i=0;i<n;i++)
                        scanf("%d",&arr[i]);

                    bubbleSort(arr,n);

                    printf("Sorted Array : ");
                    displayArray(arr,n);

                    break;
                }

                case 7:
                {
                    int n;

                    printf("Enter Array Size : ");
                    scanf("%d",&n);

                    int arr[n];

                    printf("Enter %d Elements :\n",n);
                    for(int i=0;i<n;i++)
                        scanf("%d",&arr[i]);

                    reverseArray(arr,n);

                    printf("Reversed Array : ");
                    displayArray(arr,n);

                    break;
                }

                case 8:
                {
                    int n,key;

                    printf("Enter Array Size : ");
                    scanf("%d",&n);

                    int arr[n];

                    printf("Enter %d Elements :\n",n);
                    for(int i=0;i<n;i++)
                        scanf("%d",&arr[i]);

                    printf("Enter Element : ");
                    scanf("%d",&key);

                    printf("Occurrences = %d\n",countOccurrences(arr,n,key));

                    break;
                }

                case 9:
                {
                    int n;

                    printf("Enter Array Size : ");
                    scanf("%d",&n);

                    int arr[n];

                    printf("Enter %d Elements :\n",n);
                    for(int i=0;i<n;i++)
                        scanf("%d",&arr[i]);

                    printf("Second Largest = %d\n",secondLargest(arr,n));

                    break;
                }

                case 10:
                {
                    int n;

                    printf("Enter Array Size : ");
                    scanf("%d",&n);

                    int arr[n];
                    int copy[n];

                    printf("Enter %d Elements :\n",n);
                    for(int i=0;i<n;i++)
                        scanf("%d",&arr[i]);

                    copyArray(arr,copy,n);

                    printf("Copied Array : ");
                    displayArray(copy,n);

                    break;
                }

                default:
                    printf("Invalid Choice\n");
            }

            break;
        }

        case 3:
        {
            int ch;

            printf("\nMath Utilities\n");
            printf("1.Power\n");
            printf("2.Factorial\n");
            printf("3.Prime Check\n");
            printf("4.GCD\n");
            printf("5.LCM\n");
            printf("6.Fibonacci\n");
            printf("7.Even/Odd\n");
            printf("8.Square\n");
            printf("9.Cube\n");
            printf("10.Absolute\n");

            scanf("%d",&ch);

            switch(ch)
            {
                case 1:
                {
                    int a,b;
                    printf("Base : ");
                    scanf("%d",&a);

                    printf("Exponent : ");
                    scanf("%d",&b);

                    printf("%d\n",power(a,b));
                    break;
                }

                case 2:
                {
                    int n;
                    scanf("%d",&n);
                    printf("%d\n",factorial(n));
                    break;
                }

                case 3:
                {
                    int n;
                    scanf("%d",&n);

                    if(isPrime(n))
                        printf("Prime\n");
                    else
                        printf("Not Prime\n");

                    break;
                }

                case 4:
                {
                    int a,b;
                    scanf("%d%d",&a,&b);
                    printf("%d\n",gcd(a,b));
                    break;
                }

                case 5:
                {
                    int a,b;
                    scanf("%d%d",&a,&b);
                    printf("%d\n",lcm(a,b));
                    break;
                }

                case 6:
                {
                    int n;
                    scanf("%d",&n);
                    printf("%d\n",fibonacci(n));
                    break;
                }

                case 7:
                {
                    int n;
                    scanf("%d",&n);

                    if(isEven(n))
                        printf("Even\n");
                    else
                        printf("Odd\n");

                    break;
                }

                case 8:
                {
                    int n;
                    scanf("%d",&n);
                    printf("%d\n",square(n));
                    break;
                }

                case 9:
                {
                    int n;
                    scanf("%d",&n);
                    printf("%d\n",cube(n));
                    break;
                }

                case 10:
                {
                    int n;
                    scanf("%d",&n);
                    printf("%d\n",absolute(n));
                    break;
                }

                default:
                    printf("Invalid Choice\n");
            }

            break;
        }

        

        case 4:

            return 0;

        default:

            printf("Invalid Choice\n");
        }
    }

    return 0;
}