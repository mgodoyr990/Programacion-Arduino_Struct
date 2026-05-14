struct cubo{
  int lado, ancho,largo;
}Cubo1,Cubo2,Cubo3;
void setup() {
  Serial.begin(115200);
}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Calculo de Volumen Cubo1 ");
  Cubo1.ancho=2;
  Cubo1.lado=3;
  Cubo1.largo=5;
  int Volumen_Cubo1=Cubo1.ancho*Cubo1.lado*Cubo1.largo;
  Serial.println(Volumen_Cubo1);
  delay(500);
  Serial.print("Calculo de Volumen Cubo2 ");
  Cubo2={5,2,6};
  int Volumen_Cubo2=Cubo2.lado*Cubo2.ancho*Cubo2.largo;
  Serial.println(Volumen_Cubo2);
  Cubo3={2,7,4};
  Serial.print("Calculo de Volumen Cubo3 ");
  int Volumen_Cubo3=Cubo3.lado*Cubo3.ancho*Cubo3.largo;
  Serial.println(Volumen_Cubo3);
  Serial.println("Ejemplo Uso de Struct");
  delay(1000);
}
