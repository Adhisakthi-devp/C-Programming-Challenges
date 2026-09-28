#include <stdio.h>

int isPerfectNumber(int num){
    int temp=num,sum=0;
    for(int i=1 ; i<=num/2 ; i++){
        if(num<1) return 0;
        if(num%i==0){
            sum+=i;
        }
    }
    return num==sum;
}
int main(){
    int n;
    printf("\nEnter the number to check Perfect Number:\n");
    scanf("%d",&n);

    if(isPerfectNumber(n))
        printf("%d is Perfect Number", n);
    else
        printf("%d is not a Perfect Number",n);
    return 0;
    printf("Hello, World!");
}