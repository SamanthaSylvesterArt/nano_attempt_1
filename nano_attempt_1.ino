
// These constants won't change. They're used to give names to the pins used:
int relay = 10;
int sensorPin;
int sensorVal = analogRead(26);


void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(relay, OUTPUT); 
  
}
 
void loop() {
 sensorVal = analogRead(sensorPin);
 
 if(sensorVal >= 500){
  digitalWrite(relay, HIGH);
  }
  delay(60);
  Serial.println(sensorVal);
  
}
