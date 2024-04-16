#include <stdio.h>

int main(){
    FILE *fa;
    int user;

    fa = fopen("texto.txt","a");
    for (int i = 0; i < 5; i++){
        scanf("%d", &user);
        fprintf(fa,"%d\n",user);
    }
    
    fclose(fa);
    return 0;
}