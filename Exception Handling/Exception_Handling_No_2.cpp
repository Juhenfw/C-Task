#include <iostream>
#include <exception>

using namespace std;

class OperasiMatematika{
    private:
        double bil1, bil2, hasil_perkalian, hasil_pembagian;
    public:
        void perkalian(int a, int b){
            hasil_perkalian = a*b;
        }
        double getHasilPerkalian(){
            return hasil_perkalian;
        }
        void pembagian(int a, int b){
            hasil_pembagian = a/b;
        }
        double getHasilPembagian(){
            return hasil_pembagian;
        }

        OperasiMatematika(int a, int b){
           perkalian(a,b);
           cout << "Hasil Perkalian = " << getHasilPerkalian() << endl;
            if(b != 0){
                pembagian(a,b);
                cout << "Hasil Pembagian = " << getHasilPembagian() << endl;
            }
            else
                throw out_of_range("Penyebut tidak boleh sama dengan nol");
        }
};

int main(){
    cout << endl;
    try
    {
        OperasiMatematika op1(1,0);
    }
    catch( out_of_range &e )
    {
        cout << "\n\nException while initializing op1: " << e.what() << '\n';
    }

    cout << endl;
    
}
