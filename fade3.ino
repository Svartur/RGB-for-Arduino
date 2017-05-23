void fade3()
{
  for(int i=1; i<255; i++)
  {
    analogWrite(red, i); 
    delay(changeSpeed);
  }
  delay(colorSpeed);
  for(int i=255; i>-1; i--)
  {
    analogWrite(red, i);
    delay(changeSpeed);
  } 
  
  for(int i=1; i<255; i++)
  {
    analogWrite(green, i); 
    delay(changeSpeed);
  } 
  delay(colorSpeed);
  for(int i=255; i>-1; i--)
  {
    analogWrite(green, i);
    delay(changeSpeed); 
  }
  
  for(int i=1; i<255; i++)
  {
    analogWrite(blue, i); 
    delay(changeSpeed);
  } 
  delay(colorSpeed);
  for(int i=255; i>-1; i--)
  {
    analogWrite(blue, i);
    delay(changeSpeed); 
  }
}
