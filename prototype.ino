void setup() {
  // put your setup code here, to run once:
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(115200);
  Serial.setTimeout(.1);
}
int pos = 0;    
String x;
void loop() {
// analogWrite(6,125);
// analogWrite(9,125);
// analogWrite(10,125);
//  analogWrite(5,125);
  while (!Serial.available());
  
  x = Serial.readString();
  pos=x.toInt();
  if(pos==2)
  {
    analogWrite(10,150);
    analogWrite(9,0);
    analogWrite(5,0);
    analogWrite(6,0);
  }
  else if(pos==1)
  {
    analogWrite(6,0);
    analogWrite(5,0);
    analogWrite(10,0);
    analogWrite(9,150);
  }
  else if(pos==0)
  {
    analogWrite(10,0);
    analogWrite(5,0);
    analogWrite(9,0);
    analogWrite(6,125);
  }
  else if(pos==3)
  {
    analogWrite(10,0);
    analogWrite(5,125);
    analogWrite(9,0);
    analogWrite(6,0);
  }

}
