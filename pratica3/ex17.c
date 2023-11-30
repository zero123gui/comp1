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
    printf("0-Pedra\n1-Papel\n2-Tesoura\n3-Espada");
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
        printf("Espada do usuario: %d e Espada do computador\n",espadaUser,espadaComp);
        if(espadaUser == 1 && espadaComp == 1 ||
           espadaUser == 0 && espadaComp == 0){
            resultado = 0;//empate retorna 0
        }else if(espadaUser == 1){
            resultado = 1;//empate retorna 1
        }else resultado = 2;//empate retorna 2    
    }else if(usuario == 3){//o usuario escolheu espada 
        int espadaUser = defineEspada();
        printf("Espada do usuario: %d",espadaUser);
        if(espadaUser==1){
            resultado = 1;
        }else resultado = 2;
    }else if(computador == 3){
        int espadaComp = defineEspada();
        printf("Espada do Computador: %d", espadaComp);
        if(espadaComp == 1){
            resultado = 2;
        }else return 1;
    }else if (usuario == computador){
        resultado = 0;
    }
    
    
    
    
}

int main(){
    srand(time(NULL));
    int resultado;
    for (int i = 0; i < 5; i++){
        resultado = defineResultado();
    }
    

    return 0;
}