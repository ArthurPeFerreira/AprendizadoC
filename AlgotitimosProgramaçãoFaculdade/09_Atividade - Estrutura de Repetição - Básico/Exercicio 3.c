#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

void JurosSimples(float Taxa,float ValInicial, int tempo){
    float TaxaJuros = (Taxa / 100) * ValInicial;

    for (size_t i = 0; i < tempo +1; i++)
    {
        printf("O montante no %d° mês é de %f\n",i,(ValInicial + (TaxaJuros * i)));
    }
    
}

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    int Meses;
    float TaxaJuros, ValorInicial;

    printf("Calculadora de Juros Simples.\n");
    printf("Digite o Valor Inicial: ");
    scanf("%f",&ValorInicial);
    printf("Digite a Taxa de Juros em Porcentagem: ");
    scanf("%f",&TaxaJuros);
    printf("Digite a Quantidade de Meses: ");
    scanf("%d",&Meses);

    JurosSimples(TaxaJuros,ValorInicial,Meses);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    Sleep(5000);
    return 0;
}