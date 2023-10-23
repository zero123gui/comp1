#include <stdio.h>

void verificaTam(char l1, char l2){
    (l1 >= 'A' && l1 <= 'Z')?printf("%c eh maiuscula\n", l1):printf("%c eh minuscula\n",l1);
    (l2 >= 'A' && l2 <= 'Z')?printf("%c eh maiuscula\n",l2):printf("%c eh minuscula\n",l2);
}

void verificaOrdem(char l1, char l2){
    if(l1 > l2){
        printf("%c %c\n", l2, l1);
    }else printf("%c %c\n", l1, l2);
    
}

int main(){
    char l1,l2;
    scanf(" %c %c", &l1, &l2);
    verificaTam(l1,l2);
    verificaOrdem(l1,l2);
    return 0;
}