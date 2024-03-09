#include <iostream>
#include <conio.h>

using namespace std;

class X 
{   protected :
        int x1;
        int x2; 
        int x3;
    public :
    };

class Y:public X
{   public :
        int y1,y2,y3;

        Y(int a, int b, int c){
            x1=a;
            x2=b;
            x3=c;
        }

        void f() {
            y1=x1; 
            y2=x2; 
            y3=x3; 
        }
};

class Z:X
{   public :
        int z1,z2,z3;

        Z(int a, int b, int c){
            x1=a;
            x2=b;
            x3=c;
        }

        void f() {
            z1=x1; 
            z2=x2; 
            z3=x3; 
        }
};

int main(){
    int m,n,p;
    
    Y y(1,2,3);
    y.f();
    m = y.y1; n = y.y2; p = y.y3;
    cout << "m : " << m << ", n : " << n << " and p : " << p << endl;
    
    Z z(4,5,6);
    z.f();
    m = z.z1; n = z.z2; p = z.z3;
    cout << "m : " << m << ", n : " << n << " and p : " << p << endl;
}