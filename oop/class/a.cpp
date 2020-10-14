#include <iostream>
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define deb(x) cout << #x << "=" << x << endl
using namespace std;

class A
{
	int l = 55;
public:
	A()
	{
		cout<<"A's construtor\n";
	}
	int x = 15;
	void hello()
	{
		cout<<"hello1\n";
	}

};

class B : public A
{
public:
	B()
	{
		cout<<"B's construtor\n";
		// A a;
		// cout<<l<<"\n";
	}
	void hello()
	{
		cout<<"hello2\n";
	}
	int y = 10;
};

class C : public B
{
public:
	C()
	{
		cout<<"C's construtor\n";	
	}
	
};

// Operator Overloading
class ComplexNumbers
{
	int real,imag;
public:
	ComplexNumbers(int real = 0, int imag = 0)
	{
		this->real = real;
		this->imag = imag;
	}

	// This will automatically called when '+' is used
	// between two Complex objects

	ComplexNumbers operator + (ComplexNumbers const &obj)
	{
		ComplexNumbers res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}

	void print()
	{
		cout<<real<<" + i"<<imag<<endl;
	}
};

void solveComplex()
{
	ComplexNumbers c1(10,5),c2(2,4);
	ComplexNumbers c3 = c1 + c2;
	// ComplexNumber c3 = c1.operator::+(p2);	
	c3.print();
}

/* Runtime polymorphism: 
This type of polymorphism is achieved by Function Overriding.

Function overriding : on the other hand occurs 
when a derived class has a definition for 
one of the member functions of the base class.
That base function is said to be overridden.
*/

class Base
{
public:
	void print()
	{
		cout<<"print base class\n";
	}
	void show()
	{
		cout<<"show base class\n";
	}
};
class Derived : public Base
{
public:
	virtual void print()
	{
		cout<<"print derived class\n";
	}
	virtual void show()
	{
		cout<<"show derived class\n";
	}
};
// What is the use?
// Virtual functions allow us to create a list of 
// base class pointers and call methods of any of the derived 
// classes without even knowing kind of derived class object.
void polymorphism()
{
	/*
		Base class pointer can point to the object 
		of any of its descendant class
		but its converse is not true
	*/
	Base *b;
	Derived d;
	b = &d;
	// virtual function, binded at runtime (Runtime polymorphism) 
	b->print(); // print derived class
	// b->show(); // show base class
}





int main()
{
	OJ;
	// solveComplex();
	// polymorphism();
	E e;
	D d;
	e.xxx();
	return 0;
}
