#include <iostream>

class Example;

typedef Example example_class;

class Example
{
public:
    friend std::ostream &operator<<(std::ostream &os, const Example &ex);
};

std::ostream &operator<<(std::ostream &os, const Example &ex)
{
    os << "Example" << std::endl;
    return os;
}

int main(void)
{
    Example *ex = new Example();
    delete ex;

    ex = new Example();
    delete ex;

    std::cout << sizeof(*ex) << std::endl;
    std::cout << ex << std::endl;

    // Shouldn't it be an error after delete?
    // NO Absolutely not.
    // see how ostream overload works
    std::cout << (*ex) << std::endl;
    return 0;
}