#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

void DifExp(int Num){
    long int ExpSoma, SomaExp;
    ExpSoma = 0;
    SomaExp = 0;
    for (int i = 1; i <= Num; i++)
    {
        ExpSoma = ExpSoma + (i);
        SomaExp = SomaExp + (pow((i),2.0));
    }
        ExpSoma = pow(ExpSoma,2.0);
        printf("\nExpoente das Somas = %ld, Soma dos expoentes = %ld",ExpSoma,SomaExp);
        printf("\nSoma dos Expoentes - Expoente das Somas = %ld",(ExpSoma-SomaExp));
}

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    int Num;
    printf("Digite o número que calculara o expoente das somas menos a soma dos expoentes até esse número:");
    scanf("%d",&Num);

    DifExp(Num);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    Sleep(5000);
    return 0;
}