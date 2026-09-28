//Program to check wheather the number is Prime or not

#include <stdio.h>
int isPrime(int num){
    if(num<2) return 0;
    for(int i=2;i*i<=num;i++){
        if(num%i==0) return 0;
    }
    return 1;
}

int main() {

    int n;    
    printf("\nEnter the number to check prime :\n");
    scanf("%d",&n);
        
    if(isPrime(n)) printf("%d is Prime number",n);
    else printf("%d is not a prime number",n);
    return 0;
}