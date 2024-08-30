#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

    double CalcFatorial(int numero){
        double resultado;
        resultado = numero;
        if(numero != 0){
        for (size_t i = numero; i > 0; i--)
        {
            if (i - 1 > 0)
            {
                resultado = resultado * (i - 1);
            }
        }}else{
            resultado = 1;
        }
        return resultado;
    }

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    int n;

    printf("Programa que calcula o fatorial de um número n.\n");
    printf("Digite o Valor de n: ");
    scanf("%d",&n);

    printf("O resultado é = %.0f",CalcFatorial(n));

    SetConsoleOutputCP(CPAGE_DEFAULT);
    Sleep(5000);
    return 0;
}