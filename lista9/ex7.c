#include <stdio.h>
#define MAX 10

int main(){
    int i=0;
    char n1[MAX],n2[MAX];
    scanf("%s %s", n1,n2);
    if (n1[i]<n2[i])
    {
        printf("%s\n%s",n1,n2);
    }else{
        printf("%s\n%s",n2,n1);
    }
    
    return 0;
}