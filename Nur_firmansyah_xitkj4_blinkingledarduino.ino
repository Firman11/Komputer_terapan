int varled3 = 3;
int varled7 = 7;
int varled8 = 8;
int varled9 = 9;
void setup() {
pinMode(varled3, OUTPUT);
pinMode(varled7, OUTPUT);
pinMode(varled8, OUTPUT);
pinMode(varled9, OUTPUT);
}
void loop() {
{digitalWrite(varled3, HIGH);
delay(100);
digitalWrite(varled3, LOW);
delay(100);}
{digitalWrite(varled7, HIGH);
delay(100);
digitalWrite(varled7, LOW);
delay(100);}
{digitalWrite(varled8, HIGH);
delay(100);
digitalWrite(varled8, LOW);
delay(100);}
{digitalWrite(varled9,HIGH);
delay(100);
digitalWrite(varled9,LOW);
delay(100);
}
}
