#include <iostream>
using namespace std;

class Car{
    int year;
    string name;

public:
    void set_values(int a,string b);
    void calculate_car_values(int& a, int& b){
        a *=10;
        b *=10;
    }
friend void display(Car a);
};


void Car::set_values(int a, string b){
    year = a;
    name = b;
}

void display(Car a){
    cout<<a.name<<" was made in "<<a.year<<endl;
}

int main()
{
    int fuel=2,mileage=6;

    Car car1;
    car1.set_values(2019,"BMW Escalade");
    display(car1);
    car1.calculate_car_values(fuel,mileage);

    cout <<"It runs on "<<fuel/2<<" litres per km and has a mileage of "<<mileage<<" km";
    return 0;
}
