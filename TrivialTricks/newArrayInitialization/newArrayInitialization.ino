/*
  C++ using new to create object array with initializer

  Rongzhong Li
  Nov 20, 2018
*/

#include "MemoryFree.h"
#define PT(s) Serial.print(s)  //makes life easier
#define PTL(s) Serial.println(s)

void setup() {
  Serial.begin(57600);

  long *p1 = new long[6](7); //cause warning: parenthesized initializer in array new [-fpermissive]
  for (int i = 0; i < 6; i++)
    PTL(p1[i]);

  long *p2 = new long[6] {1, 2, 3, 4, 5, 6};
  for (int i = 0; i < 6; i++)
    PTL(p2[i]);
}
void loop() {}

/*
   output:
   7
  7
  7
  7
  7
  7
  1
  2
  3
  4
  5
  6
*/
