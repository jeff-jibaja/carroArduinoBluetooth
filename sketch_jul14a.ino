#include <AFMotor.h>

/*
  CONFIGURACION DEL BLUETOOTH HC-05
*/

const int LED = 13; // LED DE SEÑAL -- SOLO SE USA COMO SEÑAL PARA SABER CUANDO SE TERMINE LA CONFIGURACION DEL BLUETOOTH
const int alimentacion= 12; 

//  char nombreBlue[8]= "Robotica";
//  char velocidad = '4';
//  char claveBlue[5] = "12345";
//  char mode= '0'; // este módulo acepta dos estados esclavo == 0 y maestro == 1


/*
 *  CONFIGURACION DE LOS MOTORES DEL SHIELD L239D  
*/

//AF_DCMotor motor1(1);
//AF_DCMotor motor2(2);
//AF_DCMotor motor3(3);
//AF_DCMotor motor4(4);




void setup() {
  Serial.begin(9600);

  /*
   * Configuracion inicial del bluetooth
   * 
  */

  pinMode(LED,OUTPUT);
  pinMode(alimentacion,OUTPUT);

  digitalWrite(LED,LOW);
  digitalWrite-(alimentacion,HIGH);




/*------------  CONFIGURACION INICIAL DE LOS MOTORES   --------------------*/
  
//  motor1.setSpeed(50);
//  motor2.setSpeed(50);
//  motor3.setSpeed(50);
//  motor4.setSpeed(50);


}

void loop() {

  //FIGURA CUADRADRO
  /*
    direcionIyD("A");
    direcionIyD("D");
    direccionIyD("A");
    direcionIyD("D");
     
    */

   //FIGURA ESCALERA 
  /*
    direcionIyD("A");
    direcionIyD("I");
    direccionIyD("A");
    direcionIyD("D");
     
    */  
}


//void direccionIyD(String dir) {
//  if (dir.equals("D")) {
//    motor3.run(RELEASE);
//    motor3.run(BACKWARD);
//    motor1.run(FORWARD);
//    motor2.run(FORWARD);
//    motor4.run(FORWARD);
//    delay(500);
//  } else if (dir.equals("I")) {
//    motor4.run(RELEASE);
//    motor4.run(BACKWARD);
//    motor1.run(FORWARD);
//    motor2.run(FORWARD);
//    motor3.run(FORWARD);
//    delay(500);
//  } else if (dir.equals("A")) {
//    motor1.run(FORWARD);
//    motor2.run(FORWARD);
//    motor3.run(FORWARD);
//    motor4.run(FORWARD);
//    delay(3000);
//  }
//}
