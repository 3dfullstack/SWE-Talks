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
	// With array kind of declaration,no. of objects are made.
	// here 2 objects are made.
	Test t[2];
	std::cout << t[23333].getX();
}
// what is the meaning of using [] for class object creation. => Array of objects.