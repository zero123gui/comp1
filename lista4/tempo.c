#include <stdio.h>      /* puts, printf */
#include <time.h>       /* time_t, struct tm, time, localtime */

int main ()
{
    int ano;
    scanf("%d", &ano);
    time_t rawtime;
    struct tm * timeinfo;
    time (&rawtime);
    timeinfo = localtime (&rawtime);
    int anoAtual = timeinfo->tm_year - ano + 1900;
    printf("%d",anoAtual);

  return 0;
}