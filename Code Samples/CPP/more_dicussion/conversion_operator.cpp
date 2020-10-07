#include<iostream> 
using namespace std; 

class A { 
public: 
	A(int ii = 0) : i(ii) {} 
	void show() { cout << "i = " << i << endl;} 
private: 
	int i; 
}; 

class B { 
public: 
	B(int xx) : x(xx) {} 
	operator A() const { return A(x); } // ?? 
private: 
	int x; 
}; 

void g(A a) 
{ a.show(); } 

int main() { 
B b(10); // creating an obj. of B, x = 10
g(b); //
g(20); 
getchar(); 
return 0; 
} 

// SOLLID-> L prinicple.
// next discussion.