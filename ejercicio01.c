#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a,b;
    
    printf("dame un numero:");
    scanf("%i", &a);
    printf("dame otro numero:");
    scanf("%i", &b);
    if (a > b)
    {
        printf("\ta (%d) es mayor a b (%d). \n",a,b);
    }
    printf("\t el programa sigue su fujo");
    
   
}
