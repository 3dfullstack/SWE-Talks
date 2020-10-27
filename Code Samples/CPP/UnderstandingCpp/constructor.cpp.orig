#include <iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;

public:
	Point();

	/// Constructor @param int, @param int
	Point(int i, int j);
};

Point::Point(int i = 0, int j = 0)
{
	// Doubt: When both i = 0 and j = 0, it act like Point()? => No. Refer discussion.
	x = i;
	y = j;
	cout << "Parameterized constructor called";
}
Point::Point()
{
	cout << "Default constructor called";
}

int main()
{
	// No ambiguity in choosing the right constructor here.
	Point t1(), *t2;
	return 0;
}
