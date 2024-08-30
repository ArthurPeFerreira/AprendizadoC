//Inclui a Biblioteca do Servo
#include <Servo.h>

//Definição dos servos e dos seus pinos

//Base
Servo Base; 
#define pinBase 3

//Garra
Servo Garra; 
#define pinGarra 9

//Altura
Servo Altura; 
#define pinAltura 6

//Profundidade
Servo Profundidade; 
#define pinProfundidade 11

//Botoes seletores e sensor que identifica se tem um objeto
#define B1 7
#define B2 8
#define Sensor 12

//Variaveis principais para o sistema
bool xBotao1, xBotao2, xSensorCB;
int iBase, iAltura, iProfundidade, iGarra;

//Variaveis de auxilio
bool xIniciaProcesso, xSelecionaCaixaAux, xSelecionaCaixa1, xSelecionaCaixa2;

void setup() {
  //Inicia porta serial para monitorar caso precise de alguma informação do que está acontecendo
  Serial.begin(9600);

  //Associa os objetos dos servos aos respectivos pinos conectados
  Base.attach(pinBase); 
  Altura.attach(pinAltura);
  Profundidade.attach(pinProfundidade);
  Garra.attach(pinGarra);

  //Associa os pinos dos botoes/sensor e define como entrada
  pinMode(B1, INPUT);
  pinMode(B2, INPUT);
  pinMode(Sensor, INPUT);

  //Inicializa as variaveis
  xIniciaProcesso = false;
  xSelecionaCaixaAux = false;
  xSelecionaCaixa1 = false;
  xSelecionaCaixa2 = false;
  iBase = 40;
  iGarra = 105;
  iProfundidade = 70;
  iAltura = 80;
  Base.write(iBase);
  Garra.write(iGarra);
  Profundidade.write(iProfundidade);
  Altura.write(iAltura);
}

void loop() {
  xSensorCB = !digitalRead(Sensor);

  if(xSensorCB){
    xIniciaProcesso = true;
    delay(1000);
  }

  if(!xIniciaProcesso){
    iBase = 40;
    iGarra = 105;
    iProfundidade = 70;
    iAltura = 80;
    Base.write(iBase);
    Garra.write(iGarra);
    Profundidade.write(iProfundidade);
    Altura.write(iAltura);
  }else{

    //Abre a garra para pegar a caixa
    
     iGarra = 30;
     Garra.write(iGarra); 
     Base.write(iBase);
     Altura.write(iAltura);
     Profundidade.write(iProfundidade);
     delay(500);

    //Avanço para pegar a Caixa
    
      iProfundidade = 100;
      Garra.write(iGarra); 
      Base.write(iBase);
      Altura.write(iAltura);
      Profundidade.write(iProfundidade);
      delay(500);
    
     //Pega a Caixa
     
     iGarra = 90;
     Base.write(iBase);
     Altura.write(iAltura);
     Profundidade.write(iProfundidade);
     Garra.write(iGarra); 
     delay(500);
    
    //Com a caixa retorna para a posição onde ira deslocar para colocar na selecionadora
    
     iProfundidade = 70;
     Garra.write(iGarra); 
     Base.write(iBase);
     Altura.write(iAltura);
     Profundidade.write(iProfundidade);
     delay(500);
    
    //Entra na logica para Selecionar aonde irá colocar a caixa

     xSelecionaCaixaAux = true;

     while(xSelecionaCaixaAux){
       xBotao1 = digitalRead(B1);
       xBotao2 = digitalRead(B2);

      Base.write(iBase);
      Garra.write(iGarra);
      Profundidade.write(iProfundidade);
      Altura.write(iAltura);
       
       if(xBotao1){
      xSelecionaCaixa1 = true;
      xSelecionaCaixa2 = false;
      }else if(xBotao2){
      xSelecionaCaixa1 = false;
      xSelecionaCaixa2 = true;
      }

      //Caso Selecionado a Caixa 1

      if(xSelecionaCaixa1){
    
    //Sobe um pouco a caixa para não bater nas selecionadoras

    iAltura = 90; 
    Garra.write(iGarra);
    Profundidade.write(iProfundidade);
    Altura.write(iAltura);
    Base.write(iBase);
    delay(500);

    //Vai pra posição onde ela fica, no caso a 1 fica no grau 0 do motor

    iBase = 0;
    Garra.write(iGarra);
    Profundidade.write(iProfundidade);
    Altura.write(iAltura);
    Base.write(iBase);
    delay(500);

    //Avança para colocar a caixa

    iProfundidade = 100;
    Base.write(iBase);
    Altura.write(iAltura);
    Profundidade.write(iProfundidade);
    Garra.write(iGarra);
    delay(500);

    //Abre a garra para colocar a caixa

    iGarra = 30;
    Base.write(iBase);
    Altura.write(iAltura);
    Profundidade.write(iProfundidade);
    Garra.write(iGarra);
    delay(500);

    //Volta a profundidade para não bater em nada

    iProfundidade = 70;
    Base.write(iBase);
    Altura.write(iAltura);
    Profundidade.write(iProfundidade);
    Garra.write(iGarra);
    delay(500);

    //VOlta os outros parametros para o parametro de inicio

    iAltura = 80; 
    iGarra = 105;
    iBase = 40;
    Base.write(iBase);
    Altura.write(iAltura);
    Profundidade.write(iProfundidade);
    Garra.write(iGarra);
    delay(500);

    xSelecionaCaixaAux = false;
    xSelecionaCaixa1 = false;}

     //Caso Selecionado a Caixa 2

      if(xSelecionaCaixa2){  

    //Sobe um pouco a caixa para não bater nas selecionadoras

    iAltura = 90; 
    Garra.write(iGarra);
    Profundidade.write(iProfundidade);
    Altura.write(iAltura);
    Base.write(iBase);
    delay(500);

    //Vai pra posição onde ela fica, no caso a 1 fica no grau 0 do motor

    iBase = 85;
    Garra.write(iGarra);
    Profundidade.write(iProfundidade);
    Altura.write(iAltura);
    Base.write(iBase);
    delay(500);

    //Avança para colocar a caixa

    iProfundidade = 100;
    Base.write(iBase);
    Altura.write(iAltura);
    Profundidade.write(iProfundidade);
    Garra.write(iGarra);
    delay(500);

    //Abre a garra para colocar a caixa

    iGarra = 30;
    Base.write(iBase);
    Altura.write(iAltura);
    Profundidade.write(iProfundidade);
    Garra.write(iGarra);
    delay(500);

    //Volta a profundidade para não bater em nada

    iProfundidade = 70;
    Base.write(iBase);
    Altura.write(iAltura);
    Profundidade.write(iProfundidade);
    Garra.write(iGarra);
    delay(500);

    //VOlta os outros parametros para o parametro de inicio

    iAltura = 80; 
    iGarra = 105;
    iBase = 40;
    Base.write(iBase);
    Altura.write(iAltura);
    Profundidade.write(iProfundidade);
    Garra.write(iGarra);
    delay(500);


    xSelecionaCaixaAux = false;
    xSelecionaCaixa2 = false;}
     }
    }
  
    if(xIniciaProcesso){
    xIniciaProcesso = false;
    }

  }


