#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

void PG(float TmIni,float Razao, int n){
    float PG[n];
    double SomaPG;
    PG[0] = TmIni;
    for (size_t i = 0; i < n; i++)
    {
        PG[i + 1]= PG[i] * Razao;
    }
    
    printf("A progressão Geometria dos %d primeiros numeros é = (",n);

    for (size_t i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            printf("%.2f, ",PG[i]);
        }else{
            printf("%.2f",PG[i]);
        }
    }
        printf(")");

        for (size_t i = 0; i < n; i++)
        {
            SomaPG = SomaPG + (double)PG[i];
        }
        printf("\nA soma da Progressão Geometrica é: %f",SomaPG);
        }

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    float TermoInicial, Razao;
    int n;

    printf("Programa que apresenta os primeiros n termos de uma Progressão Geometrica.\n");
    printf("Digite o Valor Inicial: ");
    scanf("%f",&TermoInicial);
    printf("Digite a Razão: ");
    scanf("%f",&Razao);
    printf("Digite o Valor de n: ");
    scanf("%d",&n);

    PG(TermoInicial,Razao,n);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    Sleep(5000);
    return 0;
}