#include <Wire.h>                                         //include library
#include <Adafruit_MLX90614.h>                            //include library
#include "Arduino.h"
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"
Adafruit_MLX90614 mlx = Adafruit_MLX90614();              //Instantiate an object
SoftwareSerial mySoftwareSerial(10, 11); // RX, TX
DFRobotDFPlayerMini myDFPlayer;
void printDetail(uint8_t type, int value);
#define mlxTimeInterval 1000                              //Detect the time interval of a trip
unsigned long mlxTimes = 0;                               //Record the device running time
float mlxAmbTemp = 0;                                     //Ambient temperature
float mlxObjTemp = 0;                                     //Body temperature
#define light1 2
#define light2 3
#define light3 4
#define light4 5
#define jie1 A0
#define jie2 A1
#define jie3 A2
#define jie4 A3
int value = 0;
void setup()
{
  pinMode(light1, OUTPUT);
  pinMode(light2, OUTPUT);
  pinMode(light3, OUTPUT);
  pinMode(light4, OUTPUT);
  pinMode(jie1, INPUT);
  pinMode(jie2, INPUT);
  pinMode(jie3, INPUT);
  pinMode(jie4, INPUT);
  mlx.begin();
  mySoftwareSerial.begin(9600);
  Serial.begin(9600);
  digitalWrite(light1, HIGH);
  digitalWrite(light2, HIGH);
  digitalWrite(light3, HIGH);
  digitalWrite(light4, HIGH);

  if (!myDFPlayer.begin(mySoftwareSerial, true, false)) {  //Use softwareSerial to communicate with mp3.
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while(true){
      delay(0); // Code to compatible with ESP8266 watch dog.
    }
  }
  Serial.println(F("DFPlayer Mini online."));
  
  myDFPlayer.volume(30);  //Set volume value. From 0 to 30
}

void loop() {
  
     if (myDFPlayer.available()) {
      printDetail(myDFPlayer.readType(), myDFPlayer.read()); //Print the detail message from DFPlayer to handle different errors and states.
    }
  
  getMlxData();
  int i = digitalRead(A0);
  int j = digitalRead(A1);
  int k = digitalRead(A2);
  int m = digitalRead(A3);
  Serial.print(i);
  Serial.print("  ");
  Serial.print(j);
  Serial.print("  ");
  Serial.print(k);
  Serial.print("  ");
  Serial.print(m);
  Serial.print("  ");
  Serial.println(mlxObjTemp);
  if (i == 1 && mlxObjTemp < 36.3)
  {
    if(value!=1)
    {
      myDFPlayer.play(1);
      Serial.print(0);
      value =1;
    }
  }
  else if (i == 1 && mlxObjTemp < 36.7 && mlxObjTemp > 36.3)
  {
    if(value!=2)
    {
      myDFPlayer.play(5);
      delay(2000);
      Serial.print(1);
      value =2;
    }
  }
  else if (i == 1 && mlxObjTemp > 36.7)
  {
    if(value!=3)
    {
      myDFPlayer.play(9);
      delay(2000);
      Serial.print(2);
      value =3;
    }
  }
  if (j == 1 && mlxObjTemp < 36.3)
  {
    if(value!=4)
    {
      myDFPlayer.play(4);
      delay(2000);
      Serial.print(0);
      value =4;
    }

  }
  else if (j == 1 && mlxObjTemp < 36.7 && mlxObjTemp > 36.3)
  {
    if(value!=5)
    {
      myDFPlayer.play(6);
      delay(2000);
      Serial.print(1);
      value =5;
    }
  }
  else if (j == 1 && mlxObjTemp > 36.7)
  {
    if(value!=6)
    {
      myDFPlayer.play(10);
      delay(2000);
      Serial.print(2);
      value =6;
    }
  }
  if (k == 1 && mlxObjTemp < 36.3)
  {
    if(value!=7)
    {
      myDFPlayer.play(3);
      delay(2000);
      Serial.print(0);
      value =7;
    }
  }
  else if (k == 1 && mlxObjTemp < 36.7 && mlxObjTemp > 36.3)
  {
    if(value!=8)
    {
      myDFPlayer.play(7);
      delay(2000);
      Serial.print(1);
      value =8;
    }
  }
  else if (k == 1 && mlxObjTemp > 36.7)
  {
    if(value!=9)
    {
      myDFPlayer.play(11);
      delay(2000);
      Serial.print(2);
      value =9;
    }
  }
  if (m == 1 && mlxObjTemp < 36.3)
  {
    if(value!=10)
    {
      myDFPlayer.play(4);
      delay(2000);
      Serial.print(0);
      value =10;
    }
  }
  else if (m == 1 && mlxObjTemp < 36.7 && mlxObjTemp > 36.3)
  {
    if(value!=11)
    {
      myDFPlayer.play(8);
      delay(2000);
      Serial.print(1);
      value =11;
    }
  }
  else if (m == 1 && mlxObjTemp > 36.7)
  {
    if(value!=12)
    {
      myDFPlayer.play(12);
      delay(2000);
      Serial.print(2);
      value =12;
    }
  }
  delay(100);
}
void getMlxData()
{
  if (millis() - mlxTimes >= mlxTimeInterval ) {           //This command is executed once in a while
    mlxTimes = millis();
    mlxAmbTemp = mlx.readAmbientTempC();                  //Acquired temperature
    mlxObjTemp = mlx.readObjectTempC() * 0.8;             //Acquired temperature


  }
}
void printDetail(uint8_t type, int value) {
  switch (type) {
    case TimeOut:
      Serial.println(F("Time Out!"));
      break;
    case WrongStack:
      Serial.println(F("Stack Wrong!"));
      break;
    case DFPlayerCardInserted:
      Serial.println(F("Card Inserted!"));
      break;
    case DFPlayerCardRemoved:
      Serial.println(F("Card Removed!"));
      break;
    case DFPlayerCardOnline:
      Serial.println(F("Card Online!"));
      break;
    case DFPlayerUSBInserted:
      Serial.println("USB Inserted!");
      break;
    case DFPlayerUSBRemoved:
      Serial.println("USB Removed!");
      break;
    case DFPlayerPlayFinished:
      Serial.print(F("Number:"));
      Serial.print(value);
      Serial.println(F(" Play Finished!"));
      break;
    case DFPlayerError:
      Serial.print(F("DFPlayerError:"));
      switch (value) {
        case Busy:
          Serial.println(F("Card not found"));
          break;
        case Sleeping:
          Serial.println(F("Sleeping"));
          break;
        case SerialWrongStack:
          Serial.println(F("Get Wrong Stack"));
          break;
        case CheckSumNotMatch:
          Serial.println(F("Check Sum Not Match"));
          break;
        case FileIndexOut:
          Serial.println(F("File Index Out of Bound"));
          break;
        case FileMismatch:
          Serial.println(F("Cannot Find File"));
          break;
        case Advertise:
          Serial.println(F("In Advertise"));
          break;
        default:
          break;
      }
      break;
    default:
      break;
  }

}