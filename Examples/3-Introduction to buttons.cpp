const int Pulsante = 6;
bool Premuto = LOW;

void setup()
{
  Serial.begin(9600);
  pinMode(Pulsante, INPUT);
}

void loop()
{
  // Read button status
  isPressed = digitalRead(Button);
  
  // check if the button is pressed
//  note: 
//  HIGH=1=true
//  LOW=0=false

  if (isPressed == HIGH) {
    Serial.print("Button pressed\n");
  } else {
    Serial.print("Button not pressed\n");
  }
  
  delay(100);
}