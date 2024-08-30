#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>
#include <math.h>



int main (){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    float a,b,c,d, e,f,g,h, detM,detM1,detM2,detM3,detM4;

    printf("Dada a matriz 2x2:\n a b\n c d\nPasse os valores para assim, se possível, o programa calcular a Inversa.\n");
    
    printf("Informe o Valor de A = ");
    scanf("%f",&a);
    printf("Informe o Valor de B = ");
    scanf("%f",&b);
    printf("Informe o Valor de C = ");
    scanf("%f",&c);
    printf("Informe o Valor de D = ");
    scanf("%f",&d);
    
    detM = (a*d)-(b*c);

    if (detM != 0){

    detM1 = (1*d)-(b*0);
    detM2 = (a*0)-(1*c);
    detM3 = (0*d)-(b*1);
    detM4 = (a*1)-(0*c);

    e = detM1/detM;
    f = detM3/detM;
    g = detM2/detM;
    h = detM4/detM;

    printf("A matriz inversa é:\n E= %.2f F = %.2f\n G = %.2f H = %.2f",e,f,g,h);

    }else{
        printf("Não é possivel encontrar a Inversa!!!");
    }
    
    SetConsoleOutputCP(CPAGE_DEFAULT);

sleep(5);
return 0;
}