// C++ code
//
int button=12 ;
int red=11 ;
int blue=9 ;
int green=8 ;
int x=0 ;
void setup()
{
  pinMode(button,INPUT);
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop()
{
  if (digitalRead(button)==HIGH)
  {
  x++ ;
    if (x==1){
      digitalWrite(red,HIGH);
    }
    else if (x==2){
      digitalWrite(blue,HIGH);
    }
    else if (x==3){
      digitalWrite(green,HIGH);
    }
    else if (x==4){
      digitalWrite(red,LOW);
      digitalWrite(blue,LOW);
      digitalWrite(green,LOW);
      x=0 ;
    }
  delay(250);
  }
}