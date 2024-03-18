#include <stdio.h>
#include <string.h>

void buscaExata(char a[][20], char b[], int tamB){
    for (int i = 0; i < 4; i++)
    {
        /* code */
    }
    
}

int main(){
    char a[10][20] = {"o canto da mesa",
                      "todo mundo canta",
                      "cantigas musicais",
                      "na cantina escolar"};
    char b[10];
    int tamB;
    scanf("%s", b);
    tamB = strlen(b);
    buscaExata(a,b,tamB);
    return 0;
}