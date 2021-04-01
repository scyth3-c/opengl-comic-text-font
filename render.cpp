#include <gl/glut.h>
#include "render.hpp"


Render_la::Render_la(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 1; }
Render_lb::Render_lb(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 2; }
Render_lc::Render_lc(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 3; }
Render_ld::Render_ld(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 4; }
Render_le::Render_le(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 5; }
Render_lf::Render_lf(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 6; }
Render_lg::Render_lg(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 7; }
Render_lh::Render_lh(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 8; }
Render_li::Render_li(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 9; }
Render_lj::Render_lj(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 10; }
Render_lk::Render_lk(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 11; }
Render_ll::Render_ll(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 12; }
Render_lm::Render_lm(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 13; }
Render_ln::Render_ln(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 14; }
Render_lo::Render_lo(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 15; }
Render_lp::Render_lp(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 16; }
Render_lq::Render_lq(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 17; }
Render_lr::Render_lr(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 18; }
Render_ls::Render_ls(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 19; }
Render_lt::Render_lt(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 20; }
Render_lu::Render_lu(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 21; }
Render_lv::Render_lv(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 22; }
Render_lw::Render_lw(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 23; }
Render_lx::Render_lx(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 24; }
Render_ly::Render_ly(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 25; }
Render_lz::Render_lz(double _posx, double _posy) : Generic_Render(posx, posy) { print(); Identificador_letra = 26; }


void Render_la::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.01, 0);
	glScaled(0.2, 0.2, 0);
	glColor3d(0, 1, 0);
	glBegin(GL_LINES);
	glVertex2f(0.002f, 0.002f);
	glVertex2f(-0.15f, 0.002f);
	glVertex2f(-0.15f, 0.002f);
	glVertex2f(-0.15f, -0.15f);
	glVertex2f(0.002f, 0.002f);
	glVertex2f(0.0f, -0.15f);
	glVertex2f(-0.03f, -0.1f);
	glVertex2f(-0.13f, -0.1f);
	glEnd();
	glPopMatrix();
}

void Render_lb::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.02, 0);
	glRotated(-90, 0, 0, 1);
	glScaled(0.2, 0.15, 0);
	glColor3d(0, 1, 0);
	glBegin(GL_LINES);
	glVertex2f(0.002f, 0.002f);
	glVertex2f(-0.13f, 0.002f);
	glVertex2f(-0.13f, 0.002f);
	glVertex2f(-0.13f, -0.13f);
	glVertex2f(0.002f, 0.002f);
	glVertex2f(0.0f, -0.13f);
	glVertex2f(-0.03f, -0.1f);
	glVertex2f(-0.12f, -0.1f);
	glVertex2f(0.002f, 0.002f);
	glVertex2f(0.13f, 0.002f);
	glVertex2f(0.13f, 0.002f);
	glVertex2f(0.13f, -0.13f);
	glVertex2f(0.03f, -0.1f);
	glVertex2f(0.13f, -0.1f);
	glEnd();
	glPopMatrix();
}

void Render_lc::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.001, 0);
	glScaled(0.2, 0.2, 0);
	glColor3d(0, 1, 0);
	glBegin(GL_LINES);

	glVertex2f(0.002f, 0.002f);
	glVertex2f(-0.15f, 0.002f);

	glVertex2f(-0.15f, 0.002f);
	glVertex2f(-0.15f, -0.17f);

	glVertex2f(-0.15f, -0.17f);
	glVertex2f(0.002f, -0.17f);

	glEnd();
	glPopMatrix();
}

void Render_ld::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.01, 0);
	glScaled(0.3, 0.3, 0);
	glColor3d(0, 1, 0);

	glBegin(GL_LINES);

	glVertex2f(0.00f, 0.13f);
	glVertex2f(0.00f, -0.10f);

	glVertex2f(0.00f, 0.00f);
	glVertex2f(-0.08f, 0.00f);

	glVertex2f(-0.08f, 0.00f);
	glVertex2f(-0.08f, -0.10f);

	glVertex2f(-0.08f, -0.10f);
	glVertex2f(0.00f, -0.10f);


	glEnd();
	glPopMatrix();
}

