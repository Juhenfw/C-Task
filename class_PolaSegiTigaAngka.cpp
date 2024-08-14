#include <iostream>

using namespace std;

class PolaSegiTigaAngka{
    private:
        int bintang, spasi, baris;
    public:
        void inputSegitiga(int barisSegitiga){

            cout << "Segitiga ke-" << barisSegitiga << ":\n";

            for( baris=1; baris<=barisSegitiga; baris++ ){
                
                for( spasi=1; spasi<=barisSegitiga-baris; spasi++ ){
                    cout << " ";

                }

                for( bintang=1; bintang<=baris; bintang++ ){
                    cout << baris << " ";
                }
            
                cout << endl;
            }
        }

};

int main(){

    PolaSegiTigaAngka segitiga1;
    PolaSegiTigaAngka segitiga2;
    PolaSegiTigaAngka segitiga3;
    PolaSegiTigaAngka segitiga4;
    PolaSegiTigaAngka segitiga5;
    PolaSegiTigaAngka segitiga6;

    segitiga1.inputSegitiga(1);
    segitiga2.inputSegitiga(2);
    segitiga3.inputSegitiga(3);
    segitiga4.inputSegitiga(4);
    segitiga5.inputSegitiga(5);
    segitiga6.inputSegitiga(6);

    return 0;
}
