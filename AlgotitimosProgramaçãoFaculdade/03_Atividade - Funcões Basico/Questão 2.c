//Includes
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <unistd.h>

//Função que ve os valores da equação
float Funcao2Grau(float x,float a,float b,float c){
float y;
y= (pow(x, 2.0) * a ) + (x * b) + c;
return y;
}

int main(){
//Inicio do Código para colocar em UTF-8
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

//Início do Código
//Variáveis para o Scanf
float funA, funB, funC, funX, y;

    printf("Este código é para ver os valores para uma função do 2° Grau (y= ax² + bx + c) \n \n");
    
    printf("Digite o valor de x: ");
    scanf("%f", &funX);
    printf("Digite o valor de a: ");
    scanf("%f", &funA);
    printf("Digite o valor de b: ");
    scanf("%f", &funB);
    printf("Digite o valor de c: ");
    scanf("%f", &funC);
    
    y = Funcao2Grau(funX,funA,funB,funC);

    printf("Dada a função y= ax² + bx + c, para os valores de X = %f, A = %f, B = %f, C = %f temos o valor do Y = %f",funX,funA,funB,funC,y);

//Fim do Código para colocar em UTF-8
SetConsoleOutputCP(CPAGE_DEFAULT);

sleep(5);

return 0;
}

