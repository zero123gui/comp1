#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int num;
    num = rand()%101;
    printf("%d\n",num);

    return 0;
}