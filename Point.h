#pragma once
class Point
{
private:
	double x;//coordonnée en abscisse
	double y;//coordonné en ordonnée

	Point(double x = 0.0, double y = 0.0);//constructeur (avec ou sans param)
	Point(const Point& A);//Constructeur de copie
public:
	static Point* Creator(double x, double y);
	static Point* Copie(const Point& point);

	void print_point() const;//methode pour afficher un point
	void translate(double dx, double dy);//methode pour translater un point
	double distance(const Point& point) const;//methode pour caculer la distance entre le point courant et 'point'
	Point operator=(const Point& p) ;
	~Point();//destructeur de la classe Point
};

