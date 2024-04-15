#include <stdio.h>

int main(){
    float x;
    int y, notas=0, moedas=0, cem, cinquenta, vinte, dez, cinco, dois, um;
    int cinquentacents, vintecents, dezcents, cincocents;
    scanf("%f", &x);
    x= x*100.00;
    y = x;

    if(y>=10000){
        cem = y/10000;
        notas = cem;
        y -= cem*10000;
    }if(y>=5000){
        cinquenta = y/5000;
        notas += cinquenta;
        y -= cinquenta*5000;
    }if(y>=2000){
        vinte = y/2000;
        notas += vinte;
        y -= vinte*2000;
    }if (y>=1000){
        dez = y/1000;
        notas += dez;
        y -= dez*1000;
    }if (y>=500){
        cinco = y/500;
        notas += cinco;
        y -= cinco*500;
        printf("%d\n", y);
    }if (y>=200){
        dois = y/200;
        notas += dois;
        y -= dois*200;
    }if (y>=100){
        um = y/100;
        moedas += um;
        y -= um*100;
    }if (y>=50){
        cinquentacents = y/50;
        moedas += cinquentacents;
        y -= cinquentacents*50;
    }if (y>=25){
        vintecents = y/25;
        moedas += vintecents;
        y -= vintecents*25;
    }if (y>=10){
        dezcents = y/10;
        moedas += dezcents;
        y -= dezcents*10;
    }if (y>=5){
        cincocents = y/5;
        moedas += cincocents;
        y -= cincocents*5;
    }if (y>=1){
        moedas += y;
    }
    printf("Notas %d\n", notas);
    printf("Moedas %d\n", moedas);
    
    
    
    
    return 0;
}