#include <iostream>
#include <ctime>
#include <iomanip>


using namespace std;

const int MAX_POPULASI = 100;

class Sapi{
    protected:
    
    public:
        int usia = 0;
        double random; // 1 = betina, 0 = jantan
        string kelamin;
        double probBetina = 0.6;
        int noUrut = 0;

        void tambahPopulasi(int noUrut, int iterasi){

            if(noUrut == 1){
                if(usia == 0){
                    this->noUrut = noUrut;
                    kelamin = "Betina";

                    cout << "Kelahiran sapi " <<setw(3) << setfill('0') << this->noUrut << " " << kelamin << endl;
                    cout << "Usia = " << usia << endl;
                    usia += 1;

                } else if(usia > 0 && usia < 10){
                    cout << "Sapi " << setw(3) << setfill('0') << this->noUrut << " " << kelamin << endl;
                    cout << "Usia = " << usia << endl;
                    usia += 1;

                } else if(usia == 10){
                    cout << "Sapi " << setw(3) << setfill('0') << this->noUrut << " " << kelamin << " Telah Mati" << endl;
                }

            } else if(noUrut == 2){
                if(usia == 0){
                    this->noUrut = noUrut;
                    kelamin = "Jantan";

                    cout << "Kelahiran sapi " <<setw(3) << setfill('0') << this->noUrut << " " << kelamin << endl;
                    cout << "Usia = " << usia << endl;
                    usia += 1;

                } else if(usia > 0 && usia < 10){
                    cout << "Sapi " << setw(3) << setfill('0') << this->noUrut << " " << kelamin << endl;
                    cout << "Usia = " << usia << endl;
                    usia += 1;

                } else if(usia == 10){
                    cout << "Sapi " << setw(3) << setfill('0') << this->noUrut << " " << kelamin << " Telah Mati" << endl;
                }
            } else {
                if(usia == 0){
                    this->noUrut = noUrut;

                    for(int i = 1; i <= 4; i++){
                        random = (rand() % 100) / 100.0;
                    }

                    // Melahirkan
                    if(usia == iterasi){

                        if(random <= probBetina){
                            kelamin = "Betina";
                        } else if (random > probBetina){
                            kelamin = "Jantan";
                        }
                    }

                    cout << "Kelahiran sapi " <<setw(3) << setfill('0') << this->noUrut << " " << kelamin << endl;
                    cout << "Usia = " << usia << endl;
                    usia += 1;

                } else if(usia > 0 && usia < 10){
                    cout << "Sapi " << setw(3) << setfill('0') << this->noUrut << " " << kelamin << endl;
                    cout << "Usia = " << usia << endl;
                    usia += 1;

                } else if(usia == 10){
                    cout << "Sapi " << setw(3) << setfill('0') << this->noUrut << " " << kelamin << " Telah Mati" << endl;
                }
            }
        }

        void melahirkan(bool YatauT){

        }

        void meninggal(bool YatauT){

        }
};

class Peternakan:public Sapi{
    public:
        void melahirkan(){
            
        }
};

