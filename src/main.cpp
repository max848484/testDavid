#include <Arduino.h>

#define TXD 21
#define USB_DM 18
#define USB_DP 19
#define SDA 6
#define SCL 7

void setup() {
  // Ce code roule seulement une fois au départ
  pinMode(TXD, OUTPUT);
  digitalWrite(TXD, HIGH);

  pinMode(USB_DM, OUTPUT);
  digitalWrite(USB_DM, LOW);

  pinMode(USB_DP, OUTPUT);
  digitalWrite(USB_DP, LOW);

  pinMode(SDA, OUTPUT);
  digitalWrite(SDA, LOW);

  pinMode(SCL, OUTPUT);
  digitalWrite(SCL, LOW);

}

void loop() {
  // Ce code roule en boucle après le setup()
  delay(500); //donc 0,5sec
  digitalWrite(TXD, LOW);
  digitalWrite(USB_DM, HIGH);

  delay(500); //donc 0,5sec
  digitalWrite(USB_DM, LOW);
  digitalWrite(USB_DP, HIGH);  

  delay(500); //donc 0,5sec
  digitalWrite(USB_DP, LOW);
  digitalWrite(SDA, HIGH);  

  delay(500); //donc 0,5sec
  digitalWrite(SDA, LOW);
  digitalWrite(SCL, HIGH);  

  delay(500); //donc 0,5sec
  digitalWrite(SCL, LOW);
  digitalWrite(TXD, HIGH);      
}