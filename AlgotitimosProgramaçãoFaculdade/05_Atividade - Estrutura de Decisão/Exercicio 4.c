#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>

int CompararValor(int a, int b, int c){
    int maior;
    int meio;
    int menor;
    
    if(a > b && a > c){
        maior = a;
    } else if(b > a && b > c){
        maior = b;
    } else if(c > a && c > b){
        maior = c;
    }

    if ( (a > b && a < c) || (a < b && a > c) ) {
        meio = a;
    } else if ( (b > a && b < c) || (b < a && b > c) ) {
        meio = b;
    } else if ( (c > a && c < b) || (c < a && c > b) ) {
        meio = c;
    }

    if(a < b && a < c){
        menor = a;
    } else if(b < a && b < c){
        menor = b;
    } else if(c < a && c < b){
        menor = c;
    }

    printf("Este é o maior valor inserido: %d\n",maior);
    printf("Este é o valor do meio inserido: %d\n",meio);
    printf("Este é o menor valor inserido: %d\n",menor);

    return 0;
}

int main (){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    int a = 0;
    int b = 0;
    int c = 0;

    while(a == b || a == c || b == c){
    printf("Insira um três números para que o programa apresente a ordem crescente deles: \nPrimeiro: \n");
    scanf("%d", &a);

    printf("Segundo:\n");
    scanf("%d", &b);

    printf("Terceiro:\n");
    scanf("%d", &c);

     if(a == b || a == c || b == c){
        printf("Erro!!!\nAlgum dos números inseridos são iguais!\n");
    }
    }

   CompararValor(a,b,c);

SetConsoleOutputCP(CPAGE_DEFAULT);

sleep(5);
return 0;
}