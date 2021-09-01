 int LED1=11;
  int LED2=12;
  int LED3=13;
  void setup() {
  // put your setup code here, to run once:
    pinMode(LED1,OUTPUT);
    pinMode(LED2,OUTPUT);
    pinMode(LED3,OUTPUT);
    Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

        Serial.println("Zero");
        digitalWrite(LED1, LOW);
     digitalWrite(LED2, LOW);
     digitalWrite(LED3, LOW);
     
    delay(1000);
       Serial.println("One");
    digitalWrite(LED1,HIGH);
     digitalWrite(LED2, LOW);
     digitalWrite(LED3, LOW);
    delay(1000);
       Serial.println("Two");
    digitalWrite(LED1, LOW);
     digitalWrite(LED2, HIGH);
     digitalWrite(LED3, LOW);
    delay(1000);
       Serial.println("Three");
    digitalWrite(LED1, HIGH);
     digitalWrite(LED2, HIGH);
     digitalWrite(LED3, LOW);
    delay(1000);
       Serial.println("Four");
    digitalWrite(LED1, LOW);
     digitalWrite(LED2, LOW);
     digitalWrite(LED3, HIGH);
    delay(1000);
       Serial.println("Five");
    digitalWrite(LED1, HIGH);
     digitalWrite(LED2, LOW);
     digitalWrite(LED3, HIGH);
    delay(1000);
       Serial.println("Six");
    digitalWrite(LED1, LOW);
     digitalWrite(LED2, HIGH);
     digitalWrite(LED3, HIGH);
    delay(1000);
       Serial.println("Seven");
       digitalWrite(LED1, HIGH);
     digitalWrite(LED2, HIGH);
     digitalWrite(LED3, HIGH);
    delay(1000);
}