void Render_le::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.02, 0);
	glScaled(0.2, 0.2, 0);
	glColor3d(0, 1, 0);

	glBegin(GL_LINES);

	glVertex2d(0.00f, 0.10f);
	glVertex2d(0.00f, -0.10f);

	glVertex2d(0.00f, 0.00f);
	glVertex2d(0.07f, 0.00f);

	glVertex2d(0.00f, 0.10f);
	glVertex2d(0.09f, 0.10);

	glVertex2d(0.00f, -0.10f);
	glVertex2d(0.09f, -0.10f);

	glEnd();
	glPopMatrix();

}
void Render_lf::print()
{
	glPushMatrix();
	glTranslated(posx, posy - 0.02, 0);
	glScaled(0.2, 0.2, 0);
	glColor3d(0, 1, 0);

	glBegin(GL_LINES);

	glVertex2d(0.00f, 0.10f);
	glVertex2d(0.00f, -0.10f);

	glVertex2d(-0.05f, 0.00f);
	glVertex2d(0.07f, 0.00f);

	glVertex2d(0.00f, 0.10f);
	glVertex2d(0.09f, 0.10);



	glEnd();
	glPopMatrix();
}

void Render_lg::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.022, 0);
	glScaled(0.4, 0.52, 0);
	glColor3d(0, 1, 0);

	glBegin(GL_LINES);


	glVertex2f(0.00f, 0.04f);
	glVertex2f(-0.04f, 0.04f);

	glVertex2f(-0.04f, 0.04f);
	glVertex2f(-0.04f, 0.00f);

	glVertex2f(-0.03f, 0.00f);
	glVertex2f(0.00f, 0.00f);

	glVertex2f(0.00f, 0.04f);
	glVertex2f(0.00f, -0.03f);

	glVertex2f(0.00f, -0.03f);
	glVertex2f(-0.02f, -0.04f);

	glVertex2f(-0.02f, -0.04f);
	glVertex2f(-0.04f, -0.06f);

	glVertex2f(-0.04f, -0.06f);
	glVertex2f(-0.052f, -0.02f);

	glEnd();
	glPopMatrix();
}
void Render_lh::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.02, 0);
	glScaled(0.35, 0.45, 0);
	glColor3d(0, 1, 0);

	glBegin(GL_LINES);


	glVertex2f(0.04f, 0.05f);
	glVertex2f(0.04f, -0.05f);

	glVertex2f(-0.04f, -0.05f);
	glVertex2f(-0.04f, 0.05f);

	glVertex2f(-0.04f, 0.0f);
	glVertex2f(0.04f, 0.0f);

	glEnd();
	glPopMatrix();
}

void Render_li::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.022, 0);
	glScaled(0.3, 0.35, 0);
	glColor3d(0, 1, 0);

	glBegin(GL_LINES);

	glVertex2f(0.00f, 0.05f);
	glVertex2f(0.00f, -0.05f);

	glVertex2f(0.00f, 0.07f);
	glVertex2f(0.00f, 0.09f);

	glEnd();
	glPopMatrix();
}

void Render_lj::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.025, 0);
	glScaled(0.38, 0.5, 0);
	glColor3d(0, 1, 0);

	glBegin(GL_LINES);

	glVertex2f(0.00f, 0.05f);
	glVertex2f(-0.035f, 0.05f);

	glVertex2f(0.00f, 0.05f);
	glVertex2f(0.00f, -0.04f);

	glVertex2f(0.00f, -0.04f);
	glVertex2f(-0.045f, -0.03f);

	glEnd();
	glPopMatrix();
}
void Render_lk::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.02, 0);
	glScaled(0.5, 0.6, 0);
	glColor3d(0, 1, 0);


	glBegin(GL_LINES);

	glVertex2f(0.00f, 0.04f);
	glVertex2f(0.00f, -0.04f);

	glVertex2f(0.00f, 0.00f);
	glVertex2f(0.04f, 0.04f);

	glVertex2f(0.00f, 0.00f);
	glVertex2f(0.04f, -0.04f);

	glEnd();

	glPopMatrix();
}

void Render_ll::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.035, 0);
	glScaled(0.6, 0.9, 0);
	glColor3d(0, 1, 0);

	glBegin(GL_LINES);

	glVertex2f(0.00f, 0.05f);
	glVertex2f(0.00f, 0.00f);

	glVertex2f(0.02f, 0.00f);
	glVertex2f(0.00f, 0.00f);

	glEnd();

	glPopMatrix();

}

