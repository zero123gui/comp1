#include <stdio.h>
#include <stdlib.h>

void verificaTriangulo(int a, int b, int c){
    if(a>abs(b-c) && a<(b+c)){
        if(b>abs(a-c) && b<(a+c)){
            if(c>abs(a-b) && c<(a+b)){
                printf("Ele vive\n"); 
            }
        }
    }
    
}

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    verificaTriangulo(a,b,c);
    return 0;
}