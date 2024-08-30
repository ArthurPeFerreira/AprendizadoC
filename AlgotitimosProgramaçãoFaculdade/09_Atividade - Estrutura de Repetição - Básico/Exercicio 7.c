#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

    void IniciarArrayRand(int ArrayPos,int min,int max){
        int Vetor[ArrayPos];

        for (size_t i = 1; i <= ArrayPos; i++)
        {
            Vetor[i] = rand() % max + min;
            
        }    
        printf("O Vetor fica(");
        for (size_t i = 0; i < ArrayPos; i++)
        {
            if (i < ArrayPos - 1)
        {
            printf("%d, ",Vetor[i]);
        }else{
            printf("%d",Vetor[i]);
        }
        }
        printf(")");
    }

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int n,min,max;
    
    printf("Programa que cria uma array de tamanho N e pega Minimos e Maximos e gera valores aleatorios na array.\n");
    printf("Digite o Valor de n: ");
    scanf("%d",&n);
    printf("Digite o Valor Mínimo: ");
    scanf("%d",&min);
    printf("Digite o Valor Máximo: ");
    scanf("%d",&max);

    IniciarArrayRand(n,min,max);
  

    SetConsoleOutputCP(CPAGE_DEFAULT);
    Sleep(5000);
    return 0;
}