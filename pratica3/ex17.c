#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int defineEspada(){
    int espada, acerto;
    espada = rand()%100;
    if(espada<40){
        acerto = 1;//espada normal retorna 1
    }else acerto = 0;//espada quebrada retorna 0
    return acerto;
}

int defineComputador(){
    int computador;
    computador = rand()%4;
    //0-pedra 1-papel 2-tesoura 3-espada
    return computador;
}

int defineUsuario(){
    int usuario;
    printf("0-Pedra\n1-Papel\n2-Tesoura\n3-Espada\n");
    scanf("%d", &usuario);
    return usuario;
}

int defineResultado(){
    int computador, usuario, resultado;
    usuario = defineUsuario();
    computador = defineComputador();
    printf("O PC escolheu: %d\n", computador);
    printf("O usuario escolheu: %d\n", usuario);
    if(usuario == 3 && computador == 3){//os dois escolheram espada
        int espadaUser = defineEspada();
        int espadaComp = defineEspada();
        printf("Espada do usuario: %d e Espada do computador: %d\n",espadaUser,espadaComp);
        if((espadaUser == 1 && espadaComp == 1) || (espadaUser == 0 && espadaComp == 0)){
            resultado = 0;//empate retorna 0
        }else if(espadaUser == 1){
            resultado = 1;//usuario ganhou retorna 1
        }else resultado = 2;//computador ganhou retorna 2    
    }else if(usuario == 3){//o usuario escolheu espada 
        int espadaUser = defineEspada();
        printf("Espada do usuario: %d",espadaUser);
        if(espadaUser==1){
            resultado = 1;//user ganhou retorna 1
        }else resultado = 2;//comp ganhou 
    }else if(computador == 3){
        int espadaComp = defineEspada();
        printf("Espada do Computador: %d", espadaComp);
        if(espadaComp == 1){
            resultado = 2;//comp ganhou
        }else return 1;//user ganhou
    }else if (usuario == computador){
        resultado = 0;//empate
    }else if(
            //pedra e tesoura
            (usuario == 0 && computador == 2) ||
            //papel e pedra
            (usuario == 1 && computador == 0) ||
            //tesoura e papel
            (usuario == 2 && computador == 1)){
        resultado = 1;//usuario ganhou
    }else resultado = 2;
    return resultado;
}

int main(){
    srand(time(NULL));
    int resultado, scoreUser=0, scorePC=0;
    for (int i = 0; i < 5; i++){
        resultado = defineResultado();
        if(resultado == 1){
            scoreUser+=1;
            printf("Usuario ganhou\n");
        }else if(resultado == 2){
            scorePC+=1;
            printf("Computador ganhou\n");
        }
    }
    if(scoreUser==3){
        printf("O jogador ganhou\nPlacar = %dx%d\n", scoreUser, scorePC);
    }else printf("O computador ganhou\nPlacar = %dx%d\n", scoreUser, scorePC);
    

    return 0;
}