#include <wiringPi.h>
int main (void)
{
  wiringPiSetup () ;
  pinMode (10, OUTPUT) ;

  {
    digitalWrite (10, LOW) ; delay (250) ;
    digitalWrite (10, HIGH) ;
    delay(100);
  }
  return 0 ;
}
