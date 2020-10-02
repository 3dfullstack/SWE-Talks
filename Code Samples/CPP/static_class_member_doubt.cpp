#include <iostream>
using namespace std;

class X
{
	// static const int x = 4; // Why compiler does not allow in-class initialization.
	int x = 4;
	// Why does it need to be constant.
public:
	// static int getValue(){return x;}
	int getValue() { return x; }
};

int main()
{
	X x;
	cout << x.getValue();
	// cout << X::getValue();// Only after you mamke getValue static.
	return 0;
}
// Why because it worked !
// Generally, it is not allowed to initialize data members in C++ class declaration,
