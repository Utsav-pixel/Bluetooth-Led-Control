//This code is prepared for bluetooth led control.

String text;
void setup() {
 pinMode(2,OUTPUT);
 Serial.begin(9600);

}

void loop() {
  while(Serial.available())
  {delay(10);
  char c=Serial.read();
  text=text+c;}
if(text.length()>0)
{Serial.println(text);
if(text=="on")
{digitalWrite(2,1);}
if(text=="off")
{digitalWrite(2,0);}

}

text="";


}
