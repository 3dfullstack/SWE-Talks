#include <iostream>
#include <vector>
using namespace std;

int main()
{   
    int x = 5;
    int * const P = &x;
   return 0;
}

// Why distructor not called? because : a new vector which stores a is created. 
// not a is created. 
// Further, allocators are the main garbage collectors for vectors. 
// so delete has no effect on vectors. 