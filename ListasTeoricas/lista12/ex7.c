#include <stdio.h>

/*void funcaoA(){
    int x = 10, y;
    int *p; 
    
    p = &x; 
    y = *p + 100;
    printf("%d %d", y, *p);
}*/


int main(){

    //funcaoA();
    int num1=50, num2=60, *p, *q;
    p=&num1;
    q=&num2;
    printf("%d %d\n", num1, num2);
    *p = 5;
    *q = 3;
    printf("%d %d", num1, num2);


    return 0;
}