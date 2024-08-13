#include <iostream>
#include <cmath>
#include <exception>

using namespace std;

class OpMat{
    private:
        double value;
    public:
        void setValue(int x){
            value = x;
        }
        
        double getValue(){
            return value;
        }
        
        OpMat(double x){
            try // Look for exceptions that occur within try block and route to attached catch block(s)
            {
                // if the user entered a negative number, this is an error condition
                if( x < 0.0 )
                    throw "Can not take sqrt of negative number";
                
                // Otherwise, print the answer
                else{
                    setValue(x);
                    getValue();

                    cout << "The sqrt of " << value << " is " << sqrt(value) << endl;
                }
            }
            catch(const char* exception)
            {
                cerr << "Error: " << exception << '\n';
            }
        }


};

int main(){
    cout << endl;

    OpMat op1( -0.1 );

    cout << endl;

    OpMat op2( 4.0 );

    cout << endl;
    
}
