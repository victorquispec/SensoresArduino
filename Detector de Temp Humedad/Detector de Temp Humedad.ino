#include <DHT.h>    
#include <DHT_U.h>
int sensor=2;
int TEMPERATURA;
int HUMEDAD;
int LED=3;
 
DHT dht(sensor, DHT11);
       
void setup(){
  pinMode(LED,OUTPUT);
  Serial.begin(9600);   
  dht.begin();
}
void loop(){
  TEMPERATURA =dht.readTemperature(); 
  HUMEDAD = dht.readHumidity();  
  Serial.print("Temperatura: ");  
  Serial.print(TEMPERATURA);
  Serial.print(" Humedad: ");
  Serial.println(HUMEDAD);
  delay(500);

  /*if(TEMPERATURA<=28){
    for(int i =0; i<3; i++){
    digitalWrite(LED, HIGH);
    delay(50);
    digitalWrite(LED, LOW);
    delay(50);
    }
    }*/

    if(HUMEDAD>=55){
    for(int i =0; i<4; i++){
    digitalWrite(LED, HIGH);
    delay(400);
    digitalWrite(LED, LOW);
    delay(40);
     }
    }
    
  }