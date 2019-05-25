void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for Computer to connect through serial USB port
  }
  establishContact();
}

void loop() {

  // Load commands into buffer
}

void establishContact() {
  while(Serial.available() <= 0) {
    Serial.print('Waiting for Connection');
    delay(300);
  }
}
