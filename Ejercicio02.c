#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;
    printf("Dame un numero:");
    scanf("%i", &num);
    if (num % 2 == 0)
    {
        printf("el numero es par\n");
    }
    else
    {
        printf("el numero es impar\n");
    }
    
}
