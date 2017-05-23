void flash7()
{
  digitalWrite(red, 1);
  delay(colorSpeed);
  digitalWrite(red, 0);
  
  digitalWrite(green, 1);
  delay(colorSpeed);
  digitalWrite(green, 0);
  
  digitalWrite(blue, 1);
  delay(colorSpeed);
  digitalWrite(blue, 0);

  digitalWrite(red, 1);
  digitalWrite(green, 1);
  delay(colorSpeed);
  digitalWrite(red, 0);
  digitalWrite(green, 1);

  digitalWrite(red, 1);
  digitalWrite(blue, 1);
  delay(colorSpeed);
  digitalWrite(red, 0);
  digitalWrite(blue, 1);

  digitalWrite(green, 1);
  digitalWrite(blue, 1);
  delay(colorSpeed);
  digitalWrite(green, 0);
  digitalWrite(blue, 1);

  digitalWrite(green, 1);
  digitalWrite(blue, 1);
  delay(colorSpeed);
  digitalWrite(green, 0);
  digitalWrite(blue, 1);

  digitalWrite(red, 1);
  digitalWrite(green, 1);
  digitalWrite(blue, 1);
  delay(colorSpeed);
  digitalWrite(red, 0);
  digitalWrite(green, 1);
  digitalWrite(blue, 1);
}
