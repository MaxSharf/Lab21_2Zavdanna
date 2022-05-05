
#include <iostream>
#include <conio.h>

using namespace std;

class Figure {
public:
	const double pi = 3.14;
	double a; // сторона 1
	double b; // сторона 2
	double sqea;
	virtual void Print() = 0;
	~Figure() {

	}

};

class Primokutnuk :virtual public Figure {
public:
	Primokutnuk() {
		a = 5;
		b = 3;
	}
	Primokutnuk(double a , double b , double sqea) :Primokutnuk()
	{
		this->a = a;
		this->b = b;
		this->sqea = sqea;
	}

	virtual ~Primokutnuk() {
		a = 0;
		b = 0;
		sqea = 0;
	}
	 
	void Print() override {
		sqea = a * b;
		cout << " Plocha = " << sqea << endl;
	}

};
class Trukutnuk :virtual public Figure {
public:
	Trukutnuk() {
		a = 5;
		b = 3;
	}
	Trukutnuk(double a, double b, double sqea) :Trukutnuk()
	{
		this->a = a;
		this->b = b;
		this->sqea = sqea;
	}

	virtual ~Trukutnuk() {
		a = 0;
		b = 0;
		sqea = 0;
	}

	void Print() override {
		sqea =  2/(a * b);
		cout << " Plocha = " << sqea << endl;
	}

};
class Trapechia :virtual public Figure {
public:
	double h;
	Trapechia() {
		a = 5;
		b = 3;
		h = 4;
	}
	Trapechia(double a, double b, double sqea , double h) :Trapechia()
	{
		this->a = a;
		this->b = b;
		this->sqea = sqea;
		this->h = h;
	}

	virtual ~Trapechia() {
		a = 0;
		b = 0;
		sqea = 0;
		h = 0;
	}

	void Print() override {
		sqea = 2 /(a + b)  * h;
		cout << " Plocha = " << sqea << endl;
	}

};
class Krug :virtual public Figure {
public:
	double r;
	Krug() {
		r = 5;
	}
	Krug(double r, double sqea) :Krug()
	{
		this->r = r;
		this->sqea = sqea;
	}

	virtual ~Krug() {
		r = 0;
		sqea = 0;
	}

	void Print() override {
		sqea = pi * (r*r);
		cout << " Plocha = " << sqea << endl;
	}
};
int main()
{
	Figure* inst[4];
	inst[0] = new Primokutnuk;
	inst[1] = new Trukutnuk;
	inst[2] = new Trapechia;
	inst[3] = new Krug;
	for (size_t i = 0; i < 4; i++)
	{
		inst[i]->Print();
	}

	return 0;

}

