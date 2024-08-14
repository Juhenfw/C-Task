#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Fashion{
    protected:
        int tahun;
        int jumlah;
        int harga;
        int index;
    public:
        void data_ke(int index){
            this->index = index;
        }
        void setTahun(int tahun){
            this->tahun = tahun;
        }
        int getTahun(){
            return tahun;
        }
        void setJumlah(int jumlah){
            this->jumlah = jumlah;
        }
        int getJumlah(){
            return jumlah;
        }
        void setHarga(float harga){
            this->harga = harga;
        }
        int getHarga(){
            return harga;
        }
};

class Sepatu:public Fashion{
    protected:
        string merk;
        float ukuran;
    public:
        void setMerk(string merk){
            this->merk = merk;
        }
        string getMerk(){
            return merk;
        }
        void setUkuran(float ukuran){
            this->ukuran = ukuran;
        }
        float getUkuran(){
            return ukuran;
        }
        void display(){
            cout << index << "\t" << tahun << "\t" << jumlah << "\t IDR " 
            << harga << "\t \t \t \t" << merk << "\t \t \t" << ukuran << endl;
        }
};

class Pakaian:public Fashion{
    protected:
        string gender;
        string model;
        string warna;
    public:
        void setGen(string gender){
            this->gender = gender;
        }
        string getGen(){
            return gender;
        }
        void setModel(string model){
            this->model = model;
        }
        string getModel(){
            return model;
        }
        void setWarna(string warna){
            this->warna = warna;
        }
        string getWarna(){
            return warna;
        }
        void display(){
            cout << index << "\t" << tahun << "\t" << jumlah << "\t IDR " 
            << harga << "\t" << gender << "\t" << model << "\t" << warna << "\t \t \t \t" << endl;
        }
};

class Aksesoris:public Fashion{
    protected:
        string jenis;
        string bahan;
    public:
        void setJenis(string jenis){
            this->jenis = jenis;
        }
        string getJenis(){
            return jenis;
        }
        void setBahan(string bahan){
            this->bahan = bahan;
        }
        string getBahan(){
            return bahan;
        }
        void display(){
            cout << index << "\t" << tahun << "\t" << jumlah << "\t IDR " 
            << harga << "\t \t \t \t \t" << jenis << "\t" << bahan << "\t" << endl;
        }
};


int main(){
    cout << "-------------------------------------------------------------------------------------------------" << endl;
    cout << "No.\tTahun\tJumlah   Harga\t     Gen(L/P)\tModel\tWarna\tMerk\tJenis\tBahan\tUkuran" << endl;
    cout << "-------------------------------------------------------------------------------------------------" << endl;
    
    Pakaian data1;
    data1.data_ke(1);
    data1.setTahun(2020);
    data1.setJumlah(123);
    data1.setHarga(120000);
    data1.setGen("L");
    data1.setModel("Jaket");
    data1.setWarna("Hitam");
    
    data1.getTahun();
    data1.getJumlah();
    data1.getHarga();
    data1.getGen();
    data1.getModel();
    data1.getWarna();

    data1.display();

    Pakaian data2;
    data2.data_ke(2);
    data2.setTahun(2021);
    data2.setJumlah(330);
    data2.setHarga(320000);
    data2.setGen("P");
    data2.setModel("Dress");
    data2.setWarna("Merah");
    
    data2.getTahun();
    data2.getJumlah();
    data2.getHarga();
    data2.getGen();
    data2.getModel();
    data2.getWarna();

    data2.display();

    Sepatu data3;
    data3.data_ke(3);
    data3.setTahun(2022);
    data3.setJumlah(10);
    data3.setHarga(1400000);
    data3.setMerk("Nike");
    data3.setUkuran(38);

    data3.getTahun();
    data3.getJumlah();
    data3.getHarga();
    data3.getMerk();
    data3.getUkuran();

    data3.display();

    Pakaian data4;
    data4.data_ke(4);
    data4.setTahun(2020);
    data4.setJumlah(24);
    data4.setHarga(120000);
    data4.setGen("L");
    data4.setModel("Kemeja");
    data4.setWarna("Biru");
    
    data4.getTahun();
    data4.getJumlah();
    data4.getHarga();
    data4.getGen();
    data4.getModel();
    data4.getWarna();

    data4.display();

    Pakaian data5;
    data5.data_ke(5);
    data5.setTahun(2021);
    data5.setJumlah(33);
    data5.setHarga(120000);
    data5.setGen("L");
    data5.setModel("Kaos");
    data5.setWarna("Putih");
    
    data5.getTahun();
    data5.getJumlah();
    data5.getHarga();
    data5.getGen();
    data5.getModel();
    data5.getWarna();

    data5.display();

    Aksesoris data6;
    data6.data_ke(6);
    data6.setTahun(2022);
    data6.setJumlah(56);
    data6.setHarga(120000);
    data6.setJenis("Sabuk");
    data6.setBahan("Kain");

    data6.getTahun();
    data6.getJumlah();
    data6.getHarga();
    data6.getJenis();
    data6.getBahan();

    data6.display();

    Aksesoris data7;
    data7.data_ke(7);
    data7.setTahun(2019);
    data7.setJumlah(34);
    data7.setHarga(80000);
    data7.setJenis("Topi");
    data7.setBahan("Kulit");

    data7.getTahun();
    data7.getJumlah();
    data7.getHarga();
    data7.getJenis();
    data7.getBahan();

    data7.display();

    Sepatu data8;
    data8.data_ke(8);
    data8.setTahun(2017);
    data8.setJumlah(8);
    data8.setHarga(3000000);
    data8.setMerk("Adidas");
    data8.setUkuran(42);

    data8.getTahun();
    data8.getJumlah();
    data8.getHarga();
    data8.getMerk();
    data8.getUkuran();

    data8.display();

    cout << "-------------------------------------------------------------------------------------------------" << endl;
    getch();
}
