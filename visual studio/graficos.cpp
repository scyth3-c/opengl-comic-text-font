#include <GL/glut.h>
#include "graficos.hpp"
#include "gltext.hpp"

Graph::Graph() {

	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(800, 600);
	glutCreateWindow("texto");

	start();

	glutDisplayFunc(display);
}

void Graph::start() {

	glClearColor(0.3f, 0.3f, 0.6f, 1);
	glOrtho(800, 0, 600, 0, -1, 1);
	glPointSize(8);
	glLineWidth(3);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

}


void Graph::display() {
	glClear(GL_COLOR_BUFFER_BIT);
  
	
	allColor(1, 1, 0);

	Gltext saludo("hello a cartoon word", 0, 0);

	allColor(0, 1, 1);

	Gltext hello("hello", 0.5, 0.5);


	allColor(0, 1, 0);
	Gltext giant("> > >", 0.5, -0.8);
  


	glFlush();
	glutSwapBuffers();
}