void Render_lm::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.038, 0);
	glScaled(0.4, 0.67, 0);
	glColor3d(0, 1, 0);


	glBegin(GL_LINES);

	glVertex2f(-0.05f, 0.00f);
	glVertex2f(-0.05f, 0.05f);

	glVertex2f(0.05f, 0.00f);
	glVertex2f(0.05f, 0.05f);

	glVertex2f(0.05f, 0.05f);
	glVertex2f(0.00f, 0.01f);

	glVertex2f(-0.05f, 0.05f);
	glVertex2f(-0.00f, 0.01f);

	glEnd();

	glPopMatrix();
}

void Render_ln::print() {
	glPushMatrix();
	glTranslated(posx + 0.002, posy - 0.038, 0);
	glScaled(0.6, 0.65, 0);
	glColor3d(0, 1, 0);

	glBegin(GL_LINES);

	glVertex2f(-0.05f, 0.00f);
	glVertex2f(-0.05f, 0.05f);

	glVertex2f(-0.05f, 0.05f);
	glVertex2f(0.00f, 0.00f);

	glVertex2f(0.00f, 0.05f);
	glVertex2f(0.00f, 0.00f);


	glEnd();

	glPopMatrix();
}


void Render_lo::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.035, 0);
	glScaled(0.7, 0.8, 0);
	glColor3d(0, 1, 0);


	glBegin(GL_LINES);


	glVertex2f(-0.02f, 0.00f);
	glVertex2f(0.02f, 0.00f);

	glVertex2f(-0.02f, 0.00f);
	glVertex2f(-0.02f, 0.04f);

	glVertex2f(0.02f, 0.00f);
	glVertex2f(0.02f, 0.04f);

	glVertex2f(-0.02f, 0.04f);
	glVertex2f(0.02f, 0.04f);


	glEnd();

	glPopMatrix();
}
void Render_lp::print() {
	glPushMatrix();
	glTranslated(posx - 0.010f, posy - 0.05, 0);
	glScaled(0.9, 0.9, 0);
	glColor3d(0, 1, 0);


	glBegin(GL_LINES);

	glVertex2f(0.00f, 0.00f);
	glVertex2f(0.00f, 0.05f);

	glVertex2f(0.00f, 0.05f);
	glVertex2f(0.03f, 0.05f);

	glVertex2f(0.03f, 0.05f);
	glVertex2f(0.03f, 0.025f);

	glVertex2f(0.03f, 0.025f);
	glVertex2f(0.00f, 0.024f);


	glEnd();

	glPopMatrix();
}

void Render_lq::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.05, 0);
	glScaled(0.9, 0.9, 0);
	glColor3d(0, 1, 0);


	glBegin(GL_LINES);

	glVertex2f(0.00f, 0.00f);
	glVertex2f(0.00f, 0.05f);

	glVertex2f(0.00f, 0.05f);
	glVertex2f(-0.03f, 0.05f);

	glVertex2f(-0.03f, 0.05f);
	glVertex2f(-0.03f, 0.025f);

	glVertex2f(-0.03f, 0.025f);
	glVertex2f(-0.00f, 0.024f);

	glEnd();
	glPopMatrix();
}

void Render_lr::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.043, 0);
	glScaled(0.9, 0.75, 0);
	glColor3d(0, 1, 0);

	glBegin(GL_LINES);

	glVertex2f(0.00f, 0.00f);
	glVertex2f(0.00f, 0.05f);

	glVertex2f(0.00f, 0.05f);
	glVertex2f(0.03f, 0.05f);

	glVertex2f(0.03f, 0.05f);
	glVertex2f(0.03f, 0.025f);

	glVertex2f(0.03f, 0.025f);
	glVertex2f(0.00f, 0.024f);

	glVertex2f(0.00f, 0.024f);
	glVertex2f(0.025f, 0.00f);

	glEnd();
	glPopMatrix();
}

void Render_ls::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.017, 0);
	glScaled(0.65, 0.45, 0);
	glColor3d(0, 1, 0);

	glBegin(GL_LINES);

	glVertex2f(0.00f, 0.04f);
	glVertex2f(0.00f, 0.00f);

	glVertex2f(0.00f, 0.04f);
	glVertex2f(0.03f, 0.04f);

	glVertex2f(0.00f, 0.00f);
	glVertex2f(0.03f, 0.00f);

	glVertex2f(0.03f, 0.00f);
	glVertex2f(0.03f, -0.04f);

	glVertex2f(0.03f, -0.04f);
	glVertex2f(0.00f, -0.04f);

	glEnd();

	glPopMatrix();
}

