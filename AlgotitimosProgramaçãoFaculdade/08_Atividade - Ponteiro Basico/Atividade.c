#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

/* Atividade de ponteiro, quando colocasse & dirigisse a posição que a variavel esta ocupando na memória e quando usa-se o ponteiro *
quer dizer que de qual a posição na memoria da variavel apresentará o valor, por exemplo tendo a variavel x com o valor de 10, sendo &x = y
e a variavel w = y, entao *w = 10 */

void Funcao2Grau(float x,float a,float b,float c,float *y){
*y = (pow(x, 2.0) * a ) + (x * b) + c;
}

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
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
   
    Funcao2Grau(funX,funA,funB,funC,&y);

    printf("Dada a função y= ax² + bx + c, para os valores de X = %f, A = %f, B = %f, C = %f temos o valor do Y = %f",funX,funA,funB,funC,y);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    Sleep(5000);
    return 0;
}