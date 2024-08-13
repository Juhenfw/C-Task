#include <iostream>
#include <conio.h>

using namespace std;

class M{
    protected:
        int m;
    public:  
        void get_m(){
            cout << "masukkan nilai m: ";
            cin >> m;
        }
};

class N{ 
    protected :
        int n;
    public :
        void get_n(){
            cout << "masukkan nilai n: ";
            cin >> n;
        }
};

class P:private M, public N{ 
   public :
        void display(){
            get_m();
            get_n();
            cout << "------------------------" << endl;
            cout << "nilai m = " << m << endl;
            cout << "nilai n = " << n << endl;
        }
};

int main(){
    P p;
    p.display();
    getch();
}
