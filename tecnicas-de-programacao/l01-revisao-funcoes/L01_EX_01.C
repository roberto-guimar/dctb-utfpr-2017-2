/* Fa�a a leitura de dois n�meros reais na fun��o principal,
   chame uma fun��o para calcular e retornar a m�dia entre eles,
   e depois imprima este resultado na fun��o principal com duas casas de precis�o */

#include <stdio.h>

double media(double numero1, double numero2){
    return (numero1 + numero2) / 2;
}

int main(){

    double num1, num2;

    num1 = num2 = 0;

    printf("\n\n Calcula a media entre dois numeros");

    printf("\n\n Entre com o primeiro valor: ");
    scanf("%lf",&num1);

    printf("\n Entre com o segundo  valor: ");
    scanf("%lf",&num2);

    printf("\n A media entre os dois numeros : %.2lf \n", media(num1, num2));

    return 0;
}
