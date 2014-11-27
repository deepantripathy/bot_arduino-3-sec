void setup() {
  Serial.begin(9600);
  
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  
}

void got_char(char x) {
  
  if(x== 'w')
  {
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(10, LOW); 
  }
 
  else
  if(x== 's')
  {
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);  
  }
  
  else
  if(x== 'a')
  {
      digitalWrite(13, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, HIGH);
  } 
  
  else
  if(x== 'd')
  {
      digitalWrite(13, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(10, LOW);
  }
  
  else
  {
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(11, LOW);
      digitalWrite(10, LOW);
  }
 
}

void loop(){
  
    if(Serial.available() > 0){ 
        byte data= Serial.read();
        got_char((char)data);
        delay(2000);
    } 
}


