#include <stdio.h>

int isNeonNumber(int num){
    int square=num*num,sum=0;
    while(square>0){
        sum+=(square%10);
        square/=10;
    }
    return num==sum;
}
int main(){
    int n;
    printf("\nEnter the number to check Neon Number:\n");
    scanf("%d",&n);

    if(isNeonNumber(n))
        printf("%d is Neon Number", n);
    else
        printf("%d is not a Neon Number",n);
    return 0;
}