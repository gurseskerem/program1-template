#ifndef STAR_H
#define STAR_H 
#include "Planet.h"
class Star{
	private:
        
        int current_planets;
        //int next_id;
	public:
        
        Star();
	~Star();
        int addPlanet();
	
       
        void orbit();
        void printStarInfo();
	bool removePlanet(int);
        int getCurrentNumPlanets(){return current_planets;};
        
        //you may add any additional methodas you may need.
};

                                                                             

#endif
