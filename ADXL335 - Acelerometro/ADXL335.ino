  /**
   * By Gustavo Terras
   * 
   * Acelerometro modelo - ADXL335
   * 
   * 5v
   * gnd
   * analog 1 x-axis
   * analog 2 y-axis
   * analog 3 z-axis
  */
  
  const int xpin = 1;
  const int ypin = 2;
  const int zpin = 3;
  
  void setup(){
   Serial.begin(9600);
  }
  
  void loop(){
    
   int x = analogRead(xpin);
   
   int y = analogRead(ypin);
   
   int z = analogRead(zpin);
  
  Serial.print(x); 
  Serial.print("\t");
  Serial.print(y);
  Serial.print("\t");
  Serial.print(z);  
  Serial.print("\n");
  
  delay(500);
  }
