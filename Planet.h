#ifndef PLANET_H
#define PLANET_H
#include "Star.h"
class Planet{
 private:
  int id;
  int pos;
  int distance;
  char typep;
 public:
  Planet(){this->id=-1;};
  Planet(int,int);
  Planet planets[];
  Planet *getPlanet(int);
  int orbit();
  long getID() {return id;};
  int getDistance(){return distance;};
  int getPos(){return pos;};
  char getType(){return typep;};
  //you may add any additional methods you may need.                                                                                            
};
#endif 
