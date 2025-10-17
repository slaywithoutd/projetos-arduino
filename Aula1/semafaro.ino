void setup()
{
  pinMode(13, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(9, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(9, LOW);
}