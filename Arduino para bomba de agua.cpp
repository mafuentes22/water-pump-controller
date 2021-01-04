// Codigo arduino para bomba de agua
int Led=12;
int botSup = 4;
int botInf = 2;
void setup()
{
  pinMode(Led, OUTPUT);
  pinMode(botSup, INPUT);
  pinMode(botInf, INPUT);
}

void loop()
{
  if(digitalRead(botSup) == HIGH && digitalRead(botInf) == HIGH)
    digitalWrite(Led, LOW);
  else
  	if(digitalRead(botInf) == LOW)
    	digitalWrite(Led, HIGH);
}