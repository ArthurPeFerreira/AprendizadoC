//Includes
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>

//Função que ve os valores da equação
float Funcao1Grau(float x,float a,float b){
float y;
y=(a * x) + b;
return y;
}

int main(){
//Inicio do Código para colocar em UTF-8
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

//Início do Código
//Variáveis para o Scanf
float funA, funB, funX, y;

    printf("Este código é para ver os valores para uma função do 1° Grau (y= ax + b) \n \n");
    
    printf("Digite o valor de x: ");
    scanf("%f", &funX);
    printf("Digite o valor de a: ");
    scanf("%f", &funA);
    printf("Digite o valor de b: ");
    scanf("%f", &funB);
    
    y = Funcao1Grau(funX,funA,funB);

    printf("Dada a função y=ax + b, para os valores de X = %f, A = %f, B = %f, temos o valor do Y = %f",funX,funA,funB,y);

//Fim do Código para colocar em UTF-8
SetConsoleOutputCP(CPAGE_DEFAULT);

sleep(5);

return 0;
}

