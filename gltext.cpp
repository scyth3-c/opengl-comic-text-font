#include "gltext.hpp"
#include <string>
#include <vector>
#include "render.hpp"


using std::move;
using std::string;
using std::vector;

Gltext::Gltext(string _cadena, double _posx, double _posy, double espace) : posx(move(_posx)), posy(move(_posy)), cadena(move(_cadena)), desfase(move(espace)) { split(); print(); }

Gltext::Gltext(string _cadena, double _posx, double _posy) : posx(move(_posx)), posy(move(_posy)), cadena(move(_cadena)) { split(); print(); }


void Gltext::split() {
	int size = cadena.length();
	for (int i = 0; i < size; i++) {
		fragmento_cadena.push_back(cadena[i]);
	}
}

void Gltext::print() {
	for (auto it : fragmento_cadena) {
		if (it == 'a') {
			Render_la* a = new Render_la(posx, posy);
			a->~Render_la();
			posx += desfase;
		}
		else if (it == 'b') {
			Render_lb* b = new Render_lb(posx,posy);
			b->~Render_lb();
			posx += desfase + 0.015;
		}
		else if (it == 'c') {
			Render_lc* c = new Render_lc(posx, posy);
			c->~Render_lc();
			posx += desfase;
		}
		else if (it == 'd') {
			Render_ld* d = new Render_ld(posx, posy);
			d->~Render_ld();
			posx += desfase;
		}
		else if (it == 'e') {
			Render_le* e = new Render_le(posx, posy);
			e->~Render_le();
			posx += desfase;
		}
		else if (it == 'f') {
			Render_lf* f = new Render_lf(posx, posy);
			f->~Render_lf();
			posx += desfase;

		}
		else if (it == 'g') {
			Render_lg *g = new Render_lg(posx, posy);
			g->~Render_lg();
			posx += desfase;
		}
		else if (it == 'h') {
			Render_lh* h = new Render_lh(posx, posy);
			h->~Render_lh();
			posx += desfase;
		}
		else if (it == 'i') {
			Render_li* i = new Render_li(posx, posy);
			i->~Render_li();
			posx += desfase;
		}
		else if (it == 'j') {
			Render_lj* j = new Render_lj(posx, posy);
			j->~Render_lj();
			posx += desfase;
		}
		else if (it == 'k') {
			Render_lk* k = new Render_lk(posx, posy);
			k->~Render_lk();
			posx += desfase;
		}
		else if (it == 'l') {
			Render_ll* l = new Render_ll(posx, posy);
			l->~Render_ll();
			posx += desfase;
		}
		else if (it == 'm') {
			Render_lm* m = new Render_lm(posx+0.012, posy);
			m->~Render_lm();
			posx += desfase;
		}
		else if (it == 'n') {
			Render_ln* n = new Render_ln(posx+0.011, posy);
			n->~Render_ln();
			posx += desfase;
		}
		else if (it == 'o') {
			Render_lo* o = new Render_lo(posx+0.007, posy);
			o->~Render_lo();
			posx += desfase;
		}
		else if (it == 'p') {
			Render_lp* p = new Render_lp(posx, posy);
			p->~Render_lp();
			posx += desfase;
		}
		else if (it == 'q') {
			Render_lq* q = new Render_lq(posx, posy);
			q->~Render_lq();
			posx += desfase;
		}
		else if (it == 'r') {
			Render_lr* r = new Render_lr(posx, posy);
			r->~Render_lr();
			posx += desfase;
		}
		else if (it == 's') {
			Render_ls* s = new Render_ls(posx, posy);
			s->~Render_ls();
			posx += desfase;
		}
		else if (it == 't') {
			Render_lt* t = new Render_lt(posx, posy);
			t->~Render_lt();
			posx += desfase;
		}
		else if (it == 'u') {
			Render_lu* u = new Render_lu(posx, posy);
			u->~Render_lu();
			posx += desfase;
		}
		else if (it == 'v') {
			Render_lv* v = new Render_lv(posx, posy);
			v->~Render_lv();
			posx += desfase;
		}
		else if (it == 'w') {
			Render_lw* w = new Render_lw(posx, posy);
			w->~Render_lw();
			posx += desfase;
		}
		else if (it == 'x') {
			Render_lx* x = new Render_lx(posx, posy);
			x->~Render_lx();
			posx += desfase;
		}
		else if (it == 'y') {
			Render_ly* y = new Render_ly(posx, posy);
			y->~Render_ly();
			posx += desfase;
		}
		else if (it == 'z') {
		Render_lz* z = new Render_lz(posx, posy);
		z->~Render_lz();
		posx += desfase;
		}
		else if (it == '>') {
		Render_arrow* arrow = new Render_arrow(posx, posy);
		arrow->~Render_arrow();
		posx += desfase;
		}
		else if (it == ' ') {
		Render_space* space = new Render_space(posx, posy);
		space->~Render_space();
		posx += desfase + 0.015 ;
		}
		else {
		Render_lx* error = new Render_lx(posx, posy);
		error->~Render_lx();
		posx += desfase;
		}
	}
}

void Gltext::allColor(int r, int g, int b) { Generic_Render::setColor(r,g,b);}

void allColor(int r, int g, int b) {
	Gltext::allColor(r, g, b);
}
void Gltext::smallText(bool flag) {
	if (flag) {
		Generic_Render::setScala(true);
	}
	else {
		Generic_Render::setScala(false);
	}
}
void smallText(bool flag) {Gltext::smallText(flag);}



































