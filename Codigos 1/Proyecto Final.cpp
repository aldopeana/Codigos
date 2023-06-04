int numeros[2];
int i;
int operacion=0;
int resultado=0;
int cifra1;
int cifra2;

// Mensajes

String mensaje1 = "Ingrese un numero: ";

String mensaje2 = "Numero Ingresado: ";

String mensaje4 = "Primera cifra es: ";

String mensaje5 = "Segunda cifra es: ";

String mensaje6 = "ERROR";

String operaciones = "Que operacion desea realizar: \n 1) Suma \t 2) Resta \t 3) Multiplicacion \t 4) Division";\

// Display

int a = 2;

int b = 3;

int c = 4;

int d = 5;

int e = 6;

int f = 7;

int g = 8;

void setup() {

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

  // Lectura de los 2 numeros

  for (i = 0; i < 2; i++) {
    Serial.println(mensaje1);
    while (Serial.available() == 0) {

      digitalWrite(a, 0);

      digitalWrite(b, 0);

      digitalWrite(c, 0);

      digitalWrite(d, 0);

      digitalWrite(e, 0);

      digitalWrite(f, 0);

      digitalWrite(g, 0);

    }
    numeros[i] = Serial.parseInt();
    Serial.print(mensaje2);
    Serial.println(numeros[i]);
  }

  // Menu de seleccion de operaciones

  Serial.println(operaciones);
  while (Serial.available() == 0) {

    digitalWrite(a, 0);

    digitalWrite(b, 0);

    digitalWrite(c, 0);

    digitalWrite(d, 0);

    digitalWrite(e, 0);

    digitalWrite(f, 0);
    
    digitalWrite(g, 0);
    
}
  operacion = Serial.parseInt();

  switch (operacion) {
    case 1:
      resultado = numeros[0] + numeros[1];
    break;
    case 2:
      resultado = numeros[0] - numeros[1];
    break;
    case 3:
      resultado = numeros[0] * numeros[1];
    break;
    case 4:
      resultado = numeros[0] / numeros[1];
    break;
    default:
      Serial.println("Operacion no valida");
    break;
  }
  
  if(resultado > 0 && resultado < 100){

    // Separacion de cifras

    cifra1 = resultado/10;
    cifra2 = resultado%10;

    // Iluminar los segmentos correspondientes

    switch (cifra1)
    {
    case 0:
      digitalWrite(a, 1);

      digitalWrite(b, 1);

      digitalWrite(c, 1);

      digitalWrite(d, 1);

      digitalWrite(e, 1);

      digitalWrite(f, 1);

      digitalWrite(g, 0);

      delay(2000);
    break;
    case 1:
      digitalWrite(a, 0);

      digitalWrite(b, 1);

      digitalWrite(c, 1);

      digitalWrite(d, 0);

      digitalWrite(e, 0);

      digitalWrite(f, 0);

      digitalWrite(g, 0);

      delay(2000);
    break;
    case 2:
      digitalWrite(a, 1);

      digitalWrite(b, 1);

      digitalWrite(c, 0);

      digitalWrite(d, 1);

      digitalWrite(e, 1);

      digitalWrite(f, 0);

      digitalWrite(g, 1);

      delay(2000);
    break;
    case 3:
      digitalWrite(a, 1);

      digitalWrite(b, 1);

      digitalWrite(c, 1);

      digitalWrite(d, 1);

      digitalWrite(e, 0);

      digitalWrite(f, 0);

      digitalWrite(g, 1);

      delay(2000);
    break;
    case 4:
      digitalWrite(a, 0);

      digitalWrite(b, 1);

      digitalWrite(c, 1);

      digitalWrite(d, 0);

      digitalWrite(e, 0);

      digitalWrite(f, 1);

      digitalWrite(g, 1);

      delay(2000);
    break;
    case 5:
      digitalWrite(a, 1);

      digitalWrite(b, 0);

      digitalWrite(c, 1);

      digitalWrite(d, 1);

      digitalWrite(e, 0);

      digitalWrite(f, 1);

      digitalWrite(g, 1);

      delay(2000);
    break;
    case 6:
      digitalWrite(a, 1);

      digitalWrite(b, 0);

      digitalWrite(c, 1);

      digitalWrite(d, 1);

      digitalWrite(e, 1);

      digitalWrite(f, 1);

      digitalWrite(g, 1);

      delay(2000);
    break;
    case 7:
      digitalWrite(a, 1);

      digitalWrite(b, 1);

      digitalWrite(c, 1);

      digitalWrite(d, 0);

      digitalWrite(e, 0);

      digitalWrite(f, 0);

      digitalWrite(g, 0);

      delay(2000);
    break;
    case 8:
      digitalWrite(a, 1);

      digitalWrite(b, 1);

      digitalWrite(c, 1);

      digitalWrite(d, 1);

      digitalWrite(e, 1);

      digitalWrite(f, 1);

      digitalWrite(g, 1);

      delay(2000);
    break;
    case 9:
      digitalWrite(a, 1);

      digitalWrite(b, 1);

      digitalWrite(c, 1);

      digitalWrite(d, 1);

      digitalWrite(e, 0);

      digitalWrite(f, 1);

      digitalWrite(g, 1);

      delay(2000);
    break;
    }

    // segunda cilfra

    switch (cifra2)
    {
    case 0:
      digitalWrite(a, 1);

      digitalWrite(b, 1);

      digitalWrite(c, 1);

      digitalWrite(d, 1);

      digitalWrite(e, 1);

      digitalWrite(f, 1);

      digitalWrite(g, 0);

      delay(2000);
    break;
    case 1:
      digitalWrite(a, 0);

      digitalWrite(b, 1);

      digitalWrite(c, 1);

      digitalWrite(d, 0);

      digitalWrite(e, 0);

      digitalWrite(f, 0);

      digitalWrite(g, 0);

      delay(2000);
    break;
    case 2:
      digitalWrite(a, 1);

      digitalWrite(b, 1);

      digitalWrite(c, 0);

      digitalWrite(d, 1);

      digitalWrite(e, 1);

      digitalWrite(f, 0);

      digitalWrite(g, 1);

      delay(2000);
    break;
    case 3:
      digitalWrite(a, 1);

      digitalWrite(b, 1);

      digitalWrite(c, 1);

      digitalWrite(d, 1);

      digitalWrite(e, 0);

      digitalWrite(f, 0);

      digitalWrite(g, 1);

      delay(2000);
    break;
    case 4:
      digitalWrite(a, 0);

      digitalWrite(b, 1);

      digitalWrite(c, 1);

      digitalWrite(d, 0);

      digitalWrite(e, 0);

      digitalWrite(f, 1);

      digitalWrite(g, 1);

      delay(2000);
    break;
    case 5:
      digitalWrite(a, 1);

      digitalWrite(b, 0);

      digitalWrite(c, 1);

      digitalWrite(d, 1);

      digitalWrite(e, 0);

      digitalWrite(f, 1);

      digitalWrite(g, 1);

      delay(2000);
    break;
    case 6:
      digitalWrite(a, 1);

      digitalWrite(b, 0);

      digitalWrite(c, 1);

      digitalWrite(d, 1);

      digitalWrite(e, 1);

      digitalWrite(f, 1);

      digitalWrite(g, 1);

      delay(2000);
    break;
    case 7:
      digitalWrite(a, 1);

      digitalWrite(b, 1);

      digitalWrite(c, 1);

      digitalWrite(d, 0);

      digitalWrite(e, 0);

      digitalWrite(f, 0);

      digitalWrite(g, 0);

      delay(2000);
    break;
    case 8:
      digitalWrite(a, 1);

      digitalWrite(b, 1);

      digitalWrite(c, 1);

      digitalWrite(d, 1);

      digitalWrite(e, 1);

      digitalWrite(f, 1);

      digitalWrite(g, 1);

      delay(2000);
    break;
    case 9:
      digitalWrite(a, 1);

      digitalWrite(b, 1);

      digitalWrite(c, 1);

      digitalWrite(d, 1);

      digitalWrite(e, 0);

      digitalWrite(f, 1);

      digitalWrite(g, 1);

      delay(2000);
    break;
    }

  }
  else{

    // En caso de ser invalido
    // Mostrar E de Error

    Serial.println(mensaje6);

    digitalWrite(a, 1);

    digitalWrite(b, 0);

    digitalWrite(c, 0);

    digitalWrite(d, 1);

    digitalWrite(e, 1);

    digitalWrite(f, 1);

    digitalWrite(g, 1);

    delay(5000);
  }
}
