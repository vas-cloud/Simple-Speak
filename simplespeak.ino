int f1 = A0;
int f2 = A1;
int f3 = A2;
int f4 = A3;
int f5 = A4;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int f1v = analogRead(f1);
  int f2v = analogRead(f2);
  int f3v = analogRead(f3);
  int f4v = analogRead(f4);
  int f5v = analogRead(f5);

  //Serial.print("fig1 :");
  //Serial.println(f1v);
  //Serial.print("fig2 :");
  //Serial.println(f2v);
  //Serial.print("fig3 :");
  //Serial.println(f3v);
  //Serial.print("fig4 :");
  //Serial.println(f4v);
  //Serial.print("fig5 :");
  //Serial.println(f5v);

  if (f1v<=20 && f2v<=20 && f3v<=20 && f4v<=20 && f5v<=20 ) {
      Serial.println("Help");
    }
  if (f1v<=20 && f2v<=20 && f3v<=20 && f4v<=20 && f5v>=21){
      Serial.println("okay");
    }
  if (f2v<=20 && f3v<=20 && f4v<=20 && f1v>=21 && f5v>=21){
      Serial.println("Hello, My Name Is....");
    }
  if (f3v<=15 && f4v<=15 && f1v>=18 && f2v>=18 && f5v>=18){
      Serial.println("Food, I am Hungery");
    }
  if (f5v<=20 && f1v>=21 && f2v>=21 && f3v>=21 && f4v>=21){
      Serial.println("Water");
    }
  if (f1v<=20 && f2v<=20 && f3v<=20 && f5v<=20 && f4v>=18){
      Serial.println("Washroom");
    }
  else{
    }
delay(1000);
}