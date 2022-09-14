#include "LEDD.h"
#include "Arduino.h"

LEDD::LEDD(int pin,long on, long off){
  ledPin = pin;
  pinMode(ledPin,OUTPUT);
  onTime = on;
  offTime = off;
}

void LEDD::turnOn(){
  digitalWrite(ledPin,HIGH);
}

void LEDD::turnOff(){
  digitalWrite(ledPin,LOW);
}

void LEDD::blinkLed(){
  this->turnOn();
  delay(onTime);
  this->turnOff();
  delay(offTime);
}
