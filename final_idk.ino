
//#include "Nextion.h"
#include <Ultrasonic.h>
Ultrasonic ultrasonic1(9, 10);  
 Ultrasonic ultrasonic2(5,6);  
#include <dht.h>
#define DHTPIN1 7
#define DHTPIN2 8      
//#define DHTTYPE1 dht
//#define DHTTYPE2 dht
#define Buzzer 2  
#define Buzzer1 4  

const int gasPin = A0; //GAS sensor output pin to Arduino analog A0 pin
dht dht1;
dht dht2;
 void setup()  
{
  Serial.begin(9600);
//  dht1.begin();
//  dht2.begin();
  Serial.println("Activated");
  pinMode(Buzzer,OUTPUT);
}
void loop()
 {
  int distance1, distance2;
  float h1 = dht1.humidity;
  float t1= dht1.temperature;
  float h2 = dht2.humidity;
  float t2= dht2.temperature;
  //NexProgressBar jHumidity = NexProgressBar(1, 8, "jHumidity");
 // NexText tHumidity = NexText(2, 25, "tHumidity");
  //NexText tTempC = NexText(2, 4, "tTempC");
  int variable1 =t2;
  int variable2 =h2;
  //int variable4 =distance1;
 // int variable5 =distance2;
  
 /*variable4--;
  if(variable4 == 0){  // If the variable reach 201...
   variable4 = 100; }
 variable5--;
 if(variable5 == 0){  // If the variable reach 201...
   variable5 = 100; }
   */
//int distance1, distance2;
//int variable3 =distance1;
 Serial.print("n4.val=");  
  Serial.print(distance1); 
  Serial.write(0xff); 
  Serial.write(0xff);
  Serial.write(0xff);
Serial.print("Sensor 01: ");
 distance1=Serial.print(ultrasonic1.read());
 delay (5000);
 Serial.println("cm");
 

 /* Serial.print("j3.val=");  
  Serial.print(variable4);  
  Serial.write(0xff); 
  Serial.write(0xff);
  Serial.write(0xff);

  if(variable4 >= 50){  
    Serial.print("t6.txt=");  
    Serial.print("\""); 
    Serial.print("Good distance");  
    Serial.print("\"");  
    Serial.write(0xff);  
    Serial.write(0xff);
    Serial.write(0xff);
  }else{  // Since condition was false, do the following:
    Serial.print("t6.txt=");  
    Serial.print("\""); 
    Serial.print("To near");  
    Serial.print("\"");  
    Serial.write(0xff);  
    Serial.write(0xff);
    Serial.write(0xff);
  }
/*Serial.print("Sensor 02: ");
distance2=Serial.print(ultrasonic2.read());
delay(1000);

  Serial.print("n5.val=");  
  Serial.print(variable5); 
  Serial.write(0xff); 
  Serial.write(0xff);

  Serial.print("j3.val=");  
  Serial.print(variable5);  
  Serial.write(0xff); 
  Serial.write(0xff);
  Serial.write(0xff);

  if(variable5 >= 50){  
    Serial.print("t7.txt=");  
    Serial.print("\""); 
    Serial.print("Good distance");  
    Serial.print("\"");  
    Serial.write(0xff);  
    Serial.write(0xff);
    Serial.write(0xff);
  }else{  // Since condition was false, do the following:
    Serial.print("t7.txt=");  
    Serial.print("\""); 
    Serial.print("To near");  
    Serial.print("\"");  
    Serial.write(0xff);  
    Serial.write(0xff);
    Serial.write(0xff);
  }
if(distance1<100)
{
  Serial.print("buzzer");
 digitalWrite(Buzzer,HIGH);
   }
else
{
  digitalWrite(Buzzer,LOW);
}
if(distance1>=100||distance1<=0)
{
  Serial.println("out of range");
}
else
{
  Serial.print(distance1);
  Serial.println("cm");
}

if(distance2<100)
{
 digitalWrite(Buzzer,HIGH);
  }
else
{
  digitalWrite(Buzzer,LOW);
  }
if(distance2>=100||distance2<=0)
{
  Serial.println("out of range");
}
else
{
  Serial.print(distance2);
  Serial.println("cm");
}

*/
  
//  float h1 = dht1.readHumidity();
 // float t1= dht1.readTemperature();
//  float h2 = dht2.readHumidity();
  //float t2= dht2.readTemperature();
  //int variable1 =t1;
  //int variable2 =h1;
  
  Serial.print("Humidity: ");
  Serial.print(h1);
  Serial.print(" %\t");
  
  /*char hTemp[10] = {0}; 
  utoa(int(h1), hTemp, 10);
  tHumidity.setText(hTemp);
  */
  Serial.print("Humidity: ");
  Serial.print(h2);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
 Serial.print(t2);
  Serial.print(" *C ");

  //static char temperatureCTemp[6];
  //dtostrf(t1, 6, 2, temperatureCTemp);
  //0000tTempC.setText(temperatureCTemp);

  delay(1000);
 Serial.print("Temperature: ");
 Serial.print(t2);
 Serial.print(" *C ");

 Serial.print("n2.val=");  
 Serial.print(variable1);  
 Serial.write(0xff);  
 Serial.write(0xff);
 Serial.write(0xff);

 Serial.print("n1.val=");  
  Serial.print(variable2);  
  Serial.write(0xff);  
  Serial.write(0xff);
  Serial.write(0xff);
 }
 

 
