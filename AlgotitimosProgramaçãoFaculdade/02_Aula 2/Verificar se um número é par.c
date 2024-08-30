#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

bool eh_par(int num){
    if (num % 2 == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int a;
    printf("Digite o número para verificar se é par: ");
    scanf("%d", &a);
    if (eh_par(a)){
        printf("É par");
    }else{
        printf("É impar");
    }


    sleep(5);
    return 0;
}
