#include <stdio.h>
int factorial(int num){
    int fact=1;
    for (int i=1;i<=num;i++){
        fact*=i;
    }
    return fact;
}
int isStrongNumber(int num){
    int temp=num,sum=0,d=0;
    while(temp>0){
        d=temp% 10;
        sum+=factorial(d);
        temp/=10;
    }
    return num==sum;
}
int main(){
    int n;
    printf("\nEnter the number to check Strong Number:\n");
    scanf("%d",&n);

    if(isStrongNumber(n))
        printf("%d is Strong Number", n);
    else
        printf("%d is not a Strong Number",n);
    return 0;
}