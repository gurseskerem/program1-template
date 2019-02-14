#include <iostream>
#include "Planet.h"
Planet::Planet(int distance){
  //this->distance = distance;                                                                                                                          
  pos = (rand() % 360);
  char type[3] = {'h','g','r'};
  int RandIndex = rand() % 3;
  char typep = type[RandIndex];


}


int Planet::orbit (){
  pos = (pos+1);
  if (pos > 359) {
    pos = pos % 360;
  }

  return this-> pos;
}



