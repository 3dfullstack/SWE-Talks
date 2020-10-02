#include <iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;

public:
	Point();
	Point(int i, int j); // Constructor
};

Point::Point(int i = 0, int j = 0)
{ // Doubt: When both i=0 and j=0, it act like Point()?
	x = i;
	y = j;
	cout << "Parameterized constructo called";
}
Point::Point()
{
	cout << "Defaulted. constructo called";
}

int main()
{
	Point t1, *t2;
	return 0;
}
