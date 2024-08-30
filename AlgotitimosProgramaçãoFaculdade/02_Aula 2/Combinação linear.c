#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>

int main(){
    //inicio do codigo para colocar o UTF-8
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    double a,b,c,d,e,f,x,y,det;

    printf("Informe o valor de A: ");
    scanf("%lf", &a);

    printf("Informe o valor de B: ");
    scanf("%lf", &b);

    printf("Informe o valor de C: ");
    scanf("%lf", &c);

    printf("Informe o valor de D: ");
    scanf("%lf", &d);
    
    printf("Informe o valor de E: ");
    scanf("%lf", &e);

    printf("Informe o valor de F: ");
    scanf("%lf", &f);

    //processamento do sistema linear
    det = (a*e - b*d);
    if (det != 0)
    {
        y = (a*f - d*c) /(a*e - b*d);
        x = (c - b*y)/a;
        //saida
        printf("x = %lf, y = %lf\n", x,y);
    }else{
        printf("Não é possivel resolver o sistema, o Determinante é Zero");
    }
    












    //fim do codigo para colocar o UTF-8
    SetConsoleOutputCP(CPAGE_DEFAULT);

    return 0;

    sleep(5);
}