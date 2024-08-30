#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

struct Fracao {
    float numerador;
    float denominador;
};



struct Fracao Soma(struct Fracao F1, struct Fracao F2) {
    struct Fracao resultado;

    resultado.numerador = F1.numerador * F2.denominador + F1.denominador * F2.numerador;
    resultado.denominador = F1.denominador * F2.denominador;

    return resultado;
}

struct Fracao Subtracao(struct Fracao F1,struct Fracao F2){
    struct Fracao resultado;

        resultado.numerador = F1.numerador * F2.denominador - F1.denominador * F2.numerador;
        resultado.denominador = F1.denominador * F2.denominador; 
        
        return resultado;
    }

struct Fracao Multiplicacao(struct Fracao F1,struct Fracao F2){
    struct Fracao resultado;

        resultado.numerador = F1.numerador *  F2.numerador;
        resultado.denominador = F1.denominador * F2.denominador; 

        return resultado;
    }

struct Fracao Divisao(struct Fracao F1,struct Fracao F2){
    struct Fracao resultado;

        resultado.numerador = F1.numerador *  F2.denominador;
        resultado.denominador = F1.denominador * F2.numerador;

        return resultado;
    }

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    struct Fracao fracoes[2];

    float F1n,F1d,F2n,F2d, NumeradorSum,DenominadorSum, NumeradorSub,DenominadorSub, NumeradorMul,DenominadorMul, NumeradorDiv,DenominadorDiv;

    printf("Informe o Valor do Numerador da Primeira Fração = ");
    scanf("%f",&F1n);
    printf("Informe o Valor do Denominador da Primeira Fração = ");
    scanf("%f",&F1d);
    printf("Informe o Valor do Numerador da Segunda Fração = ");
    scanf("%f",&F2n);
    printf("Informe o Valor do Denominador da Segunda Fração = ");
    scanf("%f",&F2d);

    fracoes[0].numerador = F1n;
    fracoes[0].denominador = F1d;

    fracoes[1].numerador = F2n;
    fracoes[1].denominador = F2d;

    NumeradorSum = Soma(fracoes[0],fracoes[1]).numerador;
    DenominadorSum = Soma(fracoes[0],fracoes[1]).denominador;
    
    NumeradorSub = Subtracao(fracoes[0],fracoes[1]).numerador;
    DenominadorSub = Subtracao(fracoes[0],fracoes[1]).denominador;

    NumeradorMul = Multiplicacao(fracoes[0],fracoes[1]).numerador;
    DenominadorMul = Multiplicacao(fracoes[0],fracoes[1]).denominador;

    NumeradorDiv = Divisao(fracoes[0],fracoes[1]).numerador;
    DenominadorDiv = Divisao(fracoes[0],fracoes[1]).denominador;

    printf("Para %.2f/%.2f + %.2f/%.2f = %.2f/%.2f\n", F1n,F1d,F2n,F2d,NumeradorSum,DenominadorSum);
    printf("Para %.2f/%.2f - %.2f/%.2f = %.2f/%.2f\n", F1n,F1d,F2n,F2d,NumeradorSub,DenominadorSub);
    printf("Para %.2f/%.2f * %.2f/%.2f = %.2f/%.2f\n", F1n,F1d,F2n,F2d,NumeradorMul,DenominadorMul);
    printf("Para %.2f/%.2f / %.2f/%.2f = %.2f/%.2f", F1n,F1d,F2n,F2d,NumeradorDiv,DenominadorDiv);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    Sleep(5000);
    return 0;
}