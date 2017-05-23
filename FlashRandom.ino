void flashrandom()
{
  r = random(255);
  g = random(255);
  b = random(255);
  analogWrite(red, r );
  analogWrite(green, g );
  analogWrite(blue, b );
  delay(colorSpeed);
  digitalWrite(red, 0);
  digitalWrite(green, 0);
  digitalWrite(blue, 0);
}

