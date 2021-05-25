int gate1A=11;
int gate1B=12;
int gate1o=13;

void setup() {
pinMode(gate1A,OUTPUT);
pinMode(gate1B,OUTPUT);
pinMode(gate1o,INPUT);

}

void loop() {
 
digitalWrite(gate1A,HIGH);
digitalWrite(gate1A,LOW);
if(digitalRead(gate1o)==HIGH)
  {
  serial.print("OR GATE");
  }
else
  {
    serial.print("AND GATE"); 
  }
}
