#include <iostream>
#include <exception>

using namespace std;

class Time{
    private:
        int hour, minute, second;
    public:
        // set new Time value using universal time
        void setTime(int, int, int);

        Time(int a, int b, int c){
            setTime(a,b,c);
        }

        void sum(Time c1, Time c2);

        void print(){
            cout << "Hour\tMinute\tSecond\n";
            cout << hour << "\t" << minute << "\t" << second;
        }
};

void Time::setTime(int h, int m, int s){
    // validate hour, minute, and second
    if((h >= 0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)){
        hour = h;
        minute = m;
        second = s;
    } // end if
    else
        throw invalid_argument("hour, minute and/or second was out of range");
} // end function setTime

void Time::sum(Time c1, Time c2){
    hour = c1.hour + c2.hour;
    minute = c1.minute + c2.minute;
    second = c1.second + c2.second;
}

int main(){
    cout << endl;
    try
    {
        Time t5( 27, 74, 99 ); // all bad values specified -> bisa diubah sesuai kondisi pada if jika ingin melewati exception
        Time t6( 3, 10, 30 ); 

        Time t7(0, 0, 0);
        t7.sum(t5,t6);
        t7.print();
    }
    catch( invalid_argument &e )
    {
        cout << "\n\nException while initializing t5: " << e.what() << '\n';
    }

    cout << endl;
    
}