#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>

int TabVerdadeNOT(int a){
    if (a == 0){
        return 1;
    }else{
        return 0;
    }
}

int main (){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    /* 
    a Tabela Verdade
    0      1
    1      0
    */

   int a;

   printf("Tabela Verdade do NOT, com a variável A \n");

  a = 0;

printf("A = %d Tabela Verdade = %d \n", a, TabVerdadeNOT(a));

  a = 1;

printf("A = %d Tabela Verdade = %d \n", a, TabVerdadeNOT(a));


 
    

   
    
    return 0;

SetConsoleOutputCP(CPAGE_DEFAULT);

sleep(5);
}