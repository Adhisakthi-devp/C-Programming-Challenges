#include <stdio.h>
int memoryCompare(char arr1[],char arr2[],int n){
    for(int i=0;i<n;i++){
        if((int)arr1[i]!=(int)arr2[i]){
            if((int)arr1[i]>(int)arr2[i]){
            
                return 1;
            }
            if((int)arr1[i]<(int)arr2[i]){
                return -1;
            }      
        }
    }
    return 0;
}
int compareMemoryLength(int n1,int n2){
    if(n1==n2){
        int n=n1;
        return n;
    }
    else{
        printf("Both memory length are not equal,unable to compare\n");
        return -1;
    }
}
int main() {
    char blk1[5]={'A','B','C','D','E'};
    char blk2[5]={'A','B','C','D','E'};
    int len1=sizeof(blk1) / sizeof(blk1[0]);
    int len2=sizeof(blk2) / sizeof(blk2[0]);

    int n =compareMemoryLength(len1,len2);
    if(n==-1){
        return 0;
    }

    printf("Memory comparison\n");
    int result =memoryCompare(blk1,blk2,n);
    if (result == 0){
        printf("Both memory blocks are equal.\n");
    }
    else if (result > 0){
        printf("Block 1 is greater than Block 2.\n");
    }
    else{
        printf("Block 1 is smaller than Block 2.\n");
    }
    
    
    
    return 0;
}