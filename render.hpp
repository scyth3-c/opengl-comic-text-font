
#ifndef RENDER_H
#define RENDER_H
#include <gl/glut.h>



class Generic_Render {
protected:
	double posx = 0;
	double posy = 0;
	int Identificador_letra = 0;
public:
	Generic_Render(double,double) {}
	virtual void print() = 0;
};


class Render_la : public  Generic_Render {
public:
	Render_la(double,double);
	void print();

};
class Render_lb : public Generic_Render {
public:
	Render_lb(double, double);
	void print();
};

class Render_lc : public Generic_Render {
public:
	Render_lc(double, double);
	void print();
};

class Render_ld : public Generic_Render {
public:
	Render_ld(double, double);
	void print();
};
class Render_le : public Generic_Render
{
public:
	Render_le(double,double);
	void print();
};

class Render_lf : public Generic_Render {
public:
	Render_lf(double, double);
	void print();
};

class Render_lg : public Generic_Render {
public:
	Render_lg(double, double);
	void print();
};
class Render_lh : public Generic_Render {
public:
	Render_lh(double, double);
	void print();
};
class Render_li : public Generic_Render {
public:
	Render_li(double, double);
	void print();
};

class Render_lj : public Generic_Render {
public:
	Render_lj(double, double);
	void print();
};

class Render_lk : public Generic_Render {
public:
	Render_lk(double, double);
	void print();
};
class Render_ll : public Generic_Render {
public:
	Render_ll(double, double);
	void print();
};

class Render_lm : public Generic_Render {
public:
	Render_lm(double, double);
	void print();
};
class Render_ln : public Generic_Render {
public:
	Render_ln(double, double);
	void print();
};
class Render_lo : public Generic_Render {
public:
	Render_lo(double, double);
	void print();
};
class Render_lp : public Generic_Render {
public:
	Render_lp(double, double);
	void print();
};
class Render_lq : public Generic_Render {
public:
	Render_lq(double, double);
	void print();
};
class Render_lr : public Generic_Render {
public:
	Render_lr(double, double);
	void print();
};

class Render_ls : public Generic_Render {
public:
	Render_ls(double, double);
	void print();
};

class Render_lt : public Generic_Render {
public:
	Render_lt(double, double);
	void print();
};
class Render_lu : public Generic_Render {
public:
	Render_lu(double, double);
	void print();
};

class Render_lv : public Generic_Render {
public:
	Render_lv(double, double);
	void print();
};

class Render_lw : public Generic_Render {
public:
	Render_lw(double, double);
	void print();
};
class Render_lx : public Generic_Render {
public:
	Render_lx(double, double);
	void print();
};
class Render_ly : public Generic_Render
{
public:
	Render_ly(double, double);
	void print();
};
class Render_lz : public Generic_Render {
public:
	Render_lz(double, double);
	void print();
};

#endif