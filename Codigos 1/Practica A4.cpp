 int num;

String mensaje1="Ingrese un numero: ";

String mensaje2="Numero Ingresado: ";

int a = 2;

  int b = 3;

  int c = 4;

  int d = 5;

  int e = 6;

  int f = 7;

  int g = 8;

void setup()

{

 

  int dato;

 

 

  pinMode(2, OUTPUT);

  pinMode(3, OUTPUT);

  pinMode(4, OUTPUT);

  pinMode(5, OUTPUT);

  pinMode(6, OUTPUT);

  pinMode(7, OUTPUT);

  pinMode(8, OUTPUT);

  Serial.begin(9600);

 





}





void loop() {

  Serial.println(mensaje1);

  while(Serial.available()==1)

  {

  digitalWrite(2, 0);

  digitalWrite(a, 0);

  digitalWrite(b, 0);

  digitalWrite(c, 0);

  digitalWrite(d, 0);

  digitalWrite(e, 0);

  digitalWrite(f, 0);

  digitalWrite(g,0);


  }

  num=Serial.parseInt();

  Serial.print(mensaje2);

  Serial.println(num);

  switch (num)
  {
    case 0:
   
 
      digitalWrite(2, 1);

      digitalWrite(3, 1);

      digitalWrite(4, 1);

      digitalWrite(5, 1);

      digitalWrite(6, 1);

      digitalWrite(7, 1);

      digitalWrite(8, 0);

      delay(5000);
    break;
   
    case 1:
    digitalWrite(2, 0);

      digitalWrite(3, 0);

      digitalWrite(4, 0);

      digitalWrite(5, 0);

      digitalWrite(6, 1);

      digitalWrite(7, 1);

      digitalWrite(8, 0);

      delay(5000);
    break;
     
    case 2:
    digitalWrite(2, 1);

      digitalWrite(3, 1);

      digitalWrite(4, 0);

      digitalWrite(5, 1);

      digitalWrite(6, 1);

      digitalWrite(7, 0);

      digitalWrite(8, 1);

      delay(5000);
    break;
   
    case 3:
    digitalWrite(2, 1);

      digitalWrite(3, 1);

      digitalWrite(4, 1);

      digitalWrite(5, 1);

      digitalWrite(6, 0);

      digitalWrite(7, 0);

      digitalWrite(8, 1);

      delay(5000);
    break;
   
    case 4:
    digitalWrite(2, 0);

      digitalWrite(3, 1);

      digitalWrite(4, 1);

      digitalWrite(5, 0);

      digitalWrite(6, 0);

      digitalWrite(7, 1);

      digitalWrite(8, 1);

      delay(5000);
    break;
   
    case 5:
    digitalWrite(2, 1);

      digitalWrite(3, 0);

      digitalWrite(4, 1);

      digitalWrite(5, 1);

      digitalWrite(6, 0);

      digitalWrite(7, 1);

      digitalWrite(8, 1);

      delay(5000);
    break;
   
    case 6:
    digitalWrite(2, 1);

      digitalWrite(3, 0);

      digitalWrite(4, 1);

      digitalWrite(5, 1);

      digitalWrite(6, 1);

      digitalWrite(7, 1);

      digitalWrite(8, 1);

      delay(5000);
    break;
   
     case 7:
    digitalWrite(2, 1);

      digitalWrite(3, 1);

      digitalWrite(4, 1);

      digitalWrite(5, 0);

      digitalWrite(6, 0);

      digitalWrite(7, 0);

      digitalWrite(8, 0);

      delay(5000);
    break;
   
    case 8:
    digitalWrite(2, 1);

      digitalWrite(3, 1);

      digitalWrite(4, 1);

      digitalWrite(5, 1);

      digitalWrite(6, 1);

      digitalWrite(7, 1);

      digitalWrite(8, 1);

      delay(5000);
    break;
   
    case 9:
    digitalWrite(2, 1);

      digitalWrite(3, 1);

      digitalWrite(4, 1);

      digitalWrite(5, 1);

      digitalWrite(6, 0);

      digitalWrite(7, 1);

      digitalWrite(8, 1);

      delay(5000);
    break;
    default:
    digitalWrite(2, 1);

      digitalWrite(3, 0);

      digitalWrite(4, 0);

      digitalWrite(5, 1);

      digitalWrite(6, 1);

      digitalWrite(7, 1);

      digitalWrite(8, 1);

      delay(1000);
  }
}