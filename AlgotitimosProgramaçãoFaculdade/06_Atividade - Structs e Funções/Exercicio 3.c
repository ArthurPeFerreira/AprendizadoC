#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

struct matriz
{
   float Mat[2][2];
};

struct Determinate
{
   bool InversaExiste;
   float Det;
};


struct Determinate Determinante(struct matriz M1)
{
    struct Determinate det;
    det.Det = (M1.Mat[0][0]*M1.Mat[1][1])-(M1.Mat[0][1]*M1.Mat[1][0]);
    if (det.Det != 0){
        det.InversaExiste = true;
    }else{
        det.InversaExiste = false;
    }
    return det;
};

struct matriz Inversa(struct matriz M1, struct Determinate DetM1){
    struct matriz MatrizAux1;
    struct matriz MatrizAux2;

    if(DetM1.InversaExiste){
    MatrizAux1.Mat[0][0] = (1*M1.Mat[1][1])-(M1.Mat[0][1]*0);
    MatrizAux1.Mat[0][1] = (M1.Mat[0][0]*0)-(1*M1.Mat[1][0]);
    MatrizAux1.Mat[1][0] = (0*M1.Mat[1][1])-(M1.Mat[0][1]*1);
    MatrizAux1.Mat[1][1] = (M1.Mat[0][0]*1)-(0*M1.Mat[1][0]);

    MatrizAux2.Mat[0][0] = (MatrizAux1.Mat[0][0]) / DetM1.Det;
    MatrizAux2.Mat[0][1] = (MatrizAux1.Mat[1][0]) / DetM1.Det;
    MatrizAux2.Mat[1][0] = (MatrizAux1.Mat[0][1]) / DetM1.Det;
    MatrizAux2.Mat[1][1] = (MatrizAux1.Mat[1][1]) / DetM1.Det;
    }
    return MatrizAux2;
}

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    struct matriz Matrizes[2];

    printf("Dada a matriz A, 2x2:\n a b\n c d\nPasse os valores para assim, se possível, o programa calcular a Inversa.\n");
    
    printf("Informe o Valor de A = ");
    scanf("%f",&Matrizes[0].Mat[0][0]);
    printf("Informe o Valor de B = ");
    scanf("%f",&Matrizes[0].Mat[0][1]);
    printf("Informe o Valor de C = ");
    scanf("%f",&Matrizes[0].Mat[1][0]);
    printf("Informe o Valor de D = ");
    scanf("%f",&Matrizes[0].Mat[1][1]);
    
    printf("Dada a matriz B, 2x2:\n a b\n c d\nPasse os valores para assim, se possível, o programa calcular a Inversa.\n");
    
    printf("Informe o Valor de A = ");
    scanf("%f",&Matrizes[1].Mat[0][0]);
    printf("Informe o Valor de B = ");
    scanf("%f",&Matrizes[1].Mat[0][1]);
    printf("Informe o Valor de C = ");
    scanf("%f",&Matrizes[1].Mat[1][0]);
    printf("Informe o Valor de D = ");
    scanf("%f",&Matrizes[1].Mat[1][1]);


    if(Determinante(Matrizes[0]).InversaExiste){
    printf("A matriz inversa de A é:\n E= %.2f F = %.2f\n G = %.2f H = %.2f\n",Inversa(Matrizes[0],Determinante(Matrizes[0])).Mat[0][0],
                                                                        Inversa(Matrizes[0],Determinante(Matrizes[0])).Mat[0][1],
                                                                        Inversa(Matrizes[0],Determinante(Matrizes[0])).Mat[1][0],
                                                                        Inversa(Matrizes[0],Determinante(Matrizes[0])).Mat[1][1]);}
    else{
        printf("Determinate da matriz A = 0, Não é possivel encontrar a Inversa da Matriz A!!!");
    }


    if(Determinante(Matrizes[1]).InversaExiste){
    printf("A matriz inversa de B é:\n E= %.2f F = %.2f\n G = %.2f H = %.2f\n",Inversa(Matrizes[1],Determinante(Matrizes[0])).Mat[0][0],
                                                                        Inversa(Matrizes[1],Determinante(Matrizes[0])).Mat[0][1],
                                                                        Inversa(Matrizes[1],Determinante(Matrizes[0])).Mat[1][0],
                                                                        Inversa(Matrizes[1],Determinante(Matrizes[0])).Mat[1][1]);}
    else{
        printf("Determinate da matriz B = 0, Não é possivel encontrar a Inversa da Matriz B!!!");
    }
                                                                        
    SetConsoleOutputCP(CPAGE_DEFAULT);
    Sleep(5000);
    return 0;
}