
void setup(){

  pinMode(9, OUTPUT);   //Initial pin9 output
  pinMode(11, OUTPUT);  //Initial pin11 output
  pinMode(13, OUTPUT);  //Initial pin13 output

} //SetUp

void loop(){

 digitalWrite(9, HIGH);
 delay(1000);
 digitalWrite(9, LOW);
 digitalWrite(11, HIGH);
 delay(1000);
 digitalWrite(11, LOW);
 digitalWrite(13, HIGH);
 delay(1000);
 digitalWrite(13, LOW);
  
} //Loop
