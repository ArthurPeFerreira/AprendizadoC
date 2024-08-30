//Includes
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <unistd.h>

//Função exibe o valor da exponencial base euler de um valor x
double exptEuler(double x){
    return pow(M_E, x);
}

int main(){
//Inicio do Código para colocar em UTF-8
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

//Início do Código
double x;

printf("Este código exibe o valor do numero de euler elevado na x \n");
printf("Insira o valor de x: \n");
scanf("%lf", &x);

printf("Este é o resultado da conta: %lf", exptEuler(x));


 

//Fim do Código para colocar em UTF-8
SetConsoleOutputCP(CPAGE_DEFAULT);


sleep(5);
return 0;
}

