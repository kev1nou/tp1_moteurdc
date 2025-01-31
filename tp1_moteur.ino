//Pour faire tourner le moteur à 1 tour/sec
//Source de tension à 6,21V

int pinPwm = 3; //Pin 3 pour PWM

void setup() {
  pinMode(pinPwm, OUTPUT); //Mettre en sortie pinPwm
  analogWrite(pinPwm, 50); //Envoyer un duty cycle de 19,6% 
  delay(100);
}

void loop() {
 


}
