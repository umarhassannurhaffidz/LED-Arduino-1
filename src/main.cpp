#include <Arduino.h>

// Deklarasi pin LED 
// Mendeklarasikan variabel konstanta integer untuk menimpan namor LED 
const int ledMerah = 8;
const int ledKuning = 9;
const int ledHijau = 10;

void setup(){

  //Mengatur pin-pin yang. di hubungkan ke LED output.
  //Hal ini berarti pin-pin tersebut dapat di gunakan untuk mengendalikan LED.
  pinMode(ledMerah, OUTPUT);
  pinMode(ledKuning, OUTPUT);
  pinMode(ledHijau, OUTPUT);
}

void loop() {
  
  //led Merah
  //menyalakan led Merah selama 2 detik, kemudian mematikannya.
  digitalWrite(ledMerah, HIGH);
  delay(2000);
  digitalWrite(ledMerah, LOW);

 //led Kuning 
 //menyalakan led Merah selama 2 detik, kemudian mematikannya.
 digitalWrite(ledKuning, HIGH);
 delay(2000);
 digitalWrite(ledKuning, LOW);

 //led Hijau
 //menyalakan led Hijau selama 2 detik, kemudian mematikannya.
 digitalWrite(ledHijau, OUTPUT);
 delay(2000);
 digitalWrite(ledHijau, LOW);

}
