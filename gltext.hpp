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
	string cadena;
	vector<char>fragmento_cadena;
	vector<int>map_cadena;

public:
	Gltext(string, double, double);
	void split();
	void asignar();
	void print();
	void tester();

};