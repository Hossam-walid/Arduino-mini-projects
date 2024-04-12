int Led_pin = 8;
int button_pin = 7;
void setup()
{
  pinMode(Led_pin, OUTPUT);
  pinMode(button_pin, INPUT);
}

void loop()
{
  if (digitalRead(button_pin) == HIGH)
  {	digitalWrite(Led_pin,HIGH);
  }
  else
  {	digitalWrite(Led_pin,LOW);}

}