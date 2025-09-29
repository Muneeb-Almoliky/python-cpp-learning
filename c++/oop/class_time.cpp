#include<iostream>
#include<string>
using namespace std;


class Time{


    public:
    int houres, minutes, secounds;

    Time(){
        houres=0;
        minutes=0;
        secounds=0;
    }
    Time(int h, int m, int s){
        houres=h;
        minutes=m;
        secounds=s;
    }

    void display(){

        cout<<"The time is :\n";
        cout<<houres<<" : "<<minutes<<" : "<<secounds<<endl;

    }
    
    void Time_sum(const Time& t1, const Time& t2){
        houres = t1.houres+t2.houres;
        minutes = t1.minutes+t2.minutes;
        secounds = t1.secounds+t2.secounds;
    }


};

int main(){

    const Time t1(10,20, 45);
    const Time t2(1,29, 02);
    Time t3;
    t3.Time_sum(t1, t2);
    t3.display();

    return 0;
}