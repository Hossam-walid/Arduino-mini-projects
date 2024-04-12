#define Led_pin 8
#define button_pin 7
#define button_pin2 6
void setup()
{
  pinMode(Led_pin, OUTPUT);
  pinMode(button_pin2, INPUT);
  pinMode(button_pin, INPUT);
}

void loop()
{
  if (digitalRead(button_pin) == HIGH)
  {	digitalWrite(Led_pin,HIGH);
  }
  if (digitalRead(button_pin2) == HIGH)
  {	digitalWrite(Led_pin,LOW);}

}