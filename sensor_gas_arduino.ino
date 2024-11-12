const int gasSensorPin = A0; 
const int buzzerPin = 8;     
int gasThreshold = 400;      

void setup() {
  pinMode(gasSensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int gasLevel = analogRead(gasSensorPin); //
  Serial.print("Nível de gás: ");
  Serial.println(gasLevel);               
  
  if (gasLevel > gasThreshold) {

    tone(buzzerPin, 1000); 
    delay(200);            
    noTone(buzzerPin);     
    delay(200);            
  } else {
    noTone(buzzerPin);     
  }
  
  delay(500); 
}
