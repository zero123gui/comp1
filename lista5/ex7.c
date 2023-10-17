#include <stdio.h>

void verificaNome(char x){
    if (x == 'I')
    {
        printf("Infantil\n");
    }else if (x == 'J')
    {
        printf("Juvenil\n");
    }else if (x == 'A')
    {
        printf("Adulto\n");
    }
}

int main(){
    char inicial;
    scanf(" %c", &inicial);
    verificaNome(inicial);
    return 0;
}