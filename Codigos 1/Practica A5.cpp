int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

void setup() {
  
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

}

void loop() {

  //Contador = 0

  digitalWrite(a, 1);

  digitalWrite(b, 1);

  digitalWrite(c, 1);

  digitalWrite(d, 1);

  digitalWrite(e, 1);

  digitalWrite(f, 1);

  digitalWrite(g, 0);
  
  delay(1000);

  //Contador = 1

  digitalWrite(a, 0);

  digitalWrite(b, 1);
  
  digitalWrite(c, 1);

  digitalWrite(d, 0);

  digitalWrite(e, 0);

  digitalWrite(f, 0);

  digitalWrite(g, 0);

  delay(1000);

  //Contador = 2

  digitalWrite(a, 1);

  digitalWrite(b, 1);

  digitalWrite(c, 0);

  digitalWrite(d, 1);

  digitalWrite(e, 1);

  digitalWrite(f, 0);

  digitalWrite(g, 1);

  delay(1000);

  //Contador = 3

  digitalWrite(a, 1);

  digitalWrite(b, 1);

  digitalWrite(c, 1);

  digitalWrite(d, 1);

  digitalWrite(e, 0);

  digitalWrite(f, 0);

  digitalWrite(g, 1);

  delay(1000);

  //Contador = 4

  digitalWrite(a, 0);

  digitalWrite(b, 1);

  digitalWrite(c, 1);

  digitalWrite(d, 0);

  digitalWrite(e, 0);

  digitalWrite(f, 1);

  digitalWrite(g, 1);

  delay(1000);

  //Contador = 5

  digitalWrite(a, 1);

  digitalWrite(b, 0);

  digitalWrite(c, 1);

  digitalWrite(d, 1);

  digitalWrite(e, 0);

  digitalWrite(f, 1);

  digitalWrite(g, 1);

  delay(1000);

  //Contador = 6

  digitalWrite(a, 1);

  digitalWrite(b, 0);

  digitalWrite(c, 1);

  digitalWrite(d, 1);

  digitalWrite(e, 1);

  digitalWrite(f, 1);

  digitalWrite(g, 1);

  delay(1000);

  //Contador = 7

  digitalWrite(a, 1);

  digitalWrite(b, 1);

  digitalWrite(c, 1);

  digitalWrite(d, 0);

  digitalWrite(e, 0);

  digitalWrite(f, 0);

  digitalWrite(g, 0);

  delay(1000);

  //Contador = 8

  digitalWrite(a, 1);

  digitalWrite(b, 1);

  digitalWrite(c, 1);

  digitalWrite(d, 1);

  digitalWrite(e, 1);

  digitalWrite(f, 1);

  digitalWrite(g, 1);

  delay(1000);

  //Contador = 9

  digitalWrite(a, 1);

  digitalWrite(b, 1);

  digitalWrite(c, 1);

  digitalWrite(d, 1);

  digitalWrite(e, 0);

  digitalWrite(f, 1);

  digitalWrite(g, 1);

  delay(1000);

  //COntador = A

  digitalWrite(a, 1);

  digitalWrite(b, 1);

  digitalWrite(c, 1);

  digitalWrite(d, 0);

  digitalWrite(e, 1);

  digitalWrite(f, 1);

  digitalWrite(g, 1);

  delay(1000);

  //Contador = B

  digitalWrite(a, 0);

  digitalWrite(b, 0);

  digitalWrite(c, 1);

  digitalWrite(d, 1);

  digitalWrite(e, 1);

  digitalWrite(f, 1);

  digitalWrite(g, 1);

  delay(1000);

  //Contador = C

  digitalWrite(a, 1);

  digitalWrite(b, 0);

  digitalWrite(c, 0);

  digitalWrite(d, 1);

  digitalWrite(e, 1);

  digitalWrite(f, 1);

  digitalWrite(g, 0);

  delay(1000);

  //Contador = D

  digitalWrite(a, 0);

  digitalWrite(b, 1);

  digitalWrite(c, 1);

  digitalWrite(d, 1);

  digitalWrite(e, 1);

  digitalWrite(f, 0);

  digitalWrite(g, 1);

  delay(1000);

  //Contador = E

  digitalWrite(a, 1);

  digitalWrite(b, 0);

  digitalWrite(c, 0);

  digitalWrite(d, 1);

  digitalWrite(e, 1);

  digitalWrite(f, 1);

  digitalWrite(g, 1);

  delay(1000);

  //Contador = F

  digitalWrite(a, 1);

  digitalWrite(b, 0);

  digitalWrite(c, 0);

  digitalWrite(d, 0);

  digitalWrite(e, 1);

  digitalWrite(f, 1);

  digitalWrite(g, 1);

  delay(3000);

}
