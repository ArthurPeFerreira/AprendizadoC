#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>

/*  Escreva um programa em C que solicite tres valores a, b e x, os valores a, b definem um
intervalo fechado ([a, b]) e seu programa deverá informar se o valor x pertence ou não ao
intervalo ([a, b]).                             */

int main (){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    int a, b, x;
  
    printf("Este programa recebe valores de a e b e x, onde os valores a, b definem um intervalo fechado [a, b] e o valor de x informa se ele está nesse intervalo\nDigite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);
    
    printf("Digite o valor de x: ");
    scanf("%d", &x);

    if(a > b){
        if(x <= a && x >= b ){
            printf("X está dentro do intervalo [%d,%d]",a,b);
        }else{
            printf("X não está dentro do intervalo [%d,%d]",a,b);
        }
    }else if(a < b){
        if(x >= a && x <= b ){
            printf("X está dentro do intervalo [%d,%d]",b,a);
        }else{
            printf("X não está dentro do intervalo [%d,%d]",b,a);
        }
    }else{
        if(x == a && x == b){
            printf("X está dentro do intervalo [%d,%d]",a,b); 
        }else{
            printf("X não está dentro do intervalo [%d,%d]",a,b);
        }
    }
  

  


    SetConsoleOutputCP(CPAGE_DEFAULT);

sleep(5);
return 0;
}