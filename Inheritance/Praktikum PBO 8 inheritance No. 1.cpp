#include <iostream>
#include <conio.h>

using namespace std;

class student{
    protected:
        int roll_number;
    public:
        int student;  
        void get_number(){
            cout << "masukkan roll number: ";
            cin >> roll_number;
        }
        void put_number(){
            cout << "roll number: " << roll_number << endl;
        }
};

class test:public student{
    protected:
        float sub1;
        float sub2;
    public:
        void get_marks(){
            cout << "masukkan marks untuk subjek 1: ";
            cin >> sub1;
            cout << "masukkan marks untuk subjek 2: ";
            cin >> sub2;
        }
        float put_marks1(){
            return sub1;
        }
        float put_marks2(){
            return sub2;
        }
        
};

class result:private test{
    float total;
    public:
        void display(){
            get_marks();
            total = put_marks1() + put_marks2();
            cout << "total = " << total;
        }
};

int main(){
    result student1;
    student1.display();
    getch();
    return 0;
}