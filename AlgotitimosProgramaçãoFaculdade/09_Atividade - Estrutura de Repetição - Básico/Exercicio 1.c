#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
#include <windows.h>


//j é o maior e f o menor
void imprimir_pares(int j , int f){
    int a;
   for (size_t i = 0; i < ((j-f)+ 1); i++)
   {
        if (((f + i)%2) == 0){
            printf("%d\n",f + i);
        }
   }
}


int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    int a,b;

    printf("O programa pegará 2 números e apresentara os números pares dentro desse intervalo.\n");
    printf("Digite o Valor do Primeiro Número:");
    scanf("%d",&a);
    printf("Digite o Valor do Sengundo Número:");
    scanf("%d",&b);

    printf("\nOs números pares dentro do intervalo são:\n");

    if(a > b){
        imprimir_pares(a,b);
    }else if(a == b){
        if (a % 2 == 0){
            printf("%d\n",a);
        }
    }else{
        imprimir_pares(b,a);
    }


    SetConsoleOutputCP(CPAGE_DEFAULT);
    Sleep(5000);
    return 0;
}