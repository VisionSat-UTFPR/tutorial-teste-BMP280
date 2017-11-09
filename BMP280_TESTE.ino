

#include <Wire.h>
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>



// Esses defines abaixo são referentes a biblioteca SPI eles são aquilo que vai fazer o software funcionar//
//porque ele vão fazer a coneção dos pinos por isso eles possuem numeros do lados por que esses numeros setam//
//no esquematico onde voce vai conectar cada jumper  caso queira saber a fundo o funcionamento da biblioteca SpI//
//acesse o site https://www.arduino.cc/en/Reference/SPI. Caso não vá usar o SPI e sim o I2C voce deve usasr Adafruit_BMP280 bmp; // I2C//
//em vez de dafruit_BMP280 bmp(BMP_CS); // hardware SPI que é o mesmo que Adafruit_BMP280 bme(BMP_CS, BMP_MOSI, BMP_MISO,  BMP_SCK); utilizado// 
//abaixo só que abaixo ele apenas esta usando os pinos e as portas necessarias para realizar o funcionamento necessario //
//do censor //

// LEMBRANDO QUE ESSES CODIGOS DO SPI VARIA DE ARDUINO PRA ARDUINO ENTÃO TEM QUE VER QUAL QUE USA PRO SEU TIPO DE ARUDINO//


#define BMP_SCK 13
#define BMP_MISO 12
#define BMP_MOSI 11 
#define BMP_CS 10

// Utilização da biblioteca SPI// 

Adafruit_BMP280 bme(BMP_CS, BMP_MOSI, BMP_MISO,  BMP_SCK);

// Setando configurando o arduino para ele rodar o programa//
void setup() {
  Serial.begin(9600);
  Serial.println(F("BMP280 TESTE"));

  
// Aki ele vai analisar se tem um sensor BMP280 conectado caso não tennha ele da a mensagem de erro //
// para voce verificar se ta tudo certo com a biblioteca wire ou com a spi se está setado corretamente aqueles//
// defines utilizado acima.//

  if (!bme.begin()) {
    Serial.println(" Nao conseguiu encontrar um sensor de BMP280 valido, verifique o wiring!");
    while (1);
  }
}

void loop() {
  
    Serial.print("Temperatura = ");
// Apenas está chamando e lendo a temperatura //
    Serial.print(bme.readTemperature());
    Serial.println(" *C");

    Serial.print("Pressão = ");
// Apenas está chamando e lendo a pressão //    
    Serial.print(bme.readPressure());
    Serial.println(" Pa");

    Serial.print("Approximada altitude = ");
// Apenas está chamando e lendo a altitude //    
    Serial.print(bme.readAltitude(1014)); 
    Serial.println(" m");

    Serial.println();
// De quanto em quantos segundos vão surgir dados na tela serial(2000 QUER DIZER 2 SEGUNDOS)//    
    delay(2000);
}
