#include <stdio.h>

int main(){

    int v[3], *p;
    p=v;

    //a) referencia V com sintaxe de colchetes
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o elemento %d ",i+1);
        scanf("%d", &v[i]);
        printf("V[%d] = %d", i, v[i]);
        printf("\n");
    }

    //b) ponteiro p com sintaxe de colchetes
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o elemento %d ",i+1);
        scanf("%d", &p[i]);
        printf("V[%d] = %d", i, p[i]);
        printf("\n");
    }

    //c) a referencia v com aritimetica de ponteiros
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o elemento %d ",i+1);
        scanf("%d", &v[i]);
        printf("V[%d] = %d", i, *(v+i));
        printf("\n");
    }

    //d) o ponteiro p com aritimetica de ponteiros
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o elemento %d ",i+1);
        scanf("%d", (p+i));
        printf("V[%d] = %d", i, *(p+i));
        printf("\n");
    }
    

    return 0;
}