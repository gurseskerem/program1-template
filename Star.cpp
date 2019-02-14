
#include "Star.h"
#include <iostream>
Star::Star() {
  Planet * planets = NULL;
    	this-> current_planets=0;
    	//this-> next_id=0;
  }
int Star::addPlanet(){
  
     	//Planet New(rand() % 3000,next_id);
     	//planets[next_id++] = New;
     	
	

	Planet ** new_array[getCurrentNumPlanets()+1];
	for (int i=0; i<current_planets; i++){
		**new_array[i]=planets[i];
	}
	Planet New(rand() % 3000);
	**new_array[getCurrentNumPlanets()+1] = New;
	current_planets = current_planets + 1;
	//delete[] planets;
	Planet  * planets = **new_array;

      
      
   }
Star::~Star(){

}
Planet Star:: getFurthest(){
	int max = 0;
    	int max_i;
    	for (int i = 0;i < current_planets + 1; i++) {
      		if ((planets[i].getDistance()) > max){
		max = planets[i].getDistance();
		max_i = i;
      						}
    			}
    return planets[max_i];
  }

void Star:: printStarInfo(){
    	for (int i = 0;i < current_planets + 1; i++){

      		std::cout <<"Planet "<<i<<" is "<<planets[i].getDistance()<<" miles away at position "<<planets[i].getPos()<<" around the star."<< std::endl;
	
  }
      }
bool Star::removePlanet(int id){
  	int i;
  	int j;
  	Planet ** new_array[current_planets - 1];
  	for ( i = 0;i < current_planets + 1; i++){
    		if(planets[i].getID() == id) {
      	for ( j = i;j < current_planets;j++){
		planets[j] = planets[j+1];
      	}
      	std::copy(planets + (j + 1),
		 planets + (current_planets),
		 planets + j);
	current_planets = current_planets - 1;
      	return true;
    }
  
  } 
      	//delete[] planets;
      	**new_array = planets;
      	return false;
    
  
}
Planet *Star::getPlanet(int id){
  	for (int i;i<current_planets+1;i++) {
    	if ((planets[i].getID()) == id) {
      	Planet * pgp;
      	pgp = &planets[i];
      	return pgp;
    }
  }
      	return NULL;
    
  
} 

void Star::orbit(){
  	int i;
  	for(i = 0;i<current_planets;i++){
    	planets[i].orbit();
      }
}



