// Etapa 1 exiba no lcd os dados dht
// #include <Arduino.h>
// #include <DHT.h>

// #define pinDHT 23
// #define tipoDHT DHT22
// #define Led1 4

// DHT medidor(pinDHT, tipoDHT);

// void setup() {

//     pinMode(Led1, OUTPUT);
//     Serial.begin(115200);

//     medidor.begin();
//     Serial.println("Teste de DHT22");

    // float tempC = medidor.readTemperature();
    // float tempF = medidor.readTemperature(true);
    // float umi = medidor.readHumidity();

// }

// void loop() {
//     // float tempC = medidor.readTemperature();
//     // float tempF = medidor.readTemperature(true);
//     // float umi = medidor.readHumidity();

    // Serial.print("Tempo em C: ");
    // Serial.println(tempC);

    // Serial.print("Tempo em F: ");
    // Serial.println(tempF);

    // Serial.print("Umidade:    ");
    // Serial.println(umi);
    // Serial.println(   );

//     // delay(3000);

// }

//----------------------------------------------------------------------------------------
// //Etapa 2 Atualiza os dados do LCD a cada 3s
// #include <Arduino.h>
// #include <DHT.h>
// #include <LiquidCrystal_I2C.h>

// #define pinDHT 23
// #define tipoDHT DHT22
// #define Led1 4

// LiquidCrystal_I2C lcd (0x27, 20, 4);
// DHT medidor(pinDHT, tipoDHT);

// long tempoAnt = 0;
// long segundos = 3000;

// void setup() {

//     pinMode(Led1, OUTPUT);
//     Serial.begin(115200);

//     medidor.begin();
//     Serial.println("Teste de DHT22");

//     lcd.init();
//     lcd.backlight();

// }

// void loop() {

//     unsigned long tempoAtual = millis();
//     float tempC = medidor.readTemperature();
//     float tempF = medidor.readTemperature(true);
//     float umi = medidor.readHumidity();

//     if (tempoAtual-tempoAnt>=segundos)
//     {
//
//         Serial.print("Tempo em C: ");
//         Serial.println(tempC);
//         lcd.setCursor(0,0);
//         lcd.print("Tempo em C: ");
//         lcd.print(tempC);

//         Serial.print("Tempo em F: ");
//         Serial.println(tempF);
//         lcd.setCursor(0,1);
//         lcd.print("Tempo em F: ");
//         lcd.print(tempF);

//         Serial.print("Umidade:    ");
//         Serial.println(umi);
//         lcd.setCursor(0,2);
//         lcd.print("Umidade: ");
//         lcd.print(umi);

//         Serial.println(   );
//         lcd.setCursor(0,3);
//         lcd.print("------------------");

//         tempoAnt = tempoAtual;
//     }

// }

//----------------------------------------------------------------------------------------
// //Etapa 3 Atualiza os dados do LCD somente o valor alterado
// #include <Arduino.h>
// #include <DHT.h>
// #include <LiquidCrystal_I2C.h>

// #define pinDHT 23
// #define tipoDHT DHT22
// #define Led1 4

// LiquidCrystal_I2C lcd (0x27, 20, 4);
// DHT medidor(pinDHT, tipoDHT);

// long tempoAnt = 0;
// long segundos = 3000;

// void setup() {

//     pinMode(Led1, OUTPUT);
//     Serial.begin(115200);

//     medidor.begin();
//     Serial.println("Teste de DHT22");

//     lcd.init();
//     lcd.backlight();

//     //linha 1
//     lcd.setCursor(0,0);
//     lcd.print("Tempo em C: ");

//     //linha 2
//     lcd.setCursor(0,1);
//     lcd.print("Tempo em F: ");

//     //linha 2
//     lcd.setCursor(0,2);
//     lcd.print("Umidade: ");
// }

// void loop() {

//     unsigned long tempoAtual = millis();
//     float tempC = medidor.readTemperature();
//     float tempF = medidor.readTemperature(true);
//     float umi = medidor.readHumidity();

//     if (tempoAtual-tempoAnt>=segundos)
//     {
//        //linha 1
//         lcd.setCursor(12,0);
//         lcd.print(tempC);

//         //linha 2
//         lcd.setCursor(12,1);
//         lcd.print(tempF);

//         //linha 3
//         lcd.setCursor(9,2);
//         lcd.print(umi);

//         // Serial.print("Umidade:    ");
//         // Serial.println(umi);
//         // lcd.setCursor(0,2);
//         // lcd.print("Umidade: ");
//         // lcd.print(umi);

//         // Serial.println(   );
//         // lcd.setCursor(0,3);
//         // lcd.print("------------------");

