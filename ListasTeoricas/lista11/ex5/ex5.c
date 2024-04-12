#include <stdio.h>

int main(){
    FILE *f;
    char nomeArq[10];
    int vet[10];

    scanf("%s", nomeArq);

    f = fopen(nomeArq, "w");

    for (int i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        fprintf(f, "%d;",vet[i]);
    }
    
    fclose(f);

    return 0;
}