/******************************************************************************

Realizar un programa en C que determine los grados centigrados a fahrenheit o viceversa

*******************************************************************************/
#include <stdio.h>

void main()
{
    float cent, far, gradosCent=0, gradosFar=0;
    int op;
    printf("Menu Principal\n1.Grados Centigrados a Farenheit\n2.Grados Fahrenheit a Centigrados\n");
    printf("Escoja la opcion:");
    scanf("%d",&op);
    if(op==1)
    {
        printf("Ingrese los grados Centigrados");
        scanf("%f", &cent);
        gradosFar=((cent*9)/5)+32;
        printf("Grados Centigrados=%.2f\n", gradosFar);
    
    }
    else
    {
        printf("Ingrese los grados Fahrenheit");
        scanf("%f", &far);
        gradosCent=((far-32)*5)/9;
        printf("Grados Fahrenheit=%.2f", gradosCent);
    }
}