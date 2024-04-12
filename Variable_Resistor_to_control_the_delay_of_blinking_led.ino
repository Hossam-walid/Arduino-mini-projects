const int led =3;
const int pot =A0;
int reading ;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
}

void loop()
{
  reading=analogRead(pot);
  digitalWrite(led,HIGH);
  delay(reading);
  digitalWrite(led,LOW);
  delay(reading);
}
