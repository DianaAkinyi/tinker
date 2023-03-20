int celsius = 0;
int fahrenheit = 0;

void setup(){
  pinMode(A0, INPUT);
    Serial.begin(9600);
}
    
void loop(){
  celsius =map(((analogRead(A0)-32)*3.04),-90,360,30,90);
  
  fahrenheit = ((celsius *9) / 5 +32);
  Serial.print(celsius);
  Serial.print("C, ");
  Serial.print(fahrenheit ); 
  Serial.println(" F");
  delay(1000);
}    