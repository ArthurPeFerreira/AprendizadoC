//Includes
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <unistd.h>

//Função exibe x elevado a 4/3
double expt(double x){
    double a = 4.0/3.0;
    return pow(x, a);
}

int main(){
//Inicio do Código para colocar em UTF-8
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

//Início do Código
    
double x, result;

printf("Este código exibe x elevado a 4/3 \n");
printf("Insira o valor de x: \n");
scanf("%lf", &x);

result = expt(x);

printf("Este é o resultado da conta: %.20lf", result);



//Fim do Código para colocar em UTF-8
SetConsoleOutputCP(CPAGE_DEFAULT);

sleep(5);
return 0;
}

