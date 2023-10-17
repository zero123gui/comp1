#include <stdio.h>

void verificaIdade(int age){
    if (age <= 10){
        printf("eh uma crianca");
    }else if (age>=11 && age<=17){
        printf("eh um adolescente");
    }else if (age>=18 && age<=59){
        printf("eh um adulto");
    }else{
        printf("eh um idoso");
    }
    
    
    
    

}

int main(){
    int idade;
    scanf("%d", &idade);
    verificaIdade(idade);
    return 0;
}