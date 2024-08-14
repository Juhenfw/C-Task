#include <iostream>
#include <exception>

using namespace std;

const int LENGTH = 7;

class Array1DimInteger{
    private:
        int integers[LENGTH];
    public:
        void displayArray(){
            for( int i = 0; i < LENGTH; i++ ){
                cout << integers[i] << " ";
            }
            cout << endl;
        }

        int& operator[](int index) {
            if (index < 0 || index >= LENGTH) {
                throw out_of_range("Subscript out of range");
            }
            return integers[index];
        }



        Array1DimInteger(){
            for( int i = 0; i < LENGTH; i++ ){
                integers[i] = 1;
            }
        }

        void sumArray(Array1DimInteger c1,Array1DimInteger c2);

};

void Array1DimInteger::sumArray(Array1DimInteger c1, Array1DimInteger c2){
    Array1DimInteger c3;
    for( int i = 0; i < LENGTH; i++ ){
        c2.integers[i] += c1.integers[i];
    }
}

int main(){
    cout << endl;
    // attempt to use out-of-range subscript
    Array1DimInteger integer1;
    cout << endl << integer1[7];
    try
    {
        cout << "\nAttempt to assign 1000 to integers1[15]" << endl;
        integer1[15] = 1000; // ERROR: subscript out of range
    } // end try
    catch( out_of_range &ex )
    {
        cout << "An exception occured: " << ex.what() << '\n';
    } // end catch

    Array1DimInteger integer2;

    integer2.sumArray(integer1,integer2);
    
    cout << endl;
}
