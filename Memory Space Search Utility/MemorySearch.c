#include <stdio.h>
void display(char arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        count++;
        printf("%c   ",arr[i]);
        if(count==13) {
            count=0;printf("\n");
        }
    }
}
int memorySearch(char arr[],int n,char x){
    for(int i=0;i<n;i++){
        if(arr[i]==x) {
            return i;   
        }
    }
    return -1;
}


int main() {
    char memory[100] = {
    'G', 'm', '7', '$', 'k', 'A', '3', '#', 'x', 'P', '9', '@', 'L', '4', '%', 'W', 'v', '2', '&',
    'b', 'R', '8', '*', 'z', 'M', '5', '!', 'y', 'T', '1', '?', 'H', 'j', '6', '^', 'f', 'K', '0', '-',
    'c', 'N', 'c', '_', 'p', 'Q', 't', '+', 'd', 'B', 'V', '=', 'w', 's', 'U', 'J', 'X', 'Y', 'Z', 'a',
    'e', 'g', 'h', 'i', 'l', 'n', 'o', 'r', 'u', 'C', 'D', 'E', 'F', 'I', 'O', 'S', '.', '/', '<', '>',
    '(', ')', '[', ']', '{', '}', ';', ':', ',', '~', '`', '|', '\\', '\'', '\"', 'O', 'X', '7', 'w'};
    int n = sizeof(memory) / sizeof(memory[0]);
    while(1){
        char key;
        printf("\n-->what are you serching for ..?\n");
        printf("-->if you want exit from program, press space then enter\n-->if you want to display memory, press '#' then enter \n");
        scanf(" %c",&key);
        if(key=='q') break;
        if(key=='#') {
            display(memory,n);
            continue;
        }
        //printf("1.Capital alphabets\n2.small alphabets\n3.symbols\n4.numbers\n5.exit")
        int pos=memorySearch(memory,n,key);
        if(pos!=-1){
            printf("\nSearching Element %c found at the position %d in the memory Space\n",key,pos);
        }
        else{
            printf("Element not found\n");
        }      
    }
    

    return 0;
}