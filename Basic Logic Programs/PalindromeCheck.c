//Program to check wheather the number is palindrome or Not
#include <stdio.h>
int isPalindromeNumber(int num){
    int temp=num;
    int sum=0;
    int rev=0;
    if(num<0) return 0;
    while(temp>0){
        rev=(rev*10)+(temp%10);
        temp/=10;
    }
    return rev==num;

}


int main() {

    int n;
    while(1){
        
        printf("\nEnter the number to check Palindrome :\n");
        scanf("%d",&n);
        
        if(isPalindromeNumber(n)) printf("%d is palindrome Number",n);
        else printf("%d is not a not a palindrome Number",n);
        break;
        
    }
    return 0;
}
