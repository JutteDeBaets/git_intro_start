int ledPin = 3;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  
  delay(1000);        
  Serial.println(“hello”);              
  digitalWrite(ledPin, LOW);   
  delay(1000);                      
}