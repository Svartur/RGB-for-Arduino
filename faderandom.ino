void faderandom()
{
  randomred = random(255);
  randomgreen = random(255);
  randomblue = random(255);
  r = 0;
  g = 0;
  b = 0;
  
  for(int i=1; i<255; i++)
  {
    if ( i < randomred )
    {
      r++;
      analogWrite(red, r);
    }
    if ( i < randomgreen )
    {
      g++;
      analogWrite(green, g);
    }
    if ( i < randomblue )
    {
      b++;
      analogWrite(blue, b);
    }
    delay(changeSpeed);
  }
  
  delay(colorSpeed);

  r = randomred;
  g = randomgreen;
  b = randomblue;
  
  for(int i=1; i<255; i++)
  {
   if ( r > 0)
    {
      r--;
      analogWrite(red, r);
    }
    if ( g > 0)
    {
      g--;
      analogWrite(green, g);
    }
    if ( b > 0)
    {
      b--;
      analogWrite(blue, b);
    }
    delay(changeSpeed);
  }
}
