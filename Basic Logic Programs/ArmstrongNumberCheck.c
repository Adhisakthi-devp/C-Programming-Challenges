
//Program to check wheather the number is Armstrong Number or Not 
#include <stdio.h>
#include <math.h>
int countDigit(int n){
    int temp = n,count=0;
    while(temp>0){
        count+=1;
        temp/=10;
    }
    return count;
}
int isArmstrongNumber(int num){
    int temp=num,sum=0,d=0;
    int c=countDigit(num);
    while(temp>0){
        d=temp%10;
        sum+=pow(d,c);
        temp/=10;
    }
    return num==sum;
}
int main() {
    int n;
    printf("\nEnter the number to check Armstrog Number:\n");
    scanf("%d",&n);
    if(isArmstrongNumber(n))
        printf("%d is Armstrong Number", n);
    else
        printf("%d is not a Armstrong Number",n);
    return 0;
}