void Render_lt::print() {

	glPushMatrix();
	glTranslated(posx, posy - 0.04, 0);
	glScaled(0.8, 0.73, 0);
	glColor3d(0, 1, 0);

	glBegin(GL_LINES);
	glVertex2f(0.00f, 0.00f);
	glVertex2f(0.00f, 0.05f);

	glVertex2f(-0.015f, 0.05f);
	glVertex2f(0.015f, 0.05f);


	glEnd();

	glPopMatrix();
}

void Render_lu::print() {

	glPushMatrix();
	glTranslated(posx, posy - 0.035, 0);
	glScaled(0.58, 0.65, 0);
	glColor3d(0, 1, 0);
	glBegin(GL_LINES);

	glVertex2f(-0.025f, 0.00f);
	glVertex2f(0.025f, 0.00f);

	glVertex2f(-0.025f, 0.00f);
	glVertex2f(-0.025f, 0.05f);

	glVertex2f(0.025f, 0.00f);
	glVertex2f(0.025f, 0.05f);


	glEnd();

	glPopMatrix();
}

void Render_lv::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.04, 0);
	glScaled(0.38, 0.98, 0);
	glColor3d(0, 1, 0);

	glBegin(GL_LINES);

	glVertex2f(0.00f, 0.00f);
	glVertex2f(-0.04f, 0.04f);

	glVertex2f(0.00f, 0.00f);
	glVertex2f(0.04f, 0.04f);

	glEnd();

	glPopMatrix();
}

void Render_lw::print()
{
	glPushMatrix();
	glTranslated(posx, posy - 0.038, 0);
	glScaled(0.4, 0.7, 0);
	glColor3d(0, 1, 0);

	glBegin(GL_LINES);


	glVertex2f(0.00f, 0.05f);
	glVertex2f(0.05f, 0.00f);

	glVertex2f(0.00f, 0.05f);
	glVertex2f(-0.05f, 0.00f);

	glVertex2f(-0.05f, 0.00f);
	glVertex2f(-0.065f, 0.05f);

	glVertex2f(0.05f, 0.00f);
	glVertex2f(0.065f, 0.05f);


	glEnd();

	glPopMatrix();
}

void Render_lx::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.022, 0);
	glScaled(0.5, 0.43, 0);
	glColor3d(0, 1, 0);

	glBegin(GL_LINES);

	glVertex2f(0.00f, 0.00f);
	glVertex2f(-0.04f, 0.04f);

	glVertex2f(0.00f, 0.00f);
	glVertex2f(0.04f, 0.04f);

	glVertex2f(0.00f, 0.00f);
	glVertex2f(-0.04f, -0.04f);


	glVertex2f(0.00f, 0.00f);
	glVertex2f(0.04f, -0.04f);


	glEnd();

	glPopMatrix();
}

void Render_ly::print() {

	glPushMatrix();
	glTranslated(posx, posy - 0.04, 0);
	glScaled(0.9, 0.85, 0);
	glColor3d(0, 1, 0);

	glBegin(GL_LINES);

	glVertex2f(0.00f, 0.00f);
	glVertex2f(0.00f, 0.03f);

	glVertex2f(0.00f, 0.03f);
	glVertex2f(0.02f, 0.05f);

	glVertex2f(0.00f, 0.03f);
	glVertex2f(-0.02f, 0.05f);

	glEnd();
	glPopMatrix();
}
void Render_lz::print() {
	glPushMatrix();
	glTranslated(posx, posy - 0.02, 0);
	glScaled(0.5, 0.5, 0);
	glColor3d(0, 1, 0);
	glBegin(GL_LINES);
	glVertex2f(0.03f, 0.03f);
	glVertex2f(-0.03f, -0.03f);
	glVertex2f(-0.03f, -0.03f);
	glVertex2f(0.03f, -0.03f);
	glVertex2f(0.03f, 0.03f);
	glVertex2f(-0.03f, 0.03f);
	glEnd();
	glPopMatrix();
}



