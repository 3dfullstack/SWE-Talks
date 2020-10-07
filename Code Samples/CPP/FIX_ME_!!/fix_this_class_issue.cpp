#include <bits/stdc++.h>
using namespace std;
/**
 * @brief Fix the code session-2
 * The semantics of the program is intended, which you should
 * not change other wise. 
 * 
 * You can refactor and move code around as you wish but keeping in mind the 
 * semantics and intentions of the program. 
 * 
 * Base which gives a pair of ints 
 * Point is a pair of ints so extends the class base. 
 * 
 * Base can tommorow convert to give 3 ints instead of two. 
 * Point can tommorow be extended to 2D and 3D Points. 
 * 
 * Removing a functional requirement is not allowed. 
 * Renaming functions or modifying the behavior is not allowed (arglist or return semantics) => Bussiness requirement
 * We have clients in south-east asia, china and japan who aren't willing to change their code. 
 * 
 * Need to maintain backwards compatibility. 
 */
class base
{
    int x = 0;
    int y = 0;

public:
    base() = delete;
    explicit base(int x);
    base(int x = 0, int y = 0);
    void update_x(int x);
    void update_y(int y);
    virtual void print();
};

base::base(int x, int y) : x(x), y(y)
{
}

void base::update_x(int x)
{
    this->x = x;
}

void base::update_y(int y)
{
    this->y = y;
}

void base::print()
{
    std::cout << "x : " << this->x << ", y : " << this->y << std::endl;
}

class point : private base
{
    long long int origin_dist = 0;
    point();

    int _x;
    int _y;

public:
    point(int x, int y)
    {
        base __point(x, y);
        _x = x;
        _y = y;
    }

    point *create_null_point()
    {
        return new point();
    }

    void print() override
    {
        std::cout << "[Point] Printing a point : (" << this->_x << ", " << this->_y << ")" << std::endl;
    }

    operator string()
    {
        std::string _str = "";
        _str += "x : ";
        _str += _x;
        _str += " , y : ";
        _str += _y;
        _str += "\n";
        return to_string(_x);
    }
};

int main(void)
{
    base point_base(0, 0);
    point concrete_point;

    std::string str = concrete_point;
    base *new_base = std::static_cast<point *>(concrete_point);

    auto component_sum = [](int a, int b) -> int {
        return a + b;
    };

    return 0;
}
