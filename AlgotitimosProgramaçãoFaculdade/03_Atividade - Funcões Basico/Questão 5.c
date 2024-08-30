//Includes
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <unistd.h>

//Função exibe o valor da raiz x
double raizX(double x){
    return sqrt(x);
}

int main(){
//Inicio do Código para colocar em UTF-8
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

//Início do Código
    
double x;

printf("Este código exibe a raiz x \n");
printf("Insira o valor de x: \n");
scanf("%lf", &x);

while (x < 0)
{
    printf("Número Inválido, não existe raiz negativa, por favor insira outro: \n");
    scanf("%lf", &x);
}

printf("Este é o resultado da conta: %.20lf", raizX(x));


 

//Fim do Código para colocar em UTF-8
SetConsoleOutputCP(CPAGE_DEFAULT);


sleep(5);
return 0;
}

