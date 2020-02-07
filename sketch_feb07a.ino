int pm = A0;
int fs = A7;
int led = A2;
long v;
int fin;
int fv;
String sr = " % ";
String pot = "Val pot ";
String fot = "Val fot ";
const int threshold = 500;
void setup()
{
pinMode(pm, INPUT); 
pinMode(fs, INPUT);
pinMode(led, OUTPUT);
Serial.begin(9600);
} 
void loop() {

   v = analogRead(pm);
   
   int input = analogRead(fs);
   if (input < v) {
      digitalWrite(led, HIGH);
   }
   else {
      digitalWrite(led, LOW);
   }
   //input 1000 - 0, v = 1023 - 0
   fin = input/10;
   fv = v*100 / 1023;
   //Serial.println(input);
   Serial.println(pot + fv + sr );
   Serial.println(fot + fin + sr );
}
