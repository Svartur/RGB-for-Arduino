void flash3()
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
}
