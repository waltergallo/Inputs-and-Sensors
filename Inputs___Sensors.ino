void setup(){
  pinMode(13,OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
  }
  
void loop(){
  int var = analogRead(A0);
  Serial.println(var);
  if(var < 20){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  } 
}
