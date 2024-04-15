#include <stdio.h>
#include <string.h>

void contaSilabas(char nome[], int silabas){
    switch (silabas)
    {
    case 1:
        printf("A palavra %s eh MONOSSILABA\n", nome);
        break;

    case 2:
        printf("A palavra %s eh DISSILABA\n", nome);
        break;
    
    case 3:
        printf("A palavra %s eh TRISSILABA\n", nome);
        break;
    
    case 4:
        printf("A palavra %s eh POLISSILABA\n", nome);
        break;
    
    default:
        break;
    }
}

void recebeNome(){
    char nome1[15],nome2[15];
    int op, count=1;
    do
    {
        printf("Digite uma silaba\n");
        scanf(" %s", nome1);
        strcat(nome2,nome1);
        printf("Se deseja continuar digite 1 ou 0 para parar\n");
        scanf("%d", &op);
        if (op == 1){
            count++;
        }
    } while (op != 0);
    contaSilabas(nome2, count);
}

int main(){
    recebeNome();

    return 0;
}