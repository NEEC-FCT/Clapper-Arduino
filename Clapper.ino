int mic_pin = 10;
int mic_val = HIGH;

int saida = 3;

void setup ()
{
  pinMode(saida, OUTPUT);
  pinMode (mic_pin, INPUT) ;
}
void loop ()
{
  mic_val = digitalRead (mic_pin) ;
  if (mic_val == LOW)
  {
    digitalWrite(saida, !digitalRead(saida));
    delay(250);
  }
}
