
#include <GL/glut.h>
#include <string>
#include <vector>
#include "render.hpp"

using std::string;
using std::move;
using std::vector;

class Gltext {
protected:

	double posx;
	double posy;
	double desfase = 0.05;
	string cadena;
	vector<char>fragmento_cadena;

public:
	Gltext(string, double, double, double);
	Gltext(string, double, double);
	void split();
	void print();
	static void allColor(int, int, int);
	static void changeScala(int); //experimental puede causar fallos greves
};
void allColor(int, int, int);