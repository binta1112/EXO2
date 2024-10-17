#pragma once
#include<iostream>
#include <cmath>
using namespace std;
#include "Cercle.h"
const double  Cercle::PI = 3.14;
/*
*Nom_methode:Cercle
* Parametres:-id type int
*            -center type Point
*            -rayon type double
*           - ou rien 
* Valeur de retour:pas de type de retour (constructeur)
* Description:Constructeur de la classe Cercle qui joue les deux roles : avec ou sans parametres
              Fais l'etape de creation + initialisation aleatoire et l'etape de l'initialisation par valeur en seul
			  grace a l'utilisation des initialize lists,les arguments representent respectivement le centre et le rayon
*/
Cercle::Cercle(int id,Point *center, double rayon) :id(id),center(center), rayon(rayon)
{}
/*
*Nom_methode:Cecle
* Parametres:-circle: reference d'un objet cercle
* Valeur de retour:pas de type
* Description:Constructeur de recopie de la classe Cercle
*/
Cercle::Cercle(const Cercle & circle)
{
	this->center = circle.center;
	this->rayon = circle.rayon;
	this->id = circle.id;
}
/*
*Nom_methode:print_circle
* Parametres:Aucun
* Valeur de retour:Aucun,affichage a l'ecran
* Description: Affiche les infos de l'objet cercle
*/
void Cercle::print_circle() const
{
	cout <<"Rayon"<< this->rayon << endl;
	cout << "Centre " << endl;
	this->center->print_point();

}
/*
*Nom_methode:updateRayon
* Parametres:-new_rayon de type double 
* Valeur de retour:Aucune
* Description:Change la valeur du rayon du cercle
*/
void Cercle::updateRayon(double new_rayon)
{
	rayon = new_rayon;
}

/*
*Nom_methode:surface
* Parametres:Aucun
* Valeur de retour:renvoie une valeur de type double
* Description:Calcule la surface du cercle
*/
double Cercle::surface() const
{
	return PI*pow(this->rayon,2);
}
/*
*Nom_methode:perimeter
* Parametres:Aucun
* Valeur de retour:renvoie une valeur de type double
* Description:Calcule le perimetre du cercle
*/
double Cercle::perimeter() const
{
	return 2*PI*this->rayon;
}

/*
*Nom_methode:Est_dans_cercle
* Parametres:-pt: reference d'un objet Point
* Valeur de retour:renvoie une valeur booleenne
* Description:verifie si un point donné appartient au cercle
*/
bool Cercle::Est_dans_cercle(const Point& pt)const
{
	return pt.distance(*this->center)<=this->rayon;
}
/*
*Nom_methode:~Cercle
* Parametres:Aucun
* Valeur de retour:Aucune
* Description:Destructeur de la class
*/
Cercle::~Cercle()
{
	cout << "je suis dans le destructeur du cercle" << endl;
	
}
