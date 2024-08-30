#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

//Integral de x^2 - 4x + 7 dx
double Fx(double ValorX){
    return (pow(ValorX,2.0) - (4 * ValorX) + 7);
}

double Integral(double a, double b, double n){
    double DeltaX = (b + a)/n;
    double Resultado;
    for (size_t i = 1; i <= n; i++)
    {
        Resultado = Resultado + (DeltaX * Fx(DeltaX * i));
    }
    return Resultado;    
}


int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    float a,b,n;
    
    printf("Programa que calcula o Somatorio de Riemann de x^2 - 4x + 7 em um intervalo [a,b] dividida em n partes\n");
    printf("Digite o Valor de a: ");
    scanf("%f",&a);
    printf("Digite o Valor de b: ");
    scanf("%f",&b);
    printf("Digite o Valor de n: ");
    scanf("%f",&n);

    printf("O resultado no intervado [%.2f,%.2f] dividido em %.2f = %.2f",a,b,n,Integral((double)a,(double)b,(double)n));

    SetConsoleOutputCP(CPAGE_DEFAULT);
    Sleep(5000);
    return 0;
}