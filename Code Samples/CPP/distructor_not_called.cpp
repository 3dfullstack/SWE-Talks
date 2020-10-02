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
   vector <a*> *v1  = new vector<a*>;
   vector <a> *v2  = new vector<a>;
   delete v1;
   delete v2;
   return 0;
}

// Why distructor not called?