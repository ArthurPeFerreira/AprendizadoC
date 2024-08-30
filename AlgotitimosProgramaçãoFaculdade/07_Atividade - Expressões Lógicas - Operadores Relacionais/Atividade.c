#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

bool LetraA(int a){
    if (!(a == 10)){
        return true;
    }else{
        return false;
    }
}

bool LetraB(int a, int b){
    if ((a > 5) && (b < 20)){
        return true;
    }else{
        return false;
    }
    
}

bool LetraC(int a, int c){
    if (((a % 2) == 0) && ((c % 2)  == 1)){
        return true;
    }else{
        return false;
    }
}

bool LetraD(int a, int c){
    if (((a % 2) == 0) || ((c % 2)  == 1)){
        return true;
    }else{
        return false;
    }
}

bool LetraE(int a, int b, int c){
    if ((c > a) && (c < b)){
        return true;
    }else{
        return false;
    }
}

bool LetraF(int a, int b, int c){
    if ((c >= a) || (c <= b)){
        return true;
    }else{
        return false;
    }
}

bool LetraG(int a, int b, int c){
    if (((c > a) || (c > b)) && (!((c > a) && (c > b)))){
        return true;
    }else{
        return false;
    }
}

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    int aA;
    int aB,bB;
    int aC,cC;
    int aD,cD;
    int aE,bE,cE;
    int aF,bF,cF;
    int aG,bG,cG;

    aA = 0;
    printf("Está é a tabela verdade para !(a == 10), onde a vai de 0 a 50\n");
    while (aA < 51){
        if (LetraA(aA)){
        printf("Para a = %d temos verdadeiro\n",aA);}
        else{
        printf("Para a = %d temos falso\n",aA);
        }
        aA++;
    }

    aB = 0;
    bB = 0;
    printf("\nEstá é a tabela verdade para (a > 5) && (b < 20), onde a vai de 0 a 50\n");
    while (aB < 51 && bB < 51){
        if (LetraB(aB,bB)){
        printf("Para a = %d, b = %d temos verdadeiro\n",aB,bB);}
        else{
        printf("Para a = %d, b = %d temos falso\n",aB,bB);
        }

        if (aB == bB){
            aB++;
        }else{
            bB++;
        }
        
    }

    aC = 0;
    cC = 0;
    printf("\nEstá é a tabela verdade para (a é par) && (c é impar), onde a vai de 0 a 50\n");
    while (aC < 51 && cC < 51){
        if (LetraC(aC,cC)){
        printf("Para a = %d, c = %d temos verdadeiro\n",aC,cC);}
        else{
        printf("Para a = %d, c = %d temos falso\n",aC,cC);
        }

        if (aC == cC){
            aC++;
        }else{
            cC++;
        }
        
    }

    aD = 0;
    cD = 0;
    printf("\nEstá é a tabela verdade para (a é par) || (c é impar), onde a vai de 0 a 50\n");
    while (aD < 51 && cD < 51){
        if (LetraD(aD,cD)){
        printf("Para a = %d, c = %d temos verdadeiro\n",aD,cD);}
        else{
        printf("Para a = %d, c = %d temos falso\n",aD,cD);
        }

        if (aD == cD){
            aD++;
        }else{
            cD++;
        }
        
    }


    //Nunca vai ser verdadeiro pois todas as variaveis avancam de 1 em 1, em outros casos, onde são colocados valores manuais funciona
    aE = 0;
    bE = 0;
    cE = 0;
    printf("\nEstá é a tabela verdade para (c > a) && (c < b), onde a vai de 0 a 50\n");
    while (aE < 51 && bE < 51 && cE < 51){
        if (LetraE(aE,bE,cE)){
        printf("Para a = %d, b = %d, c = %d temos verdadeiro\n",aE,bE,cE);}
        else{
        printf("Para a = %d, b = %d, c = %d temos falso\n",aE,bE,cE);
        }

        if (aE == bE && aE == cE){
            aE++;
        }else{
            if(bE == cE){
                bE++;
            }else{
                cE++;
            }
        }
        
    }
    
    //Nunca vai ser verdadeiro pois todas as variaveis avancam de 1 em 1, em outros casos, onde são colocados valores manuais funciona
    aE = 0;
    bE = 0;
    cE = 0;
    printf("\nEstá é a tabela verdade para (c > a) && (c < b), onde a vai de 0 a 50\n");
    while (aE < 51 && bE < 51 && cE < 51){
        if (LetraE(aE,bE,cE)){
        printf("Para a = %d, b = %d, c = %d temos verdadeiro\n",aE,bE,cE);}
        else{
        printf("Para a = %d, b = %d, c = %d temos falso\n",aE,bE,cE);
        }

        if (aE == bE && aE == cE){
            aE++;
        }else{
            if(bE == cE){
                bE++;
            }else{
                cE++;
            }
        }
        
    }

    //Nunca vai ser verdadeiro pois todas as variaveis avancam de 1 em 1, em outros casos, onde são colocados valores manuais funciona
    aF = 0;
    bF = 0;
    cF = 0;
    printf("\nEstá é a tabela verdade para (c >= a) || (c <= b), onde a vai de 0 a 50\n");
    while (aF < 51 && bF < 51 && cF < 51){
        if (LetraF(aF,bF,cF)){
        printf("Para a = %d, b = %d, c = %d temos verdadeiro\n",aF,bF,cF);}
        else{
        printf("Para a = %d, b = %d, c = %d temos falso\n",aF,bF,cF);
        }

        if (aF == bF && aF == cF){
            aF++;
        }else{
            if(bF == cF){
                bF++;
            }else{
                cF++;
            }
        }
        
    }

    //Nunca vai ser verdadeiro pois todas as variaveis avancam de 1 em 1, em outros casos, onde são colocados valores manuais funciona
    aG = 0;
    bG = 0;
    cG = 0;
    printf("\nEstá é a tabela verdade para ((c > a) || (c > b)) && (!((c > a) && (c > b))), onde a vai de 0 a 50\n");
    while (aG < 51 && bG < 51 && cG < 51){
        if (LetraG(aG,bG,cG)){
        printf("Para a = %d, b = %d, c = %d temos verdadeiro\n",aG,bG,cG);}
        else{
        printf("Para a = %d, b = %d, c = %d temos falso\n",aG,bG,cG);
        }

        if (aG == bG && aG == cG){
            aG++;
        }else{
            if(bG == cG){
                bG++;
            }else{
                cG++;
            }
        }
        
    }
    
    

    SetConsoleOutputCP(CPAGE_DEFAULT);
    Sleep(5000);
    return 0;
}