//         tempoAnt = tempoAtual;
//     }

// }

// //----------------------------------------------------------------------------------------
// //DESAFIO Atualiza os dados do LCD a cada 3 somente QUANDO o valor alterado
// #include <Arduino.h>
// #include <DHT.h>
// #include <LiquidCrystal_I2C.h>

// #define pinDHT 23
// #define tipoDHT DHT22
// #define Led1 4

// LiquidCrystal_I2C lcd (0x27, 20, 4);
// DHT medidor(pinDHT, tipoDHT);

// long tempoAnt = 0;
// long segundos = 3000;

// float estadoC = 0;
// float estadoF = 0;
// float estadoU = 0;

// void setup() {

//     pinMode(Led1, OUTPUT);
//     Serial.begin(115200);

//     medidor.begin();

//     lcd.init();
//     lcd.backlight();

//     //linha 1
//     lcd.setCursor(0,0);
//     lcd.print("Tempo em C: ");

//     //linha 2
//     lcd.setCursor(0,1);
//     lcd.print("Tempo em F: ");

//     //linha 2
//     lcd.setCursor(0,2);
//     lcd.print("Umidade: ");
// }

// void loop() {

//     unsigned long tempoAtual = millis();
//     float tempC = medidor.readTemperature();
//     float tempF = medidor.readTemperature(true);
//     float umi = medidor.readHumidity();

//     if (tempoAtual-tempoAnt>=segundos)
//     {
//        //linha 1
//         lcd.setCursor(12,0);
//         lcd.print(tempC);

//         //linha 2
//         lcd.setCursor(12,1);
//         lcd.print(tempF);

//         //linha 3
//         lcd.setCursor(9,2);
//         lcd.print(umi);

//         // Serial.print("Umidade:    ");
//         // Serial.println(umi);
//         // lcd.setCursor(0,2);
//         // lcd.print("Umidade: ");
//         // lcd.print(umi);

//         // Serial.println(   );
//         // lcd.setCursor(0,3);
//         // lcd.print("------------------");

//         tempoAnt = tempoAtual;
//     }
// }

//-------------------------------------------------------
// LED analogico ETAPA 1 & 2
// #include <Arduino.h>

// #define Led1 2 // portas analogicas 2, 4, 15
// #define Led2 4
// #define Led3 15

// bool direcao = false;

// int intensidade = 0;

// void setup(){
//     pinMode(Led1,OUTPUT);
    // pinMode(Led2,OUTPUT);
    // pinMode(Led3,OUTPUT);
//     Serial.begin(115200);
// }

// void loop (){
//     // de 0 a 255
//     analogWrite(Led1, intensidade);

//     if (direcao==false){
//         intensidade+=5;
//         delay(250);
//     }

//     if(intensidade>=255){
//         direcao=true;
//     }

//     if (direcao==true){
//         intensidade-=5;
//         delay(250);
//     }

//     if (intensidade<=0){
//         direcao=false;
//     }

//     Serial.println(intensidade);
//     delay(250);
// }

// //-------------------------------------------------------
// LED analogico ETAPA 3 - MILLIS
// #include <Arduino.h>

// #define Led1 2

// bool direcao = false;
// int intensidade = 0;

// unsigned long tempoAnt = 0;
// unsigned long intervalo = 250;

// void setup()
// {
//     pinMode(Led1, OUTPUT);
//     Serial.begin(115200);
// }

// void loop()
// {

//     unsigned long tempoAtual = millis();

//     // de 0 a 255
//     analogWrite(Led1, intensidade);

//     if (tempoAtual - tempoAnt >= intervalo){
//         if (direcao == true){
//         intensidade -= 5;
//         }   

    
//         if (direcao == false){
//             intensidade += 5;
//         }
//         tempoAnt = tempoAtual;
//         Serial.println(intensidade);
//     }
    
//     if (intensidade >= 255){
//         direcao = true;
//     }

//     if (intensidade <= 0){
//         direcao = false;            
//         }

// }


//-------------------------------------------------------
// LED analogico ETAPA 4 - 3leds em seguencia, gradual
// #include <Arduino.h>

// #define Led1 4
// #define Led2 2
// #define Led3 15

// float estado = 0;
// bool direcao = false;
// int intensidade1 = 0;
// int intensidade2 = 0;
// int intensidade3 = 0;

// unsigned long tempoAnt = 0;
// unsigned long intervalo = 250;

// void setup()
// {
//     pinMode(Led1, OUTPUT);
//     pinMode(Led2,OUTPUT);
//     pinMode(Led3,OUTPUT);
//     Serial.begin(115200);
// }

