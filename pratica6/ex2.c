#include <stdio.h>
#include <string.h>
#define MAX 15

int main(){
    char nome[MAX];
    scanf("%s", nome);
    int i, aux=0;
    for (i = 0; i < MAX; i++){
        if (nome[i] == 'a'||nome[i] == 'e'||nome[i] == 'i'||nome[i] == 'o'||nome[i] == 'u')
        {
            aux++;
        }
    }
    printf("%d",aux);
    
    

    return 0;
}