//Includes
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
#include <unistd.h>

//Função que ve os valores da equação quantas notas quiser e verifica se as notas são invalidas
float FuncaoMediaArtimedica(int Quantidade_Notas){
float a,b,c;

for (int i = 0; (i < (Quantidade_Notas)); i++)
{
    printf("Digite a %dª nota: ", i + 1);
    scanf("%f", &b);


while (b > 10)
{
    printf("Nota Inválida!! \n");
    sleep(1);
    printf("Digite novamente a %dª nota: ", i + 1);
    scanf("%f", &b);
}
    
    a += b;
}
    c = a/Quantidade_Notas;
    return c;
}

int main(){
//Inicio do Código para colocar em UTF-8
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

//Início do Código
    int Quanti_Notas;
    float media;
    printf("Quantas notas você quer calcular: ");
    scanf("%d", &Quanti_Notas);

    media = FuncaoMediaArtimedica(Quanti_Notas);

   printf("A média das notas é: %f", media);

//Fim do Código para colocar em UTF-8
SetConsoleOutputCP(CPAGE_DEFAULT);


sleep(5);
return 0;
}

