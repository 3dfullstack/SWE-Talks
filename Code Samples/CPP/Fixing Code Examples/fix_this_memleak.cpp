#include <iostream>

/**
 * @brief Find and fix more memleak issues and bugs
 * Constructor Allocs
 * Destructor Invokes
 * 
 */
class args
{
public:
    int a;
    args(int x) : a(x) {}
    args()
    {
        std::cout << "Args Created" << std::endl;
    }
    // This is the destructor. (in-class here)
    ~args()
    {
        std::cout << "Delete args : " << this->a << std::endl;
    }
};

class func
{
public:
    args *arg;
    func();

    // TODO : Why the explicit here?
    // HACK : I gave one reason, what is the next one.
    explicit func(int a);
    ~func();
};

func::func(int a) : arg(new args(a))
{
}

func::func() : arg(new args(42))
{
}

// This is the destructor.
func::~func()
{
    // Child and then parent ? TOA-->TOU-->TOD Issue
    std::cout << "Delete Function : " << this->arg->a << std::endl;
}

int main(void)
{
    func *function = new func();

    // 0 by default if no allocs
    std::cout << function->arg << std::endl;

    // Note the order of this, first the
    // child and then the parent.
    delete function->arg;
    delete function;
    return 0;
}

// clang++ -fsanitize=leak -fsanitize=memory fix_this_mem.cpp
// clang++ -fsanitize=address -fsanitize=leak fix_this_mem.cpp