#include <iostream>

using namespace std;

class Time{
    int hours;
    int minutes;
    int seconds;

public:
    void getTime(int h, int m,int s){
        hours = h;
        minutes = m;
        seconds =s;
    }
    void displayTime(void){
        cout<<hours<<"Hours and ";
        cout<<minutes<<"Minutes";
        cout<<seconds<<"Seconds"<<endl;
    }
    void sumTime(Time,Time);
};
//sums the minutes of both objects
void Time::sumTime(Time t1,Time t2){
    minutes = t1.minutes + t2.minutes;
    hours = minutes/60;

    minutes = minutes % 60;
    hours = hours +t1.hours+t2.hours;

    seconds = t1.seconds + t2.seconds;
    minutes = minutes + seconds/60 ;
    seconds = seconds % 60;

}

int main()
{
    Time T1,T2,T3;
    //object created

    T1.getTime(2,30,20);//init T1
    cout<<"T1: ";//map display to the object specified
    T1.displayTime();//displaying content of T1

    T2.getTime(3,45,40);//init T2
    cout<<"T2: ";//map display to the object specified
    T2.displayTime();//displaying content of T2

    T3.sumTime(T1,T2);//passing the two object as params to the sumTime function
    cout<<"T3: ";//map display to the object specified
    T3.displayTime();//Displaying the total time


    //modify the program to accept the data h:m:s from the user input (using the cin)
    return 0;
}
