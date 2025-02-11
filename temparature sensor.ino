const int lm35_pin = A0;  

void setup() {
  Serial.begin(9600);
}

void loop() {
  int temp_adc_val = analogRead(lm35_pin);  
  float temp_val = (temp_adc_val * 4.88) / 10;  

  Serial.print("Temperature = ");
  Serial.print(temp_val);
  Serial.println(" Degree Celsius");

  delay(500);
}
