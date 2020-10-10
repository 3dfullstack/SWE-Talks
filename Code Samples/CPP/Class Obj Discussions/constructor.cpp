#include<iostream> 
using namespace std; 
class Point { 
private: 
	int x; 
	int y; 
public: 
    // Point()=default; // EXPLICITY DEFAULT CONSTRUCTORS CANNOT BE DEFINED. 
    Point();
	Point(int i, int j); // Constructor 
}; 

Point::Point(int i, int j=1) {  // Doubt: When both i=0 and j=0, it act like Point()? 
// Acts like a default constructor. as all of the parameters have default value.
	x = i; 
	y = j; 
	cout << "Parameterized constructo called" << endl; 
} 

Point::Point() { 
	cout << "Defaulted. constructo called" << endl; 
} 

int main() 
{ 
Point t1(0,0), *t2=NULL; // which object t2 points to ? // dangling pointer.
Point t3(),*t4=NULL; // Act like default constructor. 

Point *tx = new Point();
return 0; 
} 

// How many ways you can overload a fucntion:
// no. of parameters. 
// type of parameters
// way of initialiazation . 