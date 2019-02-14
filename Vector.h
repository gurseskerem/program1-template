#ifndef VECTOR_H
#define VECTOR_H
#include "Planet.h"
#include "Star.h"

class Vector {
	private:
	//Planet [] planets = new Planet [1 + current_planets]; 
	vector<Planet>(
	public:
	Vector ();
	~Vector();
	void insert (int index, Planet * p);
	Planet * read (int index);
	bool remove (int index);
	unsigned size ();











};






#endif
