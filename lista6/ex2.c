#include <stdio.h>

int main(){
    char i='a';
    int count=1;
    while(i<'a'+20){
        printf("%d - %c\n",count,i);
        i++;
        count++;
    }
    return 0;
}