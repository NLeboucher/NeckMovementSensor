
#define ledpin 4
float ledvalue=0;

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(115200);
  pinMode(7, INPUT);
  pinMode(ledpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int temp = analogRead(7);
  if(temp<600){
    ledvalue=255.0;
  }
  analogWrite(ledpin, ledvalue);
  ledvalue*=0.99;
  //Serial.print(ledvalue);
  //Serial.print(" ");
  //Serial.println(temp);
  delay(1);
}
