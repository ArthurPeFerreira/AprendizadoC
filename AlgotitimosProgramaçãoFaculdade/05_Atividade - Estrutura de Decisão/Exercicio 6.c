#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>
#include <math.h>

    /* Escreva um programa para exibir na tela a soluçãoo ou as solu¸c˜oes de uma equa¸c˜ao de
segundo grau. */ 

int Func2Grau(float a,float b,float c){
    float Delta = pow(b, 2.0) - 4 * a * c;
    float X1, X2;

    X1 = (-b + pow(Delta, (1.0/2.0)))/(2 * a);

    X2 = (-b - pow(Delta, (1.0/2.0)))/(2 * a);

    if(X1 != X2 && !(isnan(X1) && isnan(X2))){
        printf("Está equação possui 2 soluções, este é o Valor de X1 = %f e X2 = %f",X1,X2);
    }else if(X1 == X2){
        printf("Está equação possui 1 solução, este é o Valor de X = %f",X1);
    }else if(isnan(X1) && isnan(X2)){
        printf("Não existe solução Possível para Equação!");
    }

    return 0;
}

int main (){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    float a,b,c;

    printf("Este código exibe as soluções para uma função do 2° Grau (y= ax² + bx + c)\n");

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);


    Func2Grau(a,b,c);
    
    SetConsoleOutputCP(CPAGE_DEFAULT);

sleep(5);
return 0;
}