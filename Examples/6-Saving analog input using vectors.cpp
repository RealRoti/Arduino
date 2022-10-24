#define PIN 0

int values[5];
int TimeSamplingRate= 200;
int sum;
float average;

void setup(){
  Serial.begin(9600);
}

void loop(){
  
  // let's acquire values and save them in the array
  for(int i=0; i<5; i++){
    values[i] = analogRead(PIN);
    delay(TimeSamplingRate); 
    Serial.print("Array ");
    Serial.print(i);
    Serial.print(": ");
    Serial.println(values[i]);
  }
  
  // sum
  sum = 0;

  for(int i=0; i<5; i++)
  sum = sum + values[i];

  // average
  average = sum/5;

  // min value
  int vmin=0;
  vmin=values[0];
  for(int j=0;j<5;j++)
    {
      if(values[j]<vmin)vmin=values[j];
    }
  
  // max value
  int vMax;
  vMax=values[0];
  for(int j=0;j<5;j++)
    {
      if(values[j]>vMax)vMax=values[j];
    }
  
  // SORT VALUES IN THE ARRAY IN ASCENDING ORDER
  int supportVar;
  int vMin;

	for(int i=0; i<4; i++)
	{
    min = i;
    for(int j=i+1; j<5; j++)
      {
        if(values[j] < values[vMin])
          vMin = j;
      }
    supportVar=values[vMin];
    values[vMin]=values[i];
    values[i]=supportVar;
	}
  
  // median
  int median=values[2];
  
  // STAMPA
  Serial.print("Summed values: ");
  Serial.println(sum);
  
  Serial.print("Average value: ");
  Serial.println(average);
  
  Serial.print("Min value ");
  Serial.println(vMin);
  
  Serial.print("Max value: ");
  Serial.println(vMax);
  
  Serial.print("median: ");
  Serial.println(median);
  
  Serial.println(" "); //separatore
  
}
