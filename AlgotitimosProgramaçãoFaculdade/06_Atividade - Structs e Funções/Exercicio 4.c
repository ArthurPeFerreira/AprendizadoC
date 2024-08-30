#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

struct Vetor{
    float coordenadas[3]; //0 - x, 1 - y, 2 - z
};

struct Vetor FunSoma(struct Vetor V1,struct Vetor V2){
    struct Vetor VetAux;
    VetAux.coordenadas[0] = V1.coordenadas[0] + V2.coordenadas[0];
    VetAux.coordenadas[1] = V1.coordenadas[1] + V2.coordenadas[1];
    VetAux.coordenadas[2] = V1.coordenadas[2] + V2.coordenadas[2];

    return VetAux;
}

struct Vetor FunSubtracao(struct Vetor V1,struct Vetor V2){
    struct Vetor VetAux;
    VetAux.coordenadas[0] = V1.coordenadas[0] - V2.coordenadas[0];
    VetAux.coordenadas[1] = V1.coordenadas[1] - V2.coordenadas[1];
    VetAux.coordenadas[2] = V1.coordenadas[2] - V2.coordenadas[2];

    return VetAux;
}

float FunProdEscalar(struct Vetor V1,struct Vetor V2){
    float calculo;
    calculo = (V1.coordenadas[0] * V2.coordenadas[0]) + (V1.coordenadas[1] * V2.coordenadas[1]) + (V1.coordenadas[2] * V2.coordenadas[2]);    
    
    return calculo;
}

struct Vetor FunProdutoCruzado(struct Vetor V1,struct Vetor V2){
    struct Vetor VetAux;
    VetAux.coordenadas[0] = (V1.coordenadas[1] * V2.coordenadas[2]) - (V1.coordenadas[2] * V2.coordenadas[1]);
    VetAux.coordenadas[1] = (V1.coordenadas[2] * V2.coordenadas[0]) - (V1.coordenadas[0] * V2.coordenadas[2]);
    VetAux.coordenadas[2] = (V1.coordenadas[0] * V2.coordenadas[1]) - (V1.coordenadas[1] * V2.coordenadas[0]);

    return VetAux;
}

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    //Criação de Variaveis
    struct Vetor Vetores[2];
    struct Vetor Soma,Subtracao,ProdutoCruzado;
    float ProdutoEscalar;

    //Variaveis dos vetores recebem Valor
    printf("Dado o vetor V1(x1,y1,z1).\n");
    
    printf("Informe o Valor de x1 = ");
    scanf("%f",&Vetores[0].coordenadas[0]);
    printf("Informe o Valor de y1 = ");
    scanf("%f",&Vetores[0].coordenadas[1]);
    printf("Informe o Valor de z1 = ");
    scanf("%f",&Vetores[0].coordenadas[2]);

    printf("\nDado o vetor V2(x2,y2,z2).\n");
    
    printf("Informe o Valor de x2 = ");
    scanf("%f",&Vetores[1].coordenadas[0]);
    printf("Informe o Valor de y2 = ");
    scanf("%f",&Vetores[1].coordenadas[1]);
    printf("Informe o Valor de z2 = ");
    scanf("%f",&Vetores[1].coordenadas[2]);

    //Feitas as operaçoes Requisitadas pelo Exercicio
    Soma = FunSoma(Vetores[0],Vetores[1]);
    Subtracao = FunSubtracao(Vetores[0],Vetores[1]);
    ProdutoEscalar = FunProdEscalar(Vetores[0],Vetores[1]);
    ProdutoCruzado = FunProdutoCruzado(Vetores[0],Vetores[1]);

    //Apresentar os Valores para o usuário
    printf("\n\nDados os Vetores V1(%.2f,%.2f,%.2f) e V2(%.2f,%.2f,%.2f)\nEste é o Vetor Derivado da Soma, VSoma(%.2f,%.2f,%.2f)\nEste é o Vetor Derivado da Subtração, VSubtração(%.2f,%.2f,%.2f)\nEste é o Produto Escalar = %.2f\nEste é o Vetor Derivado do Produto Cruzado, VProdutoCruzado(%.2f,%.2f,%.2f)",
    Vetores[0].coordenadas[0],Vetores[0].coordenadas[1],Vetores[0].coordenadas[2],Vetores[1].coordenadas[0],Vetores[1].coordenadas[1],Vetores[1].coordenadas[2],Soma.coordenadas[0],Soma.coordenadas[1],Soma.coordenadas[2],Subtracao.coordenadas[0],Subtracao.coordenadas[1],Subtracao.coordenadas[2],ProdutoEscalar,ProdutoCruzado.coordenadas[0],ProdutoCruzado.coordenadas[1],ProdutoCruzado.coordenadas[2]);

    SetConsoleOutputCP(CPAGE_DEFAULT);
    Sleep(5000);
    return 0;
}