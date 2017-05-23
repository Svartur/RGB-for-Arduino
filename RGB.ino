int red = 11;
int green = 10;
int blue = 9;
int randomred;
int randomgreen;
int randomblue;
int r;
int g;
int b;
int changeSpeed = 40;
int colorSpeed = 10000;
int timebetween = 5000;
int i;
int l;

void setup() 
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop()
{
  for( l=1; l<random(10); l++)
  {
    flashrandom();   
  }
  delay(timebetween);
  for( l=1; l<random(10); l++)
  {
    fade3(); 
  }
  delay(timebetween);
  for( l=1; l<random(10); l++)
  {
    flash3();  
  }
  delay(timebetween);
  for( l=1; l<random(10); l++)
  {
    fade7(); 
  }
  delay(timebetween);
  for( l=1; l<random(10); l++)
  {
    flash7(); 
  }
  delay(timebetween);
  for( l=1; l<random(10); l++)
  {
    faderandom();  
  }
  delay(timebetween);
}
