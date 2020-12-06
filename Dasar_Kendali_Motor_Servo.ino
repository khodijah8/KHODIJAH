//Proyek #43: Dasar Kendali Motor Servo
#include <Servo.h> 
Servo servo1;//buat objek motor servo 1               
Servo servo2; // buat objek motor servo 2
//maksimum 8 objek servo yang bisa dibuat dari library ini
int sudut= 0; //variabel untuk menyimpan sudut posisi servo 
 
void setup() 
{ 
servo1.attach(9);//memasang obyek motor servo 1   
                         //pada pin 9 arduino 
servo2.attach(7);//memasang obyek motor servo 2 
                        //pada pin 7 arduino
} 
 
 void loop() 
{ 
/*start dari sudut 0 derajat sampai 180 derajat dan set langkah tiap 1 derajat (sudut=sudut+1)*/ 
for(sudut = 0; sudut < 180; sudut += 1) {
 servo1.write(sudut);//derajat posisi motor servo 1 
 servo2.write(sudut);//dan servo2 sesuai nilai 
                            //variabel"sudut"
 delay(15);  // tunda  15ms setiap posisi mencapai satu 
              // langkah (1 derajat)
} 
 
/*start dari sudut 180 derajat ke 0 derajat dan set langkah tiap 1 derajat (sudut=sudut-1)*/ 
for(sudut = 180; sudut>=1; sudut-=1){                                
 servo1.write(sudut); 
 servo2.write(sudut);
 delay(15);
  } 
}
