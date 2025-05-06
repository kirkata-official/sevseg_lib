/* The library made by Kirka
   All rights reserved
*/

#include "sevseg_lib.h"

void setup()
{
  // setup for indicator pins
  /* Here is some explanation: 
         gnd
        gf ab
        |||||
        AAAAA
        F   B
        GGGGG
        E   C
        DDDDD
        |||||
        ed c
         gnd DP (dot)

In the setup, type the pins you connected your seven segment indicator:

sevsegSetup(G, F, A, B, E, D, C, DP);
*/
  sevsegSetup(2,3,4,5,6,7,8,9);
}

void loop() 
{
  setDigit(0);
  delay(1000);
  setDigit(1);
  delay(1000);
  setDigit(2);
  delay(1000);
  setDigit(3);
  delay(1000);
  setDigit(4);
  delay(1000);
  setDigit(5);
  delay(1000);
  setDigit(6);
  delay(1000);
  setDigit(7);
  delay(1000);
  setDigit(8);
  delay(1000);
  setDigit(9);
  delay(1000);
}
