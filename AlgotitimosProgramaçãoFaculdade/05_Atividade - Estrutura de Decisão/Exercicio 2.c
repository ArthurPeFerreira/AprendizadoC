#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <unistd.h>
#include <stdbool.h>


int main (){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    
    int Num;
    bool div3,div5;
    printf("Digite o Número que você quer descobrir se ele é divisivel por 3 ou por 5: ");
    scanf("%d", &Num);

    if(((Num % 3) ==  0)){
        div3 = true;
    }else{
        div3 = false;
    }

    if(((Num % 5) ==  0)){
        div5 = true;
    }else{
        div5 = false;
    }

    if(div3 && div5){
        printf("Este Número é divisivel por 3 e por 5");
    }else if (div3 && !div5){
        printf("Este Número é divisivel por 3 mas não 5");
    }else if (!div3 && div5){
        printf("Este Número é não é divisivel por 3 mas é divisivel 5");
    }else if (!div3 && !div5){
        printf("Este Número é não é divisivel por 3 nem por 5");
    }

    
SetConsoleOutputCP(CPAGE_DEFAULT);

sleep(5);
}