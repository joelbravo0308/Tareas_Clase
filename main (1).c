//convertir grados centrigrados a fahrenhiet ingresamos los grados centrigrados para convertir a fahrenhiet 

#include <iostream>
int main()
{
    float c, f;
    printf("ingrese los grados centigrados para convertir a fahrenhiet  : \n");
    scanf("%f",&c);
    f=(c*(1.8)) + 32;
    printf("la conversion de grados centigrados a fahrenhiet es : \n %f\n", f);
    printf("ingrese los grados convertir a fahrenhiet para convertir a centigrados  : \n");
    scanf("%f",&c);
    c=(f-32) / 1.8;
    printf("la conversion de grados centigrados a fahrenhiet es : \n %f\n", c);
    system("pause");
}
