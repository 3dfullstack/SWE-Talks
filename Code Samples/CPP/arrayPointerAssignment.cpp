// Pointer to Array: Array Pointer
// Pointer of Array: Pointer Array

#include <iostream>
using namespace std;


int main(){
    // Array
    int array[3]={3,2,1};
    // Array pointer
    int *arrPtr = NULL;
    arrPtr = &array;// WHY ?13:15: error: cannot convert ‘int (*)[3]’ to ‘int*’ in assignment
    // Dynamic Memory Allocation
    int *arrPtr2 = new int[3];
    arrPtr2 = &array[0]; //

    cout << arrPtr << "\n" << &array;

    // Printign Arrya Pointer 
    

    // Passing Array Pointer to functions 

    // Passing PointerArray to functions 

    return 0;
}