#include "gltext.hpp"
#include <string>
#include <vector>
#include "render.hpp"


using std::move;
using std::string;
using std::vector;

Gltext::Gltext(string cadena, double posx, double posy) : posx(move(this->posx)), posy(move(this->posy)), cadena(move(this->cadena)) { split(); asignar(); tester(); }

void Gltext::split() {
	int size = cadena.length();
	for (int i = 0; i < size; i++) {
		fragmento_cadena.push_back(cadena[i]);
	}
}
void Gltext::print()
{
	
}

void Gltext::asignar() {
	for (auto visor : map_cadena) {
		switch (visor)
		{
		case 'a':
			map_cadena.push_back(1);
			break;
		case 'b':
			map_cadena.push_back(2);
			break;
		case 'c':
			map_cadena.push_back(3);
			break;
		case 'd':
			map_cadena.push_back(4);
			break;
		case 'e':
			map_cadena.push_back(5);
			break;
		case 'f':
			map_cadena.push_back(6);
			break;
		case 'g':
			map_cadena.push_back(7);
			break;
		case 'h':
			map_cadena.push_back(8);
			break;
		case 'i':
			map_cadena.push_back(9);
			break;
		case 'j':
			map_cadena.push_back(10);
			break;
		case 'k':
			map_cadena.push_back(11);
			break;
		case 'l':
			map_cadena.push_back(12);
			break;
		case 'm':
			map_cadena.push_back(13);
			break;
		case 'n':
			map_cadena.push_back(14);
			break;
		case 'o':
			map_cadena.push_back(15);
			break;
		case 'p':
			map_cadena.push_back(16);
			break;
		case 'q':
			map_cadena.push_back(17);
			break;
		case 'r':
			map_cadena.push_back(18);
			break;
		case 's':
			map_cadena.push_back(19);
			break;
		case 't':
			map_cadena.push_back(20);
			break;
		case 'u':
			map_cadena.push_back(21);
			break;
		case 'v':
			map_cadena.push_back(22);
			break;
		case 'w':
			map_cadena.push_back(23);
			break;
		case 'x':
			map_cadena.push_back(24);
			break;
		case 'y':
			map_cadena.push_back(25);
			break;
		case 'z':
			map_cadena.push_back(26);
			break;
		default:
			map_cadena.push_back(0);
			break;

		}
	}
}

void Gltext::tester() {

	if (map_cadena[0] == 1) {
		Render_la a(0.5, 0.5);
	}

}