int main(){
    srand(time(0));
    int usia[100] = {0};
    int kursor = 0;
    int jumBetina = 0, jumJantan = 0, total;
    int penanda = 0;
    int waktu;

    Sapi *ekor = new Sapi[MAX_POPULASI];

    cout << "Masukkan Waktu (Tahun) range 0-10: ";
    cin >> waktu;

    cout << endl;

    if(waktu == 0){
        // TIME = 0 -------------------------------------------------------------------------
        cout << "-- TIME = 0 --" << endl;
        ekor[1].tambahPopulasi(1,0); // Betina
        usia[1] += 0;
        jumBetina += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan
        jumJantan += 1;

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;


        cout << endl;

    } else if(waktu == 1){
        // TIME = 0 -------------------------------------------------------------------------
        cout << "-- TIME = 0 --" << endl;
        ekor[1].tambahPopulasi(1,0); // Betina
        usia[1] += 0;
        jumBetina += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan
        jumJantan += 1;

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;


        cout << endl;
        
        // TIME = 1 -------------------------------------------------------------------------
        cout << "-- TIME = 1 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        
        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

    } else if(waktu == 2){
        // TIME = 0 -------------------------------------------------------------------------
        cout << "-- TIME = 0 --" << endl;
        ekor[1].tambahPopulasi(1,0); // Betina
        usia[1] += 0;
        jumBetina += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan
        jumJantan += 1;

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;


        cout << endl;
        
        // TIME = 1 -------------------------------------------------------------------------
        cout << "-- TIME = 1 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        
        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 2 -------------------------------------------------------------------------
        cout << "-- TIME = 2 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

    } else if(waktu == 3){
        // TIME = 0 -------------------------------------------------------------------------
        cout << "-- TIME = 0 --" << endl;
        ekor[1].tambahPopulasi(1,0); // Betina
        usia[1] += 0;
        jumBetina += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan
        jumJantan += 1;

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;


        cout << endl;
        
        // TIME = 1 -------------------------------------------------------------------------
        cout << "-- TIME = 1 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        
        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 2 -------------------------------------------------------------------------
        cout << "-- TIME = 2 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 3 -------------------------------------------------------------------------
        cout << "-- TIME = 3 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[3].tambahPopulasi(3,0);

            if(ekor[3].kelamin == "Betina"){
                usia[3] += 0;
                jumBetina += 1;
            } else{
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

    } else if(waktu == 4){
        // TIME = 0 -------------------------------------------------------------------------
        cout << "-- TIME = 0 --" << endl;
        ekor[1].tambahPopulasi(1,0); // Betina
        usia[1] += 0;
        jumBetina += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan
        jumJantan += 1;

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;


        cout << endl;
        
        // TIME = 1 -------------------------------------------------------------------------
        cout << "-- TIME = 1 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        
        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 2 -------------------------------------------------------------------------
        cout << "-- TIME = 2 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 3 -------------------------------------------------------------------------
        cout << "-- TIME = 3 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[3].tambahPopulasi(3,0);

            if(ekor[3].kelamin == "Betina"){
                usia[3] += 0;
                jumBetina += 1;
            } else{
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 4 --------------------------------------------------------------------------
        cout << "-- TIME = 4 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[4].tambahPopulasi(4,0);

            if(ekor[4].kelamin == "Betina"){
                usia[4] += 0;
                jumBetina += 1;
            } else {
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

    } else if(waktu == 5){
        // TIME = 0 -------------------------------------------------------------------------
        cout << "-- TIME = 0 --" << endl;
        ekor[1].tambahPopulasi(1,0); // Betina
        usia[1] += 0;
        jumBetina += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan
        jumJantan += 1;

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;


        cout << endl;
        
        // TIME = 1 -------------------------------------------------------------------------
        cout << "-- TIME = 1 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        
        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 2 -------------------------------------------------------------------------
        cout << "-- TIME = 2 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 3 -------------------------------------------------------------------------
        cout << "-- TIME = 3 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[3].tambahPopulasi(3,0);

            if(ekor[3].kelamin == "Betina"){
                usia[3] += 0;
                jumBetina += 1;
            } else{
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 4 --------------------------------------------------------------------------
        cout << "-- TIME = 4 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[4].tambahPopulasi(4,0);

            if(ekor[4].kelamin == "Betina"){
                usia[4] += 0;
                jumBetina += 1;
            } else {
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 5 -------------------------------------------------------------------------
        cout << "-- TIME = 5 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[5].tambahPopulasi(5,0);

            if(ekor[5].kelamin == "Betina"){
                usia[5] += 0;
                jumBetina += 1;
            } else {
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
        }

        ekor[4].tambahPopulasi(3,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

    } else if(waktu == 6){
        // TIME = 0 -------------------------------------------------------------------------
        cout << "-- TIME = 0 --" << endl;
        ekor[1].tambahPopulasi(1,0); // Betina
        usia[1] += 0;
        jumBetina += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan
        jumJantan += 1;

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;


        cout << endl;
        
        // TIME = 1 -------------------------------------------------------------------------
        cout << "-- TIME = 1 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        
        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 2 -------------------------------------------------------------------------
        cout << "-- TIME = 2 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 3 -------------------------------------------------------------------------
        cout << "-- TIME = 3 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[3].tambahPopulasi(3,0);

            if(ekor[3].kelamin == "Betina"){
                usia[3] += 0;
                jumBetina += 1;
            } else{
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 4 --------------------------------------------------------------------------
        cout << "-- TIME = 4 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[4].tambahPopulasi(4,0);

            if(ekor[4].kelamin == "Betina"){
                usia[4] += 0;
                jumBetina += 1;
            } else {
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 5 -------------------------------------------------------------------------
        cout << "-- TIME = 5 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[5].tambahPopulasi(5,0);

            if(ekor[5].kelamin == "Betina"){
                usia[5] += 0;
                jumBetina += 1;
            } else {
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
        }

        ekor[4].tambahPopulasi(3,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 6 --------------------------------------------------------------------------
        cout << "-- TIME = 6 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[6].tambahPopulasi(6,0);
            kursor = 6;

            if(ekor[6].kelamin == "Betina"){
                usia[6] += 0;
                jumBetina += 1;
            } else {
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;

            if(usia[3] == 3 || usia[3] == 4 || usia[3] == 5 || usia[3] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[4].tambahPopulasi(4,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
        }

        ekor[5].tambahPopulasi(5,0);
        if(ekor[5].kelamin == "Betina"){
            usia[5] += 1;
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

    } else if(waktu == 7){
        // TIME = 0 -------------------------------------------------------------------------
        cout << "-- TIME = 0 --" << endl;
        ekor[1].tambahPopulasi(1,0); // Betina
        usia[1] += 0;
        jumBetina += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan
        jumJantan += 1;

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;


        cout << endl;
        
        // TIME = 1 -------------------------------------------------------------------------
        cout << "-- TIME = 1 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        
        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 2 -------------------------------------------------------------------------
        cout << "-- TIME = 2 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 3 -------------------------------------------------------------------------
        cout << "-- TIME = 3 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[3].tambahPopulasi(3,0);

            if(ekor[3].kelamin == "Betina"){
                usia[3] += 0;
                jumBetina += 1;
            } else{
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 4 --------------------------------------------------------------------------
        cout << "-- TIME = 4 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[4].tambahPopulasi(4,0);

            if(ekor[4].kelamin == "Betina"){
                usia[4] += 0;
                jumBetina += 1;
            } else {
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 5 -------------------------------------------------------------------------
        cout << "-- TIME = 5 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[5].tambahPopulasi(5,0);

            if(ekor[5].kelamin == "Betina"){
                usia[5] += 0;
                jumBetina += 1;
            } else {
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
        }

        ekor[4].tambahPopulasi(3,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 6 --------------------------------------------------------------------------
        cout << "-- TIME = 6 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[6].tambahPopulasi(6,0);
            kursor = 6;

            if(ekor[6].kelamin == "Betina"){
                usia[6] += 0;
                jumBetina += 1;
            } else {
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;

            if(usia[3] == 3 || usia[3] == 4 || usia[3] == 5 || usia[3] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[4].tambahPopulasi(4,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
        }

        ekor[5].tambahPopulasi(5,0);
        if(ekor[5].kelamin == "Betina"){
            usia[5] += 1;
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;


        // TIME = 7 --------------------------------------------------------------------------
        cout << "-- TIME = 7 --" << endl;
        ekor[1].tambahPopulasi(1,0); // SUDAH TIDAK MELAHIRKAN
        usia[1] += 1;
        // if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
        //     if(kursor == 6){
        //         ekor[7].tambahPopulasi(7,0);
        //         kursor = 7;

        //         if(ekor[7].kelamin == "Betina"){
        //             usia[7] += 0;
        //             jumBetina += 1;
        //         } else {
        //             jumJantan += 1;
        //         }
        //     }
        //     if(kursor == 7){
        //         ekor[8].tambahPopulasi(8,0);
        //         kursor = 8;

        //         if(ekor[8].kelamin == "Betina"){
        //             usia[8] += 0;
        //             jumBetina += 1;
        //         } else {
        //             jumJantan += 1;
        //         }
        //     }
        // }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
            if(usia[3] == 3 || usia[3] == 4 || usia[3] == 5 || usia[3] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[4].tambahPopulasi(4,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
            if(usia[4] == 3 || usia[4] == 4 || usia[4] == 5 || usia[4] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[5].tambahPopulasi(5,0);
        if(ekor[5].kelamin == "Betina"){
            usia[5] += 1;
        }

        ekor[6].tambahPopulasi(6,0);
        if(ekor[6].kelamin == "Betina"){
            usia[6] += 1;
        }

        if(kursor == 8){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
        }

        if(kursor == 9){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

    } else if(waktu == 8){
        // TIME = 0 -------------------------------------------------------------------------
        cout << "-- TIME = 0 --" << endl;
        ekor[1].tambahPopulasi(1,0); // Betina
        usia[1] += 0;
        jumBetina += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan
        jumJantan += 1;

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;


        cout << endl;
        
        // TIME = 1 -------------------------------------------------------------------------
        cout << "-- TIME = 1 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        
        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 2 -------------------------------------------------------------------------
        cout << "-- TIME = 2 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 3 -------------------------------------------------------------------------
        cout << "-- TIME = 3 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[3].tambahPopulasi(3,0);

            if(ekor[3].kelamin == "Betina"){
                usia[3] += 0;
                jumBetina += 1;
            } else{
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 4 --------------------------------------------------------------------------
        cout << "-- TIME = 4 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[4].tambahPopulasi(4,0);

            if(ekor[4].kelamin == "Betina"){
                usia[4] += 0;
                jumBetina += 1;
            } else {
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 5 -------------------------------------------------------------------------
        cout << "-- TIME = 5 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[5].tambahPopulasi(5,0);

            if(ekor[5].kelamin == "Betina"){
                usia[5] += 0;
                jumBetina += 1;
            } else {
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
        }

        ekor[4].tambahPopulasi(3,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 6 --------------------------------------------------------------------------
        cout << "-- TIME = 6 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[6].tambahPopulasi(6,0);
            kursor = 6;

            if(ekor[6].kelamin == "Betina"){
                usia[6] += 0;
                jumBetina += 1;
            } else {
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;

            if(usia[3] == 3 || usia[3] == 4 || usia[3] == 5 || usia[3] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[4].tambahPopulasi(4,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
        }

        ekor[5].tambahPopulasi(5,0);
        if(ekor[5].kelamin == "Betina"){
            usia[5] += 1;
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;


        // TIME = 7 --------------------------------------------------------------------------
        cout << "-- TIME = 7 --" << endl;
        ekor[1].tambahPopulasi(1,0); // SUDAH TIDAK MELAHIRKAN
        usia[1] += 1;
        // if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
        //     if(kursor == 6){
        //         ekor[7].tambahPopulasi(7,0);
        //         kursor = 7;

        //         if(ekor[7].kelamin == "Betina"){
        //             usia[7] += 0;
        //             jumBetina += 1;
        //         } else {
        //             jumJantan += 1;
        //         }
        //     }
        //     if(kursor == 7){
        //         ekor[8].tambahPopulasi(8,0);
        //         kursor = 8;

        //         if(ekor[8].kelamin == "Betina"){
        //             usia[8] += 0;
        //             jumBetina += 1;
        //         } else {
        //             jumJantan += 1;
        //         }
        //     }
        // }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
            if(usia[3] == 3 || usia[3] == 4 || usia[3] == 5 || usia[3] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[4].tambahPopulasi(4,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
            if(usia[4] == 3 || usia[4] == 4 || usia[4] == 5 || usia[4] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[5].tambahPopulasi(5,0);
        if(ekor[5].kelamin == "Betina"){
            usia[5] += 1;
        }

        ekor[6].tambahPopulasi(6,0);
        if(ekor[6].kelamin == "Betina"){
            usia[6] += 1;
        }

        if(kursor == 8){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
        }

        if(kursor == 9){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 8 --------------------------------------------------------------------------
        cout << "-- TIME = 8 --" << endl;
        ekor[1].tambahPopulasi(1,0); // SUDAH TIDAK MELAHIRKAN
        usia[1] += 1;
        // if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
        //     if(kursor == 6){
        //             ekor[7].tambahPopulasi(7,0);
        //             kursor = 7;

        //             if(ekor[7].kelamin == "Betina"){
        //                 usia[7] += 0;
        //                 jumBetina += 1;
        //             } else {
        //                 jumJantan += 1;
        //             }
        //         }
        //     if(kursor == 7){
        //         ekor[8].tambahPopulasi(8,0);
        //         kursor = 8;

        //         if(ekor[8].kelamin == "Betina"){
        //             usia[8] += 0;
        //             jumBetina += 1;
        //         } else {
        //             jumJantan += 1;
        //         }
        //     } else {
        //         ekor[7].tambahPopulasi(7,0);
        //         kursor = 7;

        //         if(ekor[7].kelamin == "Betina"){
        //             usia[7] += 0;
        //             jumBetina += 1;
        //         } else {
        //             jumJantan += 1;
        //         }
        //     }
        // }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
            if(usia[3] == 3 || usia[3] == 4 || usia[3] == 5 || usia[3] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }

                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[4].tambahPopulasi(4,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
            if(usia[4] == 3 || usia[4] == 4 || usia[4] == 5 || usia[4] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 10){
                    ekor[11].tambahPopulasi(11,0);
                    kursor = 11;

                    if(ekor[11].kelamin == "Betina"){
                        usia[11] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[5].tambahPopulasi(5,0);
        if(ekor[5].kelamin == "Betina"){
            usia[5] += 1;
            if(usia[5] == 3 || usia[5] == 4 || usia[5] == 5 || usia[5] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 10){
                    ekor[11].tambahPopulasi(11,0);
                    kursor = 11;

                    if(ekor[11].kelamin == "Betina"){
                        usia[11] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 11){
                    ekor[12].tambahPopulasi(12,0);
                    kursor = 12;

                    if(ekor[12].kelamin == "Betina"){
                        usia[12] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[6].tambahPopulasi(6,0);
        if(ekor[6].kelamin == "Betina"){
            usia[6] += 1;
        }

        if(kursor == 8){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
        }

        if(kursor == 9){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
        }

        if(kursor == 10){ // fix
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
        }

        if(kursor == 11){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
        }
        if(kursor == 12){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

    } else if(waktu == 9){
        // TIME = 0 -------------------------------------------------------------------------
        cout << "-- TIME = 0 --" << endl;
        ekor[1].tambahPopulasi(1,0); // Betina
        usia[1] += 0;
        jumBetina += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan
        jumJantan += 1;

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;


        cout << endl;
        
        // TIME = 1 -------------------------------------------------------------------------
        cout << "-- TIME = 1 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        
        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 2 -------------------------------------------------------------------------
        cout << "-- TIME = 2 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 3 -------------------------------------------------------------------------
        cout << "-- TIME = 3 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[3].tambahPopulasi(3,0);

            if(ekor[3].kelamin == "Betina"){
                usia[3] += 0;
                jumBetina += 1;
            } else{
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 4 --------------------------------------------------------------------------
        cout << "-- TIME = 4 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[4].tambahPopulasi(4,0);

            if(ekor[4].kelamin == "Betina"){
                usia[4] += 0;
                jumBetina += 1;
            } else {
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 5 -------------------------------------------------------------------------
        cout << "-- TIME = 5 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[5].tambahPopulasi(5,0);

            if(ekor[5].kelamin == "Betina"){
                usia[5] += 0;
                jumBetina += 1;
            } else {
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
        }

        ekor[4].tambahPopulasi(3,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 6 --------------------------------------------------------------------------
        cout << "-- TIME = 6 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[6].tambahPopulasi(6,0);
            kursor = 6;

            if(ekor[6].kelamin == "Betina"){
                usia[6] += 0;
                jumBetina += 1;
            } else {
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;

            if(usia[3] == 3 || usia[3] == 4 || usia[3] == 5 || usia[3] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[4].tambahPopulasi(4,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
        }

        ekor[5].tambahPopulasi(5,0);
        if(ekor[5].kelamin == "Betina"){
            usia[5] += 1;
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;


        // TIME = 7 --------------------------------------------------------------------------
        cout << "-- TIME = 7 --" << endl;
        ekor[1].tambahPopulasi(1,0); // SUDAH TIDAK MELAHIRKAN
        usia[1] += 1;
        // if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
        //     if(kursor == 6){
        //         ekor[7].tambahPopulasi(7,0);
        //         kursor = 7;

        //         if(ekor[7].kelamin == "Betina"){
        //             usia[7] += 0;
        //             jumBetina += 1;
        //         } else {
        //             jumJantan += 1;
        //         }
        //     }
        //     if(kursor == 7){
        //         ekor[8].tambahPopulasi(8,0);
        //         kursor = 8;

        //         if(ekor[8].kelamin == "Betina"){
        //             usia[8] += 0;
        //             jumBetina += 1;
        //         } else {
        //             jumJantan += 1;
        //         }
        //     }
        // }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
            if(usia[3] == 3 || usia[3] == 4 || usia[3] == 5 || usia[3] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[4].tambahPopulasi(4,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
            if(usia[4] == 3 || usia[4] == 4 || usia[4] == 5 || usia[4] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[5].tambahPopulasi(5,0);
        if(ekor[5].kelamin == "Betina"){
            usia[5] += 1;
        }

        ekor[6].tambahPopulasi(6,0);
        if(ekor[6].kelamin == "Betina"){
            usia[6] += 1;
        }

        if(kursor == 8){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
        }

        if(kursor == 9){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 8 --------------------------------------------------------------------------
        cout << "-- TIME = 8 --" << endl;
        ekor[1].tambahPopulasi(1,0); // SUDAH TIDAK MELAHIRKAN
        usia[1] += 1;
        // if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
        //     if(kursor == 6){
        //             ekor[7].tambahPopulasi(7,0);
        //             kursor = 7;

        //             if(ekor[7].kelamin == "Betina"){
        //                 usia[7] += 0;
        //                 jumBetina += 1;
        //             } else {
        //                 jumJantan += 1;
        //             }
        //         }
        //     if(kursor == 7){
        //         ekor[8].tambahPopulasi(8,0);
        //         kursor = 8;

        //         if(ekor[8].kelamin == "Betina"){
        //             usia[8] += 0;
        //             jumBetina += 1;
        //         } else {
        //             jumJantan += 1;
        //         }
        //     } else {
        //         ekor[7].tambahPopulasi(7,0);
        //         kursor = 7;

        //         if(ekor[7].kelamin == "Betina"){
        //             usia[7] += 0;
        //             jumBetina += 1;
        //         } else {
        //             jumJantan += 1;
        //         }
        //     }
        // }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
            if(usia[3] == 3 || usia[3] == 4 || usia[3] == 5 || usia[3] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }

                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[4].tambahPopulasi(4,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
            if(usia[4] == 3 || usia[4] == 4 || usia[4] == 5 || usia[4] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 10){
                    ekor[11].tambahPopulasi(11,0);
                    kursor = 11;

                    if(ekor[11].kelamin == "Betina"){
                        usia[11] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[5].tambahPopulasi(5,0);
        if(ekor[5].kelamin == "Betina"){
            usia[5] += 1;
            if(usia[5] == 3 || usia[5] == 4 || usia[5] == 5 || usia[5] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 10){
                    ekor[11].tambahPopulasi(11,0);
                    kursor = 11;

                    if(ekor[11].kelamin == "Betina"){
                        usia[11] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 11){
                    ekor[12].tambahPopulasi(12,0);
                    kursor = 12;

                    if(ekor[12].kelamin == "Betina"){
                        usia[12] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[6].tambahPopulasi(6,0);
        if(ekor[6].kelamin == "Betina"){
            usia[6] += 1;
        }

        if(kursor == 8){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
        }

        if(kursor == 9){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
        }

        if(kursor == 10){ // fix
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
        }

        if(kursor == 11){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
        }
        if(kursor == 12){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 9 --------------------------------------------------------------------------
        cout << "-- TIME = 9 --" << endl;
        ekor[1].tambahPopulasi(1,0); // SUDAH TIDAK MELAHIRKAN
        usia[1] += 1;
        // if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
        //     if(kursor == 6){
        //             ekor[7].tambahPopulasi(7,0);
        //             kursor = 7;

        //             if(ekor[7].kelamin == "Betina"){
        //                 usia[7] += 0;
        //                 jumBetina += 1;
        //             } else {
        //                 jumJantan += 1;
        //             }
        //         }
        //     if(kursor == 7){
        //         ekor[8].tambahPopulasi(8,0);
        //         kursor = 8;

        //         if(ekor[8].kelamin == "Betina"){
        //             usia[8] += 0;
        //             jumBetina += 1;
        //         } else {
        //             jumJantan += 1;
        //         }
        //     } else {
        //         ekor[7].tambahPopulasi(7,0);
        //         kursor = 7;

        //         if(ekor[7].kelamin == "Betina"){
        //             usia[7] += 0;
        //             jumBetina += 1;
        //         } else {
        //             jumJantan += 1;
        //         }
        //     }
        // }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
            if(usia[3] == 3 || usia[3] == 4 || usia[3] == 5 || usia[3] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 10){
                    ekor[11].tambahPopulasi(11,0);
                    kursor = 11;

                    if(ekor[11].kelamin == "Betina"){
                        usia[11] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 11){
                    ekor[12].tambahPopulasi(12,0);
                    kursor = 12;

                    if(ekor[12].kelamin == "Betina"){
                        usia[12] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 12){
                    ekor[13].tambahPopulasi(13,0);
                    kursor = 13;

                    if(ekor[13].kelamin == "Betina"){
                        usia[13] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[4].tambahPopulasi(4,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
            if(usia[4] == 3 || usia[4] == 4 || usia[4] == 5 || usia[4] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 10){
                    ekor[11].tambahPopulasi(11,0);
                    kursor = 11;

                    if(ekor[11].kelamin == "Betina"){
                        usia[11] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 11){
                    ekor[12].tambahPopulasi(12,0);
                    kursor = 12;

                    if(ekor[12].kelamin == "Betina"){
                        usia[12] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 12){
                    ekor[13].tambahPopulasi(13,0);
                    kursor = 13;

                    if(ekor[13].kelamin == "Betina"){
                        usia[13] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 13){
                    ekor[14].tambahPopulasi(14,0);
                    kursor = 14;

                    if(ekor[14].kelamin == "Betina"){
                        usia[14] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[5].tambahPopulasi(5,0);
        if(ekor[5].kelamin == "Betina"){
            usia[5] += 1;
            if(usia[5] == 3 || usia[5] == 4 || usia[5] == 5 || usia[5] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 10){
                    ekor[11].tambahPopulasi(11,0);
                    kursor = 11;

                    if(ekor[11].kelamin == "Betina"){
                        usia[11] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 11){
                    ekor[12].tambahPopulasi(12,0);
                    kursor = 12;

                    if(ekor[12].kelamin == "Betina"){
                        usia[12] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 11){
                    ekor[12].tambahPopulasi(12,0);
                    kursor = 12;

                    if(ekor[12].kelamin == "Betina"){
                        usia[12] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 12){
                    ekor[13].tambahPopulasi(13,0);
                    kursor = 13;

                    if(ekor[13].kelamin == "Betina"){
                        usia[13] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 13){
                    ekor[14].tambahPopulasi(14,0);
                    kursor = 14;

                    if(ekor[14].kelamin == "Betina"){
                        usia[14] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 14){
                    ekor[15].tambahPopulasi(15,0);
                    kursor = 15;

                    if(ekor[15].kelamin == "Betina"){
                        usia[15] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[6].tambahPopulasi(6,0);
        if(ekor[6].kelamin == "Betina"){
            usia[6] += 1;
            if(usia[5] == 3 || usia[5] == 4 || usia[5] == 5 || usia[5] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 10){
                    ekor[11].tambahPopulasi(11,0);
                    kursor = 11;

                    if(ekor[11].kelamin == "Betina"){
                        usia[11] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 11){
                    ekor[12].tambahPopulasi(12,0);
                    kursor = 12;

                    if(ekor[12].kelamin == "Betina"){
                        usia[12] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 12){
                    ekor[13].tambahPopulasi(13,0);
                    kursor = 13;

                    if(ekor[13].kelamin == "Betina"){
                        usia[13] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 13){
                    ekor[14].tambahPopulasi(14,0);
                    kursor = 14;

                    if(ekor[14].kelamin == "Betina"){
                        usia[14] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 14){
                    ekor[15].tambahPopulasi(15,0);
                    kursor = 15;

                    if(ekor[15].kelamin == "Betina"){
                        usia[15] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 15){
                    ekor[16].tambahPopulasi(16,0);
                    kursor = 16;

                    if(ekor[16].kelamin == "Betina"){
                        usia[16] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        if(kursor == 8){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
        }

        if(kursor == 9){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
        }

        if(kursor == 10){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
        }

        if(kursor == 11){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
        }

        if(kursor == 12){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
        }

        if(kursor == 13){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
            ekor[10].tambahPopulasi(10,0);
            if(ekor[10].kelamin == "Betina"){
                usia[10] += 1;
            }
        }

        if(kursor == 14){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
            ekor[10].tambahPopulasi(10,0);
            if(ekor[10].kelamin == "Betina"){
                usia[10] += 1;
            }
            ekor[11].tambahPopulasi(11,0);
            if(ekor[11].kelamin == "Betina"){
                usia[11] += 1;
            }
        }

        if(kursor == 15){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
            ekor[10].tambahPopulasi(10,0);
            if(ekor[10].kelamin == "Betina"){
                usia[10] += 1;
            }
            ekor[11].tambahPopulasi(11,0);
            if(ekor[11].kelamin == "Betina"){
                usia[11] += 1;
            }
            ekor[12].tambahPopulasi(12,0);
            if(ekor[12].kelamin == "Betina"){
                usia[12] += 1;
            }
        }

        if(kursor == 16){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
            ekor[10].tambahPopulasi(10,0);
            if(ekor[10].kelamin == "Betina"){
                usia[10] += 1;
            }
            ekor[11].tambahPopulasi(11,0);
            if(ekor[11].kelamin == "Betina"){
                usia[11] += 1;
            }
            ekor[12].tambahPopulasi(12,0);
            if(ekor[12].kelamin == "Betina"){
                usia[12] += 1;
            }
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

    } else if(waktu == 10){
        // TIME = 0 -------------------------------------------------------------------------
        cout << "-- TIME = 0 --" << endl;
        ekor[1].tambahPopulasi(1,0); // Betina
        usia[1] += 0;
        jumBetina += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan
        jumJantan += 1;

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;


        cout << endl;
        
        // TIME = 1 -------------------------------------------------------------------------
        cout << "-- TIME = 1 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        
        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 2 -------------------------------------------------------------------------
        cout << "-- TIME = 2 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;

        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 3 -------------------------------------------------------------------------
        cout << "-- TIME = 3 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[3].tambahPopulasi(3,0);

            if(ekor[3].kelamin == "Betina"){
                usia[3] += 0;
                jumBetina += 1;
            } else{
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 4 --------------------------------------------------------------------------
        cout << "-- TIME = 4 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[4].tambahPopulasi(4,0);

            if(ekor[4].kelamin == "Betina"){
                usia[4] += 0;
                jumBetina += 1;
            } else {
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 5 -------------------------------------------------------------------------
        cout << "-- TIME = 5 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[5].tambahPopulasi(5,0);

            if(ekor[5].kelamin == "Betina"){
                usia[5] += 0;
                jumBetina += 1;
            } else {
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
        }

        ekor[4].tambahPopulasi(3,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 6 --------------------------------------------------------------------------
        cout << "-- TIME = 6 --" << endl;
        ekor[1].tambahPopulasi(1,0);
        usia[1] += 1;
        if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
            ekor[6].tambahPopulasi(6,0);
            kursor = 6;

            if(ekor[6].kelamin == "Betina"){
                usia[6] += 0;
                jumBetina += 1;
            } else {
                jumJantan += 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;

            if(usia[3] == 3 || usia[3] == 4 || usia[3] == 5 || usia[3] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[4].tambahPopulasi(4,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
        }

        ekor[5].tambahPopulasi(5,0);
        if(ekor[5].kelamin == "Betina"){
            usia[5] += 1;
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;


        // TIME = 7 --------------------------------------------------------------------------
        cout << "-- TIME = 7 --" << endl;
        ekor[1].tambahPopulasi(1,0); // SUDAH TIDAK MELAHIRKAN
        usia[1] += 1;
        // if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
        //     if(kursor == 6){
        //         ekor[7].tambahPopulasi(7,0);
        //         kursor = 7;

        //         if(ekor[7].kelamin == "Betina"){
        //             usia[7] += 0;
        //             jumBetina += 1;
        //         } else {
        //             jumJantan += 1;
        //         }
        //     }
        //     if(kursor == 7){
        //         ekor[8].tambahPopulasi(8,0);
        //         kursor = 8;

        //         if(ekor[8].kelamin == "Betina"){
        //             usia[8] += 0;
        //             jumBetina += 1;
        //         } else {
        //             jumJantan += 1;
        //         }
        //     }
        // }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
            if(usia[3] == 3 || usia[3] == 4 || usia[3] == 5 || usia[3] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[4].tambahPopulasi(4,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
            if(usia[4] == 3 || usia[4] == 4 || usia[4] == 5 || usia[4] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[5].tambahPopulasi(5,0);
        if(ekor[5].kelamin == "Betina"){
            usia[5] += 1;
        }

        ekor[6].tambahPopulasi(6,0);
        if(ekor[6].kelamin == "Betina"){
            usia[6] += 1;
        }

        if(kursor == 8){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
        }

        if(kursor == 9){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 8 --------------------------------------------------------------------------
        cout << "-- TIME = 8 --" << endl;
        ekor[1].tambahPopulasi(1,0); // SUDAH TIDAK MELAHIRKAN
        usia[1] += 1;
        // if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
        //     if(kursor == 6){
        //             ekor[7].tambahPopulasi(7,0);
        //             kursor = 7;

        //             if(ekor[7].kelamin == "Betina"){
        //                 usia[7] += 0;
        //                 jumBetina += 1;
        //             } else {
        //                 jumJantan += 1;
        //             }
        //         }
        //     if(kursor == 7){
        //         ekor[8].tambahPopulasi(8,0);
        //         kursor = 8;

        //         if(ekor[8].kelamin == "Betina"){
        //             usia[8] += 0;
        //             jumBetina += 1;
        //         } else {
        //             jumJantan += 1;
        //         }
        //     } else {
        //         ekor[7].tambahPopulasi(7,0);
        //         kursor = 7;

        //         if(ekor[7].kelamin == "Betina"){
        //             usia[7] += 0;
        //             jumBetina += 1;
        //         } else {
        //             jumJantan += 1;
        //         }
        //     }
        // }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
            if(usia[3] == 3 || usia[3] == 4 || usia[3] == 5 || usia[3] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }

                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[4].tambahPopulasi(4,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
            if(usia[4] == 3 || usia[4] == 4 || usia[4] == 5 || usia[4] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 10){
                    ekor[11].tambahPopulasi(11,0);
                    kursor = 11;

                    if(ekor[11].kelamin == "Betina"){
                        usia[11] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[5].tambahPopulasi(5,0);
        if(ekor[5].kelamin == "Betina"){
            usia[5] += 1;
            if(usia[5] == 3 || usia[5] == 4 || usia[5] == 5 || usia[5] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 10){
                    ekor[11].tambahPopulasi(11,0);
                    kursor = 11;

                    if(ekor[11].kelamin == "Betina"){
                        usia[11] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 11){
                    ekor[12].tambahPopulasi(12,0);
                    kursor = 12;

                    if(ekor[12].kelamin == "Betina"){
                        usia[12] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[6].tambahPopulasi(6,0);
        if(ekor[6].kelamin == "Betina"){
            usia[6] += 1;
        }

        if(kursor == 8){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
        }

        if(kursor == 9){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
        }

        if(kursor == 10){ // fix
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
        }

        if(kursor == 11){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
        }
        if(kursor == 12){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 9 --------------------------------------------------------------------------
        cout << "-- TIME = 9 --" << endl;
        ekor[1].tambahPopulasi(1,0); // SUDAH TIDAK MELAHIRKAN
        usia[1] += 1;
        // if(usia[1] == 3 || usia[1] == 4 || usia[1] == 5 || usia[1] == 6){
        //     if(kursor == 6){
        //             ekor[7].tambahPopulasi(7,0);
        //             kursor = 7;

        //             if(ekor[7].kelamin == "Betina"){
        //                 usia[7] += 0;
        //                 jumBetina += 1;
        //             } else {
        //                 jumJantan += 1;
        //             }
        //         }
        //     if(kursor == 7){
        //         ekor[8].tambahPopulasi(8,0);
        //         kursor = 8;

        //         if(ekor[8].kelamin == "Betina"){
        //             usia[8] += 0;
        //             jumBetina += 1;
        //         } else {
        //             jumJantan += 1;
        //         }
        //     } else {
        //         ekor[7].tambahPopulasi(7,0);
        //         kursor = 7;

        //         if(ekor[7].kelamin == "Betina"){
        //             usia[7] += 0;
        //             jumBetina += 1;
        //         } else {
        //             jumJantan += 1;
        //         }
        //     }
        // }

        ekor[2].tambahPopulasi(2,0); // Jantan

        ekor[3].tambahPopulasi(3,0);
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
            if(usia[3] == 3 || usia[3] == 4 || usia[3] == 5 || usia[3] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 10){
                    ekor[11].tambahPopulasi(11,0);
                    kursor = 11;

                    if(ekor[11].kelamin == "Betina"){
                        usia[11] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 11){
                    ekor[12].tambahPopulasi(12,0);
                    kursor = 12;

                    if(ekor[12].kelamin == "Betina"){
                        usia[12] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 12){
                    ekor[13].tambahPopulasi(13,0);
                    kursor = 13;

                    if(ekor[13].kelamin == "Betina"){
                        usia[13] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[4].tambahPopulasi(4,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
            if(usia[4] == 3 || usia[4] == 4 || usia[4] == 5 || usia[4] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 10){
                    ekor[11].tambahPopulasi(11,0);
                    kursor = 11;

                    if(ekor[11].kelamin == "Betina"){
                        usia[11] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 11){
                    ekor[12].tambahPopulasi(12,0);
                    kursor = 12;

                    if(ekor[12].kelamin == "Betina"){
                        usia[12] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 12){
                    ekor[13].tambahPopulasi(13,0);
                    kursor = 13;

                    if(ekor[13].kelamin == "Betina"){
                        usia[13] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 13){
                    ekor[14].tambahPopulasi(14,0);
                    kursor = 14;

                    if(ekor[14].kelamin == "Betina"){
                        usia[14] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[5].tambahPopulasi(5,0);
        if(ekor[5].kelamin == "Betina"){
            usia[5] += 1;
            if(usia[5] == 3 || usia[5] == 4 || usia[5] == 5 || usia[5] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 10){
                    ekor[11].tambahPopulasi(11,0);
                    kursor = 11;

                    if(ekor[11].kelamin == "Betina"){
                        usia[11] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 11){
                    ekor[12].tambahPopulasi(12,0);
                    kursor = 12;

                    if(ekor[12].kelamin == "Betina"){
                        usia[12] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 11){
                    ekor[12].tambahPopulasi(12,0);
                    kursor = 12;

                    if(ekor[12].kelamin == "Betina"){
                        usia[12] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 12){
                    ekor[13].tambahPopulasi(13,0);
                    kursor = 13;

                    if(ekor[13].kelamin == "Betina"){
                        usia[13] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 13){
                    ekor[14].tambahPopulasi(14,0);
                    kursor = 14;

                    if(ekor[14].kelamin == "Betina"){
                        usia[14] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 14){
                    ekor[15].tambahPopulasi(15,0);
                    kursor = 15;

                    if(ekor[15].kelamin == "Betina"){
                        usia[15] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[6].tambahPopulasi(6,0);
        if(ekor[6].kelamin == "Betina"){
            usia[6] += 1;
            if(usia[5] == 3 || usia[5] == 4 || usia[5] == 5 || usia[5] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 10){
                    ekor[11].tambahPopulasi(11,0);
                    kursor = 11;

                    if(ekor[11].kelamin == "Betina"){
                        usia[11] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 11){
                    ekor[12].tambahPopulasi(12,0);
                    kursor = 12;

                    if(ekor[12].kelamin == "Betina"){
                        usia[12] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 12){
                    ekor[13].tambahPopulasi(13,0);
                    kursor = 13;

                    if(ekor[13].kelamin == "Betina"){
                        usia[13] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 13){
                    ekor[14].tambahPopulasi(14,0);
                    kursor = 14;

                    if(ekor[14].kelamin == "Betina"){
                        usia[14] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 14){
                    ekor[15].tambahPopulasi(15,0);
                    kursor = 15;

                    if(ekor[15].kelamin == "Betina"){
                        usia[15] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 15){
                    ekor[16].tambahPopulasi(16,0);
                    kursor = 16;

                    if(ekor[16].kelamin == "Betina"){
                        usia[16] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        if(kursor == 8){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
        }

        if(kursor == 9){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
        }

        if(kursor == 10){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
        }

        if(kursor == 11){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
        }

        if(kursor == 12){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
        }

        if(kursor == 13){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
            ekor[10].tambahPopulasi(10,0);
            if(ekor[10].kelamin == "Betina"){
                usia[10] += 1;
            }
        }

        if(kursor == 14){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
            ekor[10].tambahPopulasi(10,0);
            if(ekor[10].kelamin == "Betina"){
                usia[10] += 1;
            }
            ekor[11].tambahPopulasi(11,0);
            if(ekor[11].kelamin == "Betina"){
                usia[11] += 1;
            }
        }

        if(kursor == 15){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
            ekor[10].tambahPopulasi(10,0);
            if(ekor[10].kelamin == "Betina"){
                usia[10] += 1;
            }
            ekor[11].tambahPopulasi(11,0);
            if(ekor[11].kelamin == "Betina"){
                usia[11] += 1;
            }
            ekor[12].tambahPopulasi(12,0);
            if(ekor[12].kelamin == "Betina"){
                usia[12] += 1;
            }
        }

        if(kursor == 16){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
            ekor[10].tambahPopulasi(10,0);
            if(ekor[10].kelamin == "Betina"){
                usia[10] += 1;
            }
            ekor[11].tambahPopulasi(11,0);
            if(ekor[11].kelamin == "Betina"){
                usia[11] += 1;
            }
            ekor[12].tambahPopulasi(12,0);
            if(ekor[12].kelamin == "Betina"){
                usia[12] += 1;
            }
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

        // TIME = 10 -------------------------------------------------------------------------
        cout << "-- TIME = 10 --" << endl;
        ekor[1].tambahPopulasi(1,0); // SUDAH TIDAK MELAHIRKAN & MATI
        usia[1] += 1;
        if(ekor[1].usia == 10){
            if(ekor[1].kelamin == "Betina"){
                jumBetina -= 1;
            } else {
                jumJantan -= 1;
            }
        }

        ekor[2].tambahPopulasi(2,0); // Jantan
        if(ekor[2].usia == 10){
            if(ekor[2].kelamin == "Betina"){
                jumBetina -= 1;
            } else {
                jumJantan -= 1;
            }
        }

        ekor[3].tambahPopulasi(3,0); // SUDAH TIDAK MELAHIRKAN
        if(ekor[3].kelamin == "Betina"){
            usia[3] += 1;
            // if(usia[3] == 3 || usia[3] == 4 || usia[3] == 5 || usia[3] == 6){
            //     if(kursor == 6){
            //         ekor[7].tambahPopulasi(7,0);
            //         kursor = 7;

            //         if(ekor[7].kelamin == "Betina"){
            //             usia[7] += 0;
            //             jumBetina += 1;
            //         } else {
            //             jumJantan += 1;
            //         }
            //     } else if(kursor == 7){
            //         ekor[8].tambahPopulasi(8,0);
            //         kursor = 8;

            //         if(ekor[8].kelamin == "Betina"){
            //             usia[8] += 0;
            //             jumBetina += 1;
            //         } else {
            //             jumJantan += 1;
            //         }
            //     } else if(kursor == 8){
            //         ekor[9].tambahPopulasi(9,0);
            //         kursor = 9;

            //         if(ekor[8].kelamin == "Betina"){
            //             usia[8] += 0;
            //             jumBetina += 1;
            //         } else {
            //             jumJantan += 1;
            //         }
            //     } else if(kursor == 9){
            //         ekor[10].tambahPopulasi(10,0);
            //         kursor = 10;

            //         if(ekor[10].kelamin == "Betina"){
            //             usia[10] += 0;
            //             jumBetina += 1;
            //         } else {
            //             jumJantan += 1;
            //         }
            //     } else if(kursor == 10){
            //         ekor[11].tambahPopulasi(11,0);
            //         kursor = 11;

            //         if(ekor[11].kelamin == "Betina"){
            //             usia[11] += 0;
            //             jumBetina += 1;
            //         } else {
            //             jumJantan += 1;
            //         }
            //     } else if(kursor == 11){
            //         ekor[12].tambahPopulasi(12,0);
            //         kursor = 12;

            //         if(ekor[12].kelamin == "Betina"){
            //             usia[12] += 0;
            //             jumBetina += 1;
            //         } else {
            //             jumJantan += 1;
            //         }
            //     } else if(kursor == 12){
            //         ekor[13].tambahPopulasi(13,0);
            //         kursor = 13;

            //         if(ekor[13].kelamin == "Betina"){
            //             usia[13] += 0;
            //             jumBetina += 1;
            //         } else {
            //             jumJantan += 1;
            //         }
            //     }
            // }
        }

        ekor[4].tambahPopulasi(4,0);
        if(ekor[4].kelamin == "Betina"){
            usia[4] += 1;
            if(usia[4] == 3 || usia[4] == 4 || usia[4] == 5 || usia[4] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 10){
                    ekor[11].tambahPopulasi(11,0);
                    kursor = 11;

                    if(ekor[11].kelamin == "Betina"){
                        usia[11] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 11){
                    ekor[12].tambahPopulasi(12,0);
                    kursor = 12;

                    if(ekor[12].kelamin == "Betina"){
                        usia[12] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 12){
                    ekor[13].tambahPopulasi(13,0);
                    kursor = 13;

                    if(ekor[13].kelamin == "Betina"){
                        usia[13] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 13){
                    ekor[14].tambahPopulasi(14,0);
                    kursor = 14;

                    if(ekor[14].kelamin == "Betina"){
                        usia[14] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 14){
                    ekor[15].tambahPopulasi(15,0);
                    kursor = 15;

                    if(ekor[15].kelamin == "Betina"){
                        usia[15] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 15){
                    ekor[16].tambahPopulasi(16,0);
                    kursor = 16;

                    if(ekor[16].kelamin == "Betina"){
                        usia[16] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 16){
                    ekor[17].tambahPopulasi(17,0);
                    kursor = 17;

                    if(ekor[17].kelamin == "Betina"){
                        usia[17] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[5].tambahPopulasi(5,0);
        if(ekor[5].kelamin == "Betina"){
            usia[5] += 1;
            if(usia[5] == 3 || usia[5] == 4 || usia[5] == 5 || usia[5] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 10){
                    ekor[11].tambahPopulasi(11,0);
                    kursor = 11;

                    if(ekor[11].kelamin == "Betina"){
                        usia[11] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 11){
                    ekor[12].tambahPopulasi(12,0);
                    kursor = 12;

                    if(ekor[12].kelamin == "Betina"){
                        usia[12] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 11){
                    ekor[12].tambahPopulasi(12,0);
                    kursor = 12;

                    if(ekor[12].kelamin == "Betina"){
                        usia[12] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 12){
                    ekor[13].tambahPopulasi(13,0);
                    kursor = 13;

                    if(ekor[13].kelamin == "Betina"){
                        usia[13] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 13){
                    ekor[14].tambahPopulasi(14,0);
                    kursor = 14;

                    if(ekor[14].kelamin == "Betina"){
                        usia[14] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 14){
                    ekor[15].tambahPopulasi(15,0);
                    kursor = 15;

                    if(ekor[15].kelamin == "Betina"){
                        usia[15] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 15){
                    ekor[16].tambahPopulasi(16,0);
                    kursor = 16;

                    if(ekor[16].kelamin == "Betina"){
                        usia[16] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 16){
                    ekor[17].tambahPopulasi(17,0);
                    kursor = 17;

                    if(ekor[17].kelamin == "Betina"){
                        usia[17] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 17){
                    ekor[18].tambahPopulasi(18,0);
                    kursor = 18;

                    if(ekor[18].kelamin == "Betina"){
                        usia[18] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        ekor[6].tambahPopulasi(6,0);
        if(ekor[6].kelamin == "Betina"){
            usia[6] += 1;
            if(usia[5] == 3 || usia[5] == 4 || usia[5] == 5 || usia[5] == 6){
                if(kursor == 6){
                    ekor[7].tambahPopulasi(7,0);
                    kursor = 7;

                    if(ekor[7].kelamin == "Betina"){
                        usia[7] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 7){
                    ekor[8].tambahPopulasi(8,0);
                    kursor = 8;

                    if(ekor[8].kelamin == "Betina"){
                        usia[8] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 8){
                    ekor[9].tambahPopulasi(9,0);
                    kursor = 9;

                    if(ekor[9].kelamin == "Betina"){
                        usia[9] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 9){
                    ekor[10].tambahPopulasi(10,0);
                    kursor = 10;

                    if(ekor[10].kelamin == "Betina"){
                        usia[10] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 10){
                    ekor[11].tambahPopulasi(11,0);
                    kursor = 11;

                    if(ekor[11].kelamin == "Betina"){
                        usia[11] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 11){
                    ekor[12].tambahPopulasi(12,0);
                    kursor = 12;

                    if(ekor[12].kelamin == "Betina"){
                        usia[12] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 11){
                    ekor[12].tambahPopulasi(12,0);
                    kursor = 12;

                    if(ekor[12].kelamin == "Betina"){
                        usia[12] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 12){
                    ekor[13].tambahPopulasi(13,0);
                    kursor = 13;

                    if(ekor[13].kelamin == "Betina"){
                        usia[13] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 13){
                    ekor[14].tambahPopulasi(14,0);
                    kursor = 14;

                    if(ekor[14].kelamin == "Betina"){
                        usia[14] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 14){
                    ekor[15].tambahPopulasi(15,0);
                    kursor = 15;

                    if(ekor[15].kelamin == "Betina"){
                        usia[15] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 15){
                    ekor[16].tambahPopulasi(16,0);
                    kursor = 16;

                    if(ekor[16].kelamin == "Betina"){
                        usia[16] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 16){
                    ekor[17].tambahPopulasi(17,0);
                    kursor = 17;

                    if(ekor[17].kelamin == "Betina"){
                        usia[17] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 17){
                    ekor[18].tambahPopulasi(18,0);
                    kursor = 18;

                    if(ekor[18].kelamin == "Betina"){
                        usia[18] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                } else if(kursor == 18){
                    ekor[19].tambahPopulasi(19,0);
                    kursor = 19;

                    if(ekor[19].kelamin == "Betina"){
                        usia[19] += 0;
                        jumBetina += 1;
                    } else {
                        jumJantan += 1;
                    }
                }
            }
        }

        if(kursor == 8){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
        }

        if(kursor == 9){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
        }

        if(kursor == 10){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
        }

        if(kursor == 11){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
        }

        if(kursor == 12){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
            ekor[10].tambahPopulasi(10,0);
            if(ekor[10].kelamin == "Betina"){
                usia[10] += 1;
            }
            ekor[11].tambahPopulasi(11,0);
            if(ekor[11].kelamin == "Betina"){
                usia[11] += 1;
            }

            if(ekor[12].usia != 0){
                ekor[12].tambahPopulasi(12,0);
                if(ekor[12].kelamin == "Betina"){
                    usia[12] += 1;
                }
            }
        }

        if(kursor == 13){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
            ekor[10].tambahPopulasi(10,0);
            if(ekor[10].kelamin == "Betina"){
                usia[10] += 1;
            } 
            
            if(ekor[11].usia != 0){
                ekor[11].tambahPopulasi(11,0);
                if(ekor[11].kelamin == "Betina"){
                    usia[11] += 1;
                }
            }

        }

        if(kursor == 14){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
            ekor[10].tambahPopulasi(10,0);
            if(ekor[10].kelamin == "Betina"){
                usia[10] += 1;
            }
            ekor[11].tambahPopulasi(11,0);
            if(ekor[11].kelamin == "Betina"){
                usia[11] += 1;
            }
            ekor[12].tambahPopulasi(12,0);
            if(ekor[12].kelamin == "Betina"){
                usia[12] += 1;
            }

            if(ekor[13].usia != 0){
                ekor[13].tambahPopulasi(13,0);
                if(ekor[13].kelamin == "Betina"){
                    usia[13] += 1;
                }
            }
        }

        if(kursor == 15){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
            ekor[10].tambahPopulasi(10,0);
            if(ekor[10].kelamin == "Betina"){
                usia[10] += 1;
            }
            ekor[11].tambahPopulasi(11,0);
            if(ekor[11].kelamin == "Betina"){
                usia[11] += 1;
            }
            ekor[12].tambahPopulasi(12,0);
            if(ekor[12].kelamin == "Betina"){
                usia[12] += 1;
            }

            if(ekor[13].usia != 0){
                ekor[13].tambahPopulasi(13,0);
                if(ekor[13].kelamin == "Betina"){
                    usia[13] += 1;
                }
            }
        }

        if(kursor == 16){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
            ekor[10].tambahPopulasi(10,0);
            if(ekor[10].kelamin == "Betina"){
                usia[10] += 1;
            }
            ekor[11].tambahPopulasi(11,0);
            if(ekor[11].kelamin == "Betina"){
                usia[11] += 1;
            }
            ekor[12].tambahPopulasi(12,0);
            if(ekor[12].kelamin == "Betina"){
                usia[12] += 1;
            }
            ekor[13].tambahPopulasi(13,0);
            if(ekor[13].kelamin == "Betina"){
                usia[13] += 1;
            }
            ekor[14].tambahPopulasi(14,0);
            if(ekor[14].kelamin == "Betina"){
                usia[14] += 1;
            }
        }

        if(kursor == 17){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
            ekor[10].tambahPopulasi(10,0);
            if(ekor[10].kelamin == "Betina"){
                usia[10] += 1;
            }
            ekor[11].tambahPopulasi(11,0);
            if(ekor[11].kelamin == "Betina"){
                usia[11] += 1;
            }
            ekor[12].tambahPopulasi(12,0);
            if(ekor[12].kelamin == "Betina"){
                usia[12] += 1;
            }
            ekor[13].tambahPopulasi(13,0);
            if(ekor[13].kelamin == "Betina"){
                usia[13] += 1;
            }
            ekor[14].tambahPopulasi(14,0);
            if(ekor[14].kelamin == "Betina"){
                usia[14] += 1;
            }

            if(ekor[15].usia != 0){
                ekor[15].tambahPopulasi(15,0);
                if(ekor[15].kelamin == "Betina"){
                    usia[15] += 1;
                }
            }
        }

        if(kursor == 18){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
            ekor[10].tambahPopulasi(10,0);
            if(ekor[10].kelamin == "Betina"){
                usia[10] += 1;
            }
            ekor[11].tambahPopulasi(11,0);
            if(ekor[11].kelamin == "Betina"){
                usia[11] += 1;
            }
            ekor[12].tambahPopulasi(12,0);
            if(ekor[12].kelamin == "Betina"){
                usia[12] += 1;
            }
            ekor[13].tambahPopulasi(13,0);
            if(ekor[13].kelamin == "Betina"){
                usia[13] += 1;
            }
            ekor[14].tambahPopulasi(14,0);
            if(ekor[14].kelamin == "Betina"){
                usia[14] += 1;
            }
            ekor[15].tambahPopulasi(15,0);
            if(ekor[15].kelamin == "Betina"){
                usia[15] += 1;
            }
        }

        if(kursor == 19){
            ekor[7].tambahPopulasi(7,0);
            if(ekor[7].kelamin == "Betina"){
                usia[7] += 1;
            }
            ekor[8].tambahPopulasi(8,0);
            if(ekor[8].kelamin == "Betina"){
                usia[8] += 1;
            }
            ekor[9].tambahPopulasi(9,0);
            if(ekor[9].kelamin == "Betina"){
                usia[9] += 1;
            }
            ekor[10].tambahPopulasi(10,0);
            if(ekor[10].kelamin == "Betina"){
                usia[10] += 1;
            }
            ekor[11].tambahPopulasi(11,0);
            if(ekor[11].kelamin == "Betina"){
                usia[11] += 1;
            }
            ekor[12].tambahPopulasi(12,0);
            if(ekor[12].kelamin == "Betina"){
                usia[12] += 1;
            }
            ekor[13].tambahPopulasi(13,0);
            if(ekor[13].kelamin == "Betina"){
                usia[13] += 1;
            }
            ekor[14].tambahPopulasi(14,0);
            if(ekor[14].kelamin == "Betina"){
                usia[14] += 1;
            }
            ekor[15].tambahPopulasi(15,0);
            if(ekor[15].kelamin == "Betina"){
                usia[15] += 1;
            }
            ekor[16].tambahPopulasi(16,0);
            if(ekor[16].kelamin == "Betina"){
                usia[16] += 1;
            }
        }

        cout << "Jumlah Sapi Betina = " << jumBetina << endl;
        cout << "Jumlah Sapi Jantan = " << jumJantan << endl;
        total = jumBetina + jumJantan;
        cout << "Total Populasi Sapi = " << total << endl;

        cout << endl;

    } else{
        cout << "Waktu melebihi/kurang dari range 1-10" << endl;
    }

    return 0;
}
