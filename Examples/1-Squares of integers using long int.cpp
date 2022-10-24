// Squares of integers using long int

void setup(){
Serial.begin(9600); // 9600 data tranf. speed (bit/s)

long j;
for (j=0;j<200;j++)
  {
    Serial.print(j);
    Serial.print("\t");
    Serial.println(j*j);
  }
}

void loop(){
  delay(1000); // fa una pausa di 1 sec
} 