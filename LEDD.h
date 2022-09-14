#ifndef LEDD_h
#define LEDD_h

class LEDD{
  int ledPin;
  long onTime;
  long offTime;
  public:
    LEDD(int pin,long on,long off);
    void blinkLed();
    void turnOn();
    void turnOff();
};

#endif
