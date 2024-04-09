#include <stdio.h>

int main(){
    FILE *f;
    int x=5,y=10,z=15;

    f = fopen("ex3.txt", "w");
    fprintf(f,"%d\n%d\n%d\n",x,y,z);
    fscanf(f,"%d %d %d", &x, &y, &z);
    printf("%d %d %d", x,y,z);
    fclose(f);

    return 0;
}