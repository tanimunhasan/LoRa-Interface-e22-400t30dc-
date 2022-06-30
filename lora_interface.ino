#include "Lora.h"
void setup() {
  // put your setup code here, to run once:

  loraInit();
  delay(500);
  Serial.println("Hi, I'm going to send message");
  delay(500);
  setConf(11, 22, 1, 0);
  delay(500);
  loraMode(2); //conf mode
  //loraMode(0); // Normal Mode

}

void loop() {
  // put your main code here, to run repeatedly:

  //char* data = "hello";
  //sendData(11, 22, 01, data);
  //delay(1000);
  multiSerial();

}
