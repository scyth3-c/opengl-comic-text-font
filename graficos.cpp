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
  
	
	/*
	 allColor(1,1,0);

	Gltext yes("yes", 0, 0.4, 0.04);
	Gltext no("no", 0, 0.6);
	Gltext hello("hello", 0, -0.5,0.035);

	allColor(0, 1, 1);

	Gltext scythe("sycthe", -0.5, 0);
	Gltext al("alo", -0.5, -0.5);
	
	*/
 
	/*
	allColor(1, 1, 0);
	Gltext arrow("pone huevos",0,0);
	Gltext huesos("huesos", -0.5, 0);
	Gltext hola("hello", 0.5,0.4);
	
	allColor(0, 1, 1);

	Gltext yes("yes", -0.5, -0.4);
	Gltext number("number", 0.5, -0.5);
	Gltext rand("yerba hermana", -0.8,-0.8);
	 */

	
	smallText(false);
	Gltext a("abcd", 0, 0);
	Gltext b("hola",-0.8,0);
	Gltext c("abiar",0.5,0.5);




	glFlush();
	glutSwapBuffers();
}

