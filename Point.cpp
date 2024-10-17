#include<iostream>
using namespace std;
#include "Point.h"
#include<cmath>
/*
*Nom_methode:Point
* Parametres:
*            -x type double
*           - y  type double
* Valeur de retour:pas de type de retour (constructeur)
* Description:Constructeur de la classe Point qui joue les deux roles : avec ou sans parametres
			  Fais l'etape de creation + initialisation aleatoire et l'etape de l'initialisation par valeur en seul
			  grace a l'utilisation des initialize lists,les arguments representent respectivement le coord en abscisse (x) et
			  en ordonné (y)
*/
Point::Point(double x, double y):x(x),y(y)
{}
/*Nom_methode:Point
* Parametres:-A: reference d'un objet Point
* Valeur de retour:pas de type
* Description:Constructeur de recopie de la classe 
*/
Point::Point(const Point &A)
{
	cout << "constructeur de recopie" << endl;
	this->x = A.x;
	this->y = A.y;
}
/*Nom_methode:Creator
* Parametres:-x type double
*           - y  type double
* Valeur de retour:pointeur sur un objet point
* Description:methode responsable de la creation d'une instance point en accedant au constructeur
*             qui est private
*/
Point* Point::Creator(double x, double y)
{
	return new Point(x,y);
}
/*Nom_methode:Copie
* Parametres:-point: reference d'un objet Point
* Valeur de retour:pointeur sur un objet point
* Description:methode responsable de la creation d'une instance point en accedant au constructeur
*             de recopie qui est private
*/
Point* Point::Copie(const Point& point)
{
	Point *p =new Point(point);
	return p;
}
/*
*Nom_methode:print_point
* Parametres:Aucun
* Valeur de retour:Aucun,affichage a l'ecran
* Description: Affiche les infos de l'objet 
*/
void Point::print_point() const
{
	cout << "("<<this->x<<" " << this->y << ")" << endl;
}
/*
*Nom_methode:translate
* Parametres:-dx type double
*            -dy type double
* Valeur de retour:Aucun
* Description: Effectue la translation d'un point
*/
void Point::translate(double dx, double dy)
{
	x += dx;
	y += dy;
}
/*
*Nom_methode:distance
* Parametres:reference d'un point
* Valeur de retour:une valeur de type double
* Description: renvoie la distance entre le point courant et celui passé comme argument
*/
double Point::distance(const Point& point) const
{
	return sqrt(pow(point.x-x,2)+pow(point.y-y,2)) ;
}
/*
*Nom_methode:operator=
* Parametres:Aucun
* Valeur de retour:un objet point
* Description: Retourne la reference de l'objet courant
*/
Point Point::operator=(const Point& p)
{
	cout << "affectation" << endl;
	return p;
}
/*
*Nom_methode:~Point
* Parametres:Aucun
* Valeur de retour:Aucune pas de type
* Description: destructeur de la calss
*/
Point::~Point()
{
	cout << "destructeur de point" << endl;
}
