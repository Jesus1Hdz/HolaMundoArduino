//HOLA MUNDO EN ARDUINO CON UN LED
//La función setup sólo se ejecuta al arrancar u encender la placa Arduino
void setup() {
  //Preparamos el pin 13 como sálida
  pinMode(13, OUTPUT);
}

//La función LOOP es un bucle: al llegar al final del conjunto...
//...volverá al principio, ejecutandose varias veces por segundo
void loop() {
  digitalWrite(13, HIGH); //Ponemos 5V en el pin 13
  delay(1000);            //ESperamos 1 segundo=1000 ms
  digitalWrite(13, LOW);  //POnemos 0V en el pin 13
  delay(1000);            //Esperamos un segundo
}

//El led parpadeará cada segundo

