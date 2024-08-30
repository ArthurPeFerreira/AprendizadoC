#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>


int main (){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    int Num_IN,a,b;
    int COD_BIN[1000];
    
    a = Num_IN;

    printf("Digite o Número que você quer colocar de Binário para Decimal: ");
    scanf("%d", &Num_IN);

   
    //Programa para transformar de binario para decimal
       a = Num_IN / 2;
       
    
    
    printf("%d", a);
    

    
    
    

    

    

   
    




    
SetConsoleOutputCP(CPAGE_DEFAULT);

sleep(5);
}