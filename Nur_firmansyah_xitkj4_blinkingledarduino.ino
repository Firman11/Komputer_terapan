int firman3 = 3;
int firman7 = 7;
int firman8 = 8;
int firman9 = 9;
void setup() {
pinMode(firman3, OUTPUT);
pinMode(firman7, OUTPUT);
pinMode(firman8, OUTPUT);
pinMode(firman9, OUTPUT);
}
void loop() {
{digitalWrite(firman3, HIGH);
delay(100);
digitalWrite(firman3, LOW);
delay(100);}
{digitalWrite(firman7, HIGH);
delay(100);
digitalWrite(firman7, LOW);
delay(100);}
{digitalWrite(firman8, HIGH);
delay(100);
digitalWrite(firman8, LOW);
delay(100);}
{digitalWrite(firman9,HIGH);
delay(100);
digitalWrite(firman9,LOW);
delay(100);
}
}