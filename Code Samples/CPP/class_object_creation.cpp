#include <iostream>

class Test
{
	static int x;

public:
	Test()
	{
		x++;
		std::cout << "Constructor called \n";
	}
	static int getX() { return x; }
};
int Test::x = 0;
int main()
{
	Test t[2]; // With array kind of declaration,no. of objects are made.
	// here 2 objects are made.

	std::cout << t[23333].getX();
	;
}
// what is the meaing ofusing [] for class object creation.