// void loop()
// {
//     unsigned long tempoAtual = millis();

//     if (tempoAtual - tempoAnt >= intervalo){
//         if (direcao==false){
//             if (intensidade1 <255){
//                 intensidade1 += 5;
//             }

//             if (intensidade1 >=255 && intensidade2 < 255){
//                 intensidade2 += 5;
//             }

//             if (intensidade2 >=255&& intensidade3 < 255){
//                 intensidade3 += 5;
//             }   
//             if (intensidade3 >=255){
//                 direcao=true;
//             }          
            
//         }
        
//         if (direcao==true){ //ou else{
//             if (intensidade1 > 0){
//                 intensidade1 -= 5;                
//             }
                        
//             if (intensidade1==0 && intensidade2 > 0){
//                 intensidade2 -= 5;
//             }
            
//             if (intensidade2==0 && intensidade3 > 0){
//                 intensidade3 -= 5;
//             } 

//             if (intensidade3 ==0){
//                 direcao=false;
//             }            
//         }
        
//         Serial.println(intensidade1);
//         Serial.println(intensidade2);
//         Serial.println(intensidade3);
//         Serial.println(" ");

//         tempoAnt = tempoAtual;

        // analogWrite(Led1, intensidade1);
        // analogWrite(Led2, intensidade2);
        // analogWrite(Led3, intensidade3);        
//     }
        
//     }


// //-------------------------------------------------------
// // EXERCIIO 2 ETAPA 1 - Ler dht, temp: led ver. on; umi.: led azul
// #include <Arduino.h>
// #include <DHT.h>

// #define Led1 4
// #define Led2 2
// #define Led3 15

// #define pinDHT 22
// #define tipoDHT DHT22

// DHT medidor(pinDHT, tipoDHT);

// float estado = 0;
// bool direcao = false;
// int intensidade1 = 0;
// int intensidade2 = 0;
// int intensidade3 = 0;

// unsigned long tempoAnt = 0;
// unsigned long intervalo = 500;

// void setup()
// {
//     pinMode(Led1, OUTPUT);
//     pinMode(Led2,OUTPUT);
//     pinMode(Led3,OUTPUT);
//     Serial.begin(115200);

//     medidor.begin();

// }

// void loop()
// {
//     unsigned long tempoAtual = millis();
//     float tempC = medidor.readTemperature();
//     float tempF = medidor.readTemperature(true);
//     float umi = medidor.readHumidity();

//     if (tempoAtual - tempoAnt >= intervalo){

//         if (tempC>=28.20){
//             digitalWrite(Led1, 1);
//         }
//         else{
//             digitalWrite(Led1, 0);
//         }
        

//         if (umi>=75){
//             digitalWrite(Led3, 1);
//         }

//         else{
//             digitalWrite(Led3, 0);
//         }

//         Serial.print("Tempo em C: ");
//         Serial.println(tempC);

//         Serial.print("Umidade:    ");
//         Serial.println(umi);
//         Serial.println(   );

//         tempoAnt = tempoAtual;
//     }
        
//     }

//-------------------------------------------------------
// EXERCIIO 2 ETAPA 2 - Ler dht, temp: led ver. on; umi.: led azul; mudar intensidade
#include <Arduino.h>
#include <DHT.h>

#define Led1 4
#define Led2 2
#define Led3 15

#define pinDHT 22
#define tipoDHT DHT22

DHT medidor(pinDHT, tipoDHT);

float estado = 0;
bool direcao = false;
int intensidade1;
int intensidade3;

unsigned long tempoAnt = 0;
unsigned long intervalo = 500;

void setup()
{
    pinMode(Led1, OUTPUT);
    pinMode(Led2,OUTPUT);
    pinMode(Led3,OUTPUT);
    Serial.begin(115200);

    medidor.begin();

}

void loop()
{
    unsigned long tempoAtual = millis();
    float tempC = medidor.readTemperature();
    float umi = medidor.readHumidity();

    intensidade1= map(tempC,23,30,0,255);
    intensidade3= map(umi,50,100,0,255);

    intensidade1= constrain(intensidade1,0,255);
    intensidade3= constrain(intensidade3,0,255);

    if (tempoAtual - tempoAnt >= intervalo)
    {
        analogWrite(Led1, intensidade1);    
        analogWrite(Led3, intensidade3);
        
        Serial.print("Tempo em C: ");
        Serial.println(tempC);

        Serial.print("Umidade:    ");
        Serial.println(umi);
        Serial.println(   );

        tempoAnt=tempoAtual;
    }

}
        
