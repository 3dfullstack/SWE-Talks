#include <iostream>
#include <vector>
using namespace std;
 
class a
{
public :
    ~a()
    {
        cout << "destroy";
    }
};
int main()
{   
   vector <a*> *v1  = new vector<a*>(); // v1 is a pointer. 
   vector <a> *v2  = new vector<a>();// a new vecotr of type a is created/
    
//    delete v1;// did not call anything/.  
//    delete v2;

   a *b = new a();
   delete b;

   return 0;
}

// Why distructor not called? because : a new vector which stores a is created. 
// not a is created. 
// Further, allocators are the main garbage collectors for vectors. 
// so delete has no effect on vectors. 