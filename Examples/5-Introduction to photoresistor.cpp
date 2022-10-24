int sensorValue = 0;
float voltValue =0;

void setup()
{
  pinMode(A0, INPUT);	// not necessary tbh
  Serial.begin(9600);

}

void loop()
{
    // reads the A0 analog input value
  sensorValue = analogRead(A0);
  
  // calulates the volt value from the raw one using the proportion 5volt/1023raw=voltTension/sensorValue

  voltValue = (float) (sensorValue * 5) / 1023;
  
  Serial.print(sensorValue);
  Serial.println(" raw value");
  
  Serial.print(voltValue);
  Serial.println(" volt");
  
  delay(10); 
}