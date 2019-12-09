
int Light_level=0;
int Level_Q3=150;
int Level_Q9=750;
int Level_Q7=250;
int Level_QA3=500;

void setup()
{
  Serial.begin(115200);
  pinMode (3,OUTPUT);
  pinMode (9,OUTPUT);
  pinMode (7,OUTPUT);
  pinMode (A3,OUTPUT);
}
void loop()
{
   Light_level=analogRead(A0);
   Serial.println(Light_level);
   delay(100);
   if(Light_level<=Level_Q3)
   digitalWrite(3,LOW);
   if(Light_level<=Level_Q9)
   digitalWrite(9,LOW);
   if(Light_level<=Level_Q7)
   digitalWrite(7,LOW);
   if(Light_level<=Level_QA3)
   digitalWrite(A3,LOW);
   {
   if(Light_level>Level_Q3)
  digitalWrite(3,HIGH);
  if(Light_level>Level_Q9)
  digitalWrite(9,HIGH);
  if(Light_level>Level_Q7)
   digitalWrite(7,HIGH);
  if(Light_level>Level_QA3)
  digitalWrite(A3,HIGH);
   }
}
