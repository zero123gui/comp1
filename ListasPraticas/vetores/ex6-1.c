#include <stdio.h>

void funcao1(int v1[], int v2[]){
    int aux, flag;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (v1[i]==v2[j])
            {
                aux = v1[i];
                flag = 1;
                break;
            }
        }
        if (flag == 1){
            printf("%d ",aux);
        }
        flag = 0;
    }
}

void funcao2(int v1[]){
    int v3[10]={0,0,0,0,0}, j=0, flag=0, n;

    for (int i = 4; i >= 0; i--){

        for ( n = i-1; n >= 0; n--){
            if (v1[i]==v1[n]){
            flag++;
        }
        }
        if (flag == 0){
            v3[j] = v1[i];
            j++;
        }
        flag=0;
    }
    for (int i = 0; i < 5; i++){
        printf("%d ",v3[i]);
    }
    
}

int main(){
    int v1[5]={1,2,5,4,5};
    int v2[5]={5,6,7,8,9};
    funcao1(v1,v2);
    funcao2(v1);
    funcao2(v2);
    return 0;
}