#include<IRremote.h>

int IRPIN = 2;
IRrecv irrecv(IRPIN);
decode_results results;
int redpin = 6;
int greenpin = 7;
int bluepin = 5;
int greenpin_count;
int bluepin_count;
int redpin_count;

void setup() {
Serial.begin(9600);
  Serial.println("Enabling IRin");
  irrecv.enableIRIn();
  pinMode(3, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.println("Enabled IRin");
  pinMode(redpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(greenpin, OUTPUT);

}

void loop() {
  int vol = analogRead(A0) * (5.0 / 1023.0*100);
Serial.print("Temp: ");
 Serial.print(vol);
 Serial.println("C");

if (vol < 28) {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(3, LOW);
  delay(500);
}

else if (vol >= 28 && vol <= 30) {
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(3, LOW);
  delay(500);
}

else if (vol>30)
{
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(3, HIGH);
  delay(500);
}

if(irrecv.decode(&results))
  {
    irrecv.resume();
    Serial.println(results.value);
    if(results.value==16738455)
      {
        digitalWrite(3, HIGH);
      }
    else if(results.value==16750695)
      {
        digitalWrite(3, LOW);
      }

    else if(results.value==16736925)
      { 
        
        digitalWrite(redpin, HIGH);
        digitalWrite(bluepin, LOW);
        digitalWrite(greenpin, LOW);
        redpin_count = 1;
      }
    else if(results.value==16761405)
      {
        
        digitalWrite(greenpin, HIGH);
        digitalWrite(bluepin, LOW);
        digitalWrite(redpin, LOW);
        greenpin_count = 1;
      }
     else if(results.value==16720605)
      {
        
        digitalWrite(bluepin, HIGH);
        digitalWrite(redpin, LOW);
        digitalWrite(greenpin, LOW);
        bluepin_count = 1;
        Serial.println(bluepin_count);
      }
     else if(results.value==16754775)
      {
        digitalWrite(redpin, LOW);
        digitalWrite(bluepin, LOW);
        digitalWrite(greenpin, LOW);
      }
    
     
    irrecv.resume();
  }
  delay(500);

}
