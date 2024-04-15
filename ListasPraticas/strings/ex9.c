#include <stdio.h>
#include <string.h>
#include <math.h>
#define max 15

int verificaInteiro(char str[]){
    int sucessor=0, flag=0, ini=0, sinal=1;
    int vet[max], j, i, exp, tam;
    if (str[0] == '-')//verifica se é negativo
    {
        ini = 1;
        sinal = -1;
    }else if (str[0] == '+')//verifica se é positivo
    {
        ini = 1;
        sinal = 1;
    }
    

    for ( i = ini; str[i] != '\0'; i++)//percorre a string
    {
        if (str[i] < 48 || str[i] > 57)//verifica se é um número
        {
            printf("Numero incorreto!\n");//se n for numero liga flag e fala numero incorreto
            flag = 1;
            break;
        }
    }
    tam = strlen(str);
    if (!flag)
    {
        exp = tam-ini-1;
        for ( i = ini, j=0; i < tam; i++,j++)
        {
            vet[j] = str[i]-48;
            sucessor += vet[j] * pow(10, exp);
            exp--;
        }
        sucessor = sucessor * sinal;
        sucessor++;
    }
    
    return sucessor;
}

int main(){
    char str[max];
    int sucessor;
    scanf("%s", str);
    sucessor = verificaInteiro(str);
    printf("%d", sucessor);
    return 0;
}