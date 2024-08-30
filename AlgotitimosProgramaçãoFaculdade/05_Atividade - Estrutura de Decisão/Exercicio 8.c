#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>
#include <math.h>



int main (){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    float x1,y1,x2,y2, detM;

    printf("Dados os Vetores U(x1,y1) e V(x2,y2), passe os valores para assim, descobrir se os vetores são Linearmente Dependentes ou Intependentes\n");
    
    printf("Informe o Valor de x1 = ");
    scanf("%f",&x1);
    printf("Informe o Valor de y1 = ");
    scanf("%f",&y1);
    printf("Informe o Valor de x2 = ");
    scanf("%f",&x2);
    printf("Informe o Valor de y2 = ");
    scanf("%f",&y2);
    
    detM = (x1*y2)-(y1*x2);

    if (detM != 0){

    printf("Os Vetores são Linearmente Independentes");

    }else{

    printf("Os Vetores são Linearmente Dependentes");

    }
    
    SetConsoleOutputCP(CPAGE_DEFAULT);

sleep(5);
return 0;
}