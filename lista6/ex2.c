#include <stdio.h>

void conta20minusculo(){
    char i='a';
    int count=1;
    while(i<'a'+20){
        printf("%d - %c\n",count,i);
        i++;
        count++;
    }
}

void conta20maiusculo(){
    char i='A';
    int count=1;
    while(i<'A'+20){
        printf("%d - %c\n",count,i);
        i++;
        count++;
    }
}

void conta20invertido(){
    int i=1;
    while(i<=26){
        printf("%d - %c\n",i,'z'-i+1);
        i++;
    }
}

int main(){
    conta20minusculo();
    conta20maiusculo();
    conta20invertido();
    return 0;
}