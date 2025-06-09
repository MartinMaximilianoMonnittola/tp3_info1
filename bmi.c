/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float peso;
    float altura;
    float imc;
    printf("Ingrese el peso en kg:");
    scanf("%f", &peso);
    printf("Ingrese la altura en metros:");
    scanf("%f", &altura);

    // Calculo de indice IMC
    imc = (peso)/(altura * altura);

    printf("\tÍndice| Condición\n");
    printf("-------------------------------------\n");
    printf("\t<18.5 | Bajo peso\n");
    printf("\t18.5 a 24.9 | Normal\n");
    printf("\t25.0 a 29.9 | Sobrepeso\n");
    printf("\t>=30| Obesidad\n");

    printf("Su índice de masa corporal es: %f \n", imc);

    if (imc < 18.5) {
        printf("Bajo peso");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Normal");
    } else if (imc >= 25 && imc <= 29.9) {
        printf("Sobrepeso");
    } else if (imc >= 30) {
        printf("Obesidad");
    }

    return 0;
}
