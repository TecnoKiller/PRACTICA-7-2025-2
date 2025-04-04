// Silva Zinzu Andrik Leonardo
#include <stdio.h>
#include <math.h>

int main()
{
    int opc,a,b,res;
    float resf;
    res = 0;


    do
    {
        printf("-----------------------\n");
        printf("Calculadora\n");
        printf("\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5. Potenciacion\n");
        printf("6. Radicacion\n");
        printf("\n");
        printf("Ingrese 0 para finalizar\n");
        printf("Ingrese la opcion: ");
        scanf("%d", &opc);
        printf("\n");
        if (opc == 0)
        {
            printf("Finalizando...\n");
            return 0;
        }
        if (opc == 6)
        {
            printf("\n");
            printf("Ingrese el numero a\n");
            printf("A: ");
            scanf("%d", &a);
        }
        else
        {
            printf("\n");
            printf("Ingrese los numeros a y b\n");
            printf("\n");
            printf("A: ");
            scanf("%d", &a);
            printf("B: ");
            scanf("%d", &b);
        }

        switch (opc)
        {
        case 1:

            res = a + b;
            printf("Resultado: %d\n",res);
            break;
        case 2:

            res = a - b;
            printf("Resultado: %d\n",res);
            break;
        case 3:

            res = a * b;
            printf("Resultado: %d\n",res);
            break;
        case 4:

            if (b == 0)
            {
                printf("No se puede dividir en 0 \n");
            }else
            {
                resf = (float)a/(float)b;
                printf("Resultado: %.1f\n",resf);
            }
            break;
        case 5:

            res = pow(a,b);
            printf("Resultado: %d\n",res);
            break;
        case 6:

            if (a < 0) 
            {
                printf("No existen raices negativas\n");
            }
            else
            {
                double res_sqrt = sqrt(a);
                printf("Resultado: %.2lf\n", res_sqrt);

            }
            break;      

        default:
            printf("syntax error bro \n");
            break;
        }
        
    } while (opc != 0);

    return 0;
}
