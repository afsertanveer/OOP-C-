#include <iostream>
using namespace std;

class ABC{
   int x;
   public:
    ABC(int x){
        cout<<"Constructor: "<<x<<endl;
    }
    ~ABC(){
        cout<<"Destructor: "<<this->x<<endl;
    }
};


int main() {
    
   if(true){
      static ABC obj(0);
   }
   if(true){
       ABC s(1); // it shows Destructor: garbage value since its not static 
   }
   
   cout<<"end of main\n";
    return 0;
}
