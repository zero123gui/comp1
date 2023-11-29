#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int escolhaComputador(){
    int computador;
    computador = rand()%4;
    if(computador==3){
        computador = rand()%10;
        if(computador>3){
            computador = 4;//espada quebrada recebe 5 como valor
        }else computador = 3;//espada funcionando recebe 4 como valor;
    }
    return computador;
}

int main(){
    srand(time(NULL));
    int n=5, placar=1, usuario, computador;
    printf("%d",computador);
    while(n>5){
        printf("Escolha 1 das 4 opções:\nPedra=0\nPapel=1\nTesoura=2\nEspada=3\n");
        scanf("%d", &usuario);
        computador = escolhaComputador();
        if(usuario == 3){
            usuario = rand()%10;
            if(usuario > 3){
                usuario = 4;
            }else usuario = 3;
        }
        
        n--;
    }
    return 0;
}