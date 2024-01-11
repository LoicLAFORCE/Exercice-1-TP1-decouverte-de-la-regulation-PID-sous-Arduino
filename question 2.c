//Déclaration des variables

int ledPin=10; // on renomme la broche 10 en "ledPin"

void setup() {
//On défini la broche de la led comme sortie
pinMode(ledPin,OUTPUT);
}

void loop() {
// La fonction analogwrite permet de générer des valeurs intermédiaires entre 0 et 255 (sur une carte Arduino Uno) 
analogWrite(ledPin,255); // La led va s'allumer à une valeur égale à 255 qui correspond à 100% de sa luminosité maximum
delay(1000); // On insère un délai de 1 seconde, qui permet que la led reste allumé durant 1 seconde  
 analogWrite(ledPin,0); // La Led va s'éteindre
 delay(1000); // On insère un délai de 1 seconde, qui permet que la led reste fermé durant 1 seconde  

}
