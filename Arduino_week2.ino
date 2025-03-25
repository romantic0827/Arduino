// C++ code

#define TRIG 11 //TRIG핀
#define ECHO 12 //ECHO핀


int stark = 7;
int stark2 = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(stark, OUTPUT);
  pinMode(stark2, OUTPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop()
{
  long duration,distance;
  
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2); //delay(2)
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10); //delay(2)
  digitalWrite(TRIG, LOW);
  
  duration = pulseIn(ECHO, HIGH);
  
  distance = duration * 17 / 1000;
  Serial.println(duration);
  Serial.print("\nDIstance : ");
  Serial.print("distance");
  Serial.println(" Cm");

  
  
  
  
  digitalWrite(stark, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(stark, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  
  digitalWrite(stark2, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(stark2, LOW);
  delay(500); // Wait for 1000 millisecond(s)
}
