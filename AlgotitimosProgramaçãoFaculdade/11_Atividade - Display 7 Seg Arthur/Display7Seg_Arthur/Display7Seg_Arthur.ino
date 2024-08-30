 #include <stdio.h>

#define SA 13
#define SB 12
#define SC 11
#define SD 10
#define SE 9
#define SF 8
#define SG 7

int contador;

void display7(int A, int B, int C, int D, int *a, int *b, int *c, int *d, int *e, int *f, int *g) {
    *a = (C && !D) || (!A && C) || (B && D) || (A && !C) || (!B && !D);
    *b = (!B && !C) || (!B && D) || (!A && !C && !D) || (!A && C && D) || (A && !C && D);
    *c = (!A && B) || (A && !B) || (!C && D) || (!A && !C) || (!A && D);
    *d = (A && !C) || (B && C && !D) || (!B && C && D) || (!A && !B && !D) || (B && !C && D);
    *e = (A && B) || (C && !D) || (A && C) || (A && !D) || (!B && !D);
    *f = (A && !B) || (!C && !D) || (B && !D) || (A && C) || (!A && B && !C);
    *g = (A && !B) || (C && !D) || (A && D) || (!B && C) || (!A && B && !C);
}

void decimal_para_binario (int decimal, int *A, int *B, int *C, int *D) {

    int q1, q2, q3; 
    *A=decimal%2;
    q1=decimal/2;
    *B=q1%2;
    q2=q1/2;
    *C=q2%2;
    q3=q2/2;
    *D=q3%2; 

}

/*
int main() {
    int A = 0, B = 0, C = 0, D = 0; 
    int a, b, c, d, e, f, g; 
    display7(A, B, C, D, &a, &b, &c, &d, &e, &f, &g); 
    printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g); 
    return 0;
}

*/

void setup() { 

  contador=0;

  pinMode (SA, OUTPUT);
  pinMode (SB, OUTPUT);
  pinMode (SC, OUTPUT);
  pinMode (SD, OUTPUT);
  pinMode (SE, OUTPUT);
  pinMode (SF, OUTPUT);
  pinMode (SG, OUTPUT);
  
}


void loop() {
  int A = 0, B = 0, C = 0, D = 0;
  decimal_para_binario (contador, &A, &B, &C, &D);
  int a, b, c, d, e, f, g; 
  display7(D,C,B,A, &a, &b, &c, &d,&e,&f,&g);
  digitalWrite(SA, a);
  digitalWrite(SB, b);
  digitalWrite(SC, c);
  digitalWrite(SD, d);
  digitalWrite(SE, e);
  digitalWrite(SF, f);
  digitalWrite(SG, g);
  delay(2000);
  contador=contador+1;
  if (contador >15)
    contador=0;
}

