const int LED = 13;
const int LED2 = 12;
const int LED3 = 11;
const int Button= 6;
bool isPressed= false;

void setup()
{ // setup led
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  // setup Button
  Serial.begin(9600);
  pinMode(Button, INPUT);
}

void loop()
{
  isPressed = digitalRead(Button);
  
  if (isPressed== true) {
  
  digitalWrite(LED, HIGH);
  digitalWrite(LED2, false);
  Serial.print("Red on\n");
  
  
  delay(1000); 
                     
  
  digitalWrite(LED, LOW);
  digitalWrite(LED2, true);
  
  
  delay(1000);
  
  
  
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, false);
  Serial.print("Yellow on\n");
  
  
  delay(1000); 
                     
  
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, true);
  
  
  delay(1000);
  
  
  digitalWrite(LED3, HIGH);
  digitalWrite(LED, false);
  Serial.print("Green on\n");
  
  
  delay(1000); 
                     
  digitalWrite(LED3, LOW);
  digitalWrite(LED, true);
  Serial.print("Led\n");
  
  
    delay(1000);} else {
    digitalWrite(LED, false);
  
  }
}