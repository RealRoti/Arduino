const int LED = 13;
const int LED2 = 12;
const int LED3 = 11;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop()
{
  digitalWrite(LED, HIGH);
  digitalWrite(LED2, false);

  digitalWrite(LED, LOW);
  digitalWrite(LED2, true);
  
  delay(1000);
  
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, false);

  delay(1000); 
                     
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, true);
  
  delay(1000);
    
  digitalWrite(LED3, HIGH);
  digitalWrite(LED, false);

  delay(1000); 
                     
  digitalWrite(LED3, LOW);
  digitalWrite(LED, true);
  
  delay(1000);
}
