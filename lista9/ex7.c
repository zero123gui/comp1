#include <stdio.h>
#include <string.h>

#define MAX 10

int main(){
    int resultado;
    char n1[MAX],n2[MAX];
    scanf("%s %s", n1,n2);
    resultado = strcmp(n1,n2);
    if (resultado == -1)
    {
        printf("%s\n%s",n1,n2);
    }else if(resultado == 1){
        printf("%s\n%s",n2,n1);
    }else printf("São iguais\n");
    
    return 0;
}