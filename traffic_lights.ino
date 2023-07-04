const int red = 11;
const int yellow = 12;
const int green = 13;


void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(red, HIGH);
  digitalWrite(yellow, HIGH);
  delay(3000);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  delay(2000);

  digitalWrite(green, HIGH);
  delay(5000);
  digitalWrite(green, LOW);
  delay(2000);

  digitalWrite(yellow, HIGH);
  delay(3000);
  digitalWrite(yellow, LOW);
  delay(2000);

  digitalWrite(red, HIGH);
  delay(3000);
  digitalWrite(red, LOW);
  delay(2000);
 

 
 

}
