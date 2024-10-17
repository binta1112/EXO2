#pragma once
#include "Point.h"
class Cercle
{
private:
	const static double PI;
	int id;
	Point *center;
	double rayon;
public:
	Cercle(int id=0,Point *center=nullptr , double rayon = 0);
	Cercle(const Cercle& circle);
	void print_circle() const;//methode pour afficher les infos du cercle en lecture seul
	void updateRayon(double new_rayon);// methode pour modifier le rayon du cercle	
	double surface() const; //methode pour caculer la surface du cercle
	double perimeter() const; //methode pour calculer le perimetre du cercle

	bool Est_dans_cercle(const Point& pt)const;


	~Cercle();//destructeur de la class 
    
};

