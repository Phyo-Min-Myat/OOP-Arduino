
#include "Morse.h"

Morse morse(13);

void setup() {

}

void loop() {
  morse.dot();
  morse.dash();
  delay(1000);
}
