#include <stdio.h>

int calculaMaior(int x, int y, int z){
    if (x > y && x > z)
    {
        return x;
    }else if (y > x && y > z)
    {
        return y;
    }else return z;
}

int recebeValores(){
    int a, b, c, resultado;
    scanf("%d %d %d", &a, &b, &c);
    resultado = calculaMaior(a,b,c);
    return resultado;
}

int main(){
    int maior1, maior2;
    maior1 = recebeValores();
    printf("O maior 1 eh: %d\n", maior1);
    maior2 = recebeValores();
    printf("O maior 2 eh: %d", maior2);
    return 0;
}