#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

void CheckaIntervalo(float Num){
    if(Num >= 0 && Num <= 25){
        printf("\nIntervalo [0,25]");
    }else if(Num > 25 && Num <= 50){
        printf("\nIntervalo ]25,50]");
    }else if(Num > 50 && Num <= 75){
        printf("\nIntervalo ]50,75]");
    }else if(Num > 75 && Num <= 100){
        printf("\nIntervalo ]75,100]");
    }else{
        printf("\nFora de Intervalo");
    }
}

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    float Num;
    printf("Digite o Numero para saber se está entro do Invervalo [0,25], ]25,50], ]50,75], ]75,100] ou Fora de Intervalo: ");
    scanf("%f",&Num);
    CheckaIntervalo(Num);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    Sleep(5000);
    return 0;
}