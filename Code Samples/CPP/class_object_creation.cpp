 #include <iostream>
 
 class Test {
	 static int x;

    //   static int* x = new int();// Class level. Static gets allocated in comiple time. 
      //But new get allocated in runtime. 
    //   int* x = new int(); // This is connected to object. so this is possible.

    int y;
	 public:
	  	Test(){x++; std::cout << "Constructor called \n";}
		// static int getX(){return x;}

        void puty(int& y){this->y = y;}
        int getY(){return y;}

 };
//  int Test::x = 0;
 int main(){
	 Test t[1]; // With array kind of declaration,no. of objects are made.
	 // here 2 objects are made.
    // int y = 3;
    //  add = &y;
	//  t[1].puty(y);
	 
	//  std::cout << t[23333].getX(); 
    //  for (auto i = 0; i < 1000; i++ ){
    //       std::cout << t[i].getY();//undefined runtime behaviors.
    //  }
     // put a for 
    //  std::cout << t[1].getY();
 }
 // what is the meaing ofusing [] for class object creation.