#include <iostream>
#include <string>

using namespace std;

class Reptil{
    public:
        virtual void show_nama(){
            cout << "Nama Reptil: " << endl;
        }
};

class Ular: public Reptil{
    public:
        void show_nama(){
            cout << "Ular" << endl;
        }
};

class Komodo: public Reptil{
    public:
        void show_nama(){
            cout << "Komodo" << endl;
        }
};

class Cicak: public Reptil{
    public:
        void show_nama(){
            cout << "Cicak" << endl;
        }
};

void printreptil(Reptil &jenis)
{
    jenis.show_nama();
}

int main(){
    Ular reptil1;
    Komodo reptil2;
    Cicak reptil3;

    printreptil(reptil1);
    printreptil(reptil2);
    printreptil(reptil3);

}