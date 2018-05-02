int hallPin=13;
int LedPin=4;
int state=0;
int cont=0;
unsigned long int tempo;

void setup()
{
pinMode(hallPin,INPUT);
pinMode(LedPin,OUTPUT);
Serial.begin(9600);
tempo=millis();
}


void loop()
{
  if(digitalRead(hallPin)==1){
  digitalWrite(LedPin,HIGH);
  //Serial.println(digitalRead(hallPin));
    if(state==1){
      state=0;
      cont++;
      }
  }
  else{
  digitalWrite(LedPin,LOW);
    state=1;
  }
  if(millis()-tempo>=1000){
    Serial.println(cont);
    tempo=millis();
    cont=0;
    }
}



