struct robot{//variables claves de programacion del robot.
  byte bandera_activa;//bandera que habilita el movimiento del robot.
  int posiciones[6];//registro de posiciones de los 6 ejes del robot.
  int puerto;//puerto de interface.
  float velocidades[6];//registro de velocidades de los ejes del robot.
  float torque[6];//registro de los pares aplicados a los servo motores del robot.
  }robotA,robotB,robotC;
void setup(){
  Serial.begin(115200);//configuracion de comunicacion serial.
  }

void loop(){//inicializado principal.
  Serial.println("Estructuras de datos");
  robotA.bandera_activa=1;//activa robotA.
  robotA.posiciones[1]=90;//Posicion de la segunda articulacion del robotA.
  robotA.puerto=11;//numero de puerto del robotA.
  robotB.puerto=12;//numero de puerto del robotB.
  robotC.puerto=13;//numero de puerto del robotC.
  Serial.print("Bandera activa ");//envıa informacion al monitor serial.
  Serial.println(robotA.bandera_activa);
  Serial.print("Posicion de la segunda articulacion robot A ");
  Serial.println(robotA.posiciones[1]);
  Serial.print("Puertos de los robots ");
  Serial.print(robotA.puerto);Serial.print("\t");
  Serial.print(robotB.puerto);Serial.print("\t");
  Serial.println(robotC.puerto);
  Serial.println("Espere un segundo:se ejecuta una vez mas el sketch.");
  delay(1000);//retardo de un segundo en la transmision serial.
 }