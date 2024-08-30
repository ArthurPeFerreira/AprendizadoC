#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>

int TabVerdadeOR(int a,int b){
    if (a == 1 || b == 1){
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
    a b Tabela Verdade
    0 0       0
    1 0       1
    0 1       1
    1 1       1
    */

   int a,b;

   printf("Tabela Verdade OR, com a variável A e B\n");

  a = 0;
  b = 0;

printf("A = %d, B = %d, Tabela Verdade = %d \n", a, b, TabVerdadeOR(a,b));

  a = 1;
  b = 0;

printf("A = %d, B = %d, Tabela Verdade = %d \n", a, b, TabVerdadeOR(a,b));

  a = 0;
  b = 1;

printf("A = %d, B = %d, Tabela Verdade = %d \n", a, b, TabVerdadeOR(a,b));


  a = 1;
  b = 1;
   
printf("A = %d, B = %d, Tabela Verdade = %d \n", a, b, TabVerdadeOR(a,b));
       
    return 0;

SetConsoleOutputCP(CPAGE_DEFAULT);

sleep(5);
}