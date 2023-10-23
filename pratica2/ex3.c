#include <stdio.h>

void verificaUsuario(int cod, int password){
    if(cod != 1234){
        printf("Usuario invalido\n");
    }else if(password != 9999){
        printf("Senha invalida\n");
    }else printf("Acesso permitido\n");
}

int main(){
    int codigo, senha;
    scanf("%d %d", &codigo, &senha);
    verificaUsuario(codigo,senha);
    return 0;
}