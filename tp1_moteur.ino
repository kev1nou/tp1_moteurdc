//Pour faire tourner le moteur 5 tours
//Source de tension à 4,95V

int pinPwm = 3; //Pin 3 pour PWM

void setup() {
  pinMode(pinPwm, OUTPUT); //Mettre en sortie pinPwm
  for (int i = 0; i < 5; i++) { //Faire une 5 fois la boucle
    analogWrite(pinPwm, 80); //Envoyer un duty cycle de 31,37%
    delay(250); //Delai 250 ms
  }
  analogWrite(pinPwm,0); // Envoyer un duty cycle de 0%
}

void loop() {
 


}
