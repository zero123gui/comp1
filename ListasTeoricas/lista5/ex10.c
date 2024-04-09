#include <stdio.h>

void verificaIdade(int age){
    (age >= 18 && age <= 67) ? printf("blah blah\n"):printf("blhe bleh\n");
}

int main(){
    int idade;
    scanf("%d", &idade);
    verificaIdade(idade);
    return 0;
}