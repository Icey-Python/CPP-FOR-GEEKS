#include <iostream>
using namespace std;

class CRectangle{
    int x,y;
    public:
    void set_values(int a,int b);
    int Area(void);
    int perimeter(void);
};

//functions:
void CRectangle::set_values(int a,int b){
    x=a;
    y=b;
}

int CRectangle::Area(void){
    return x*y;
}

int CRectangle::perimeter(void){
    return 2*(x+y);
}

int main(){
    CRectangle rect,rect1,rect2;

    rect.set_values(9,13);
    rect1.set_values(20,33);
    rect2.set_values(15,48);

    cout<<"Area1: "<<rect.Area()<<endl;
    cout<<"Perimeter 1: "<<rect.perimeter()<<endl;

    cout<<"Area2: "<<rect1.Area()<<endl;
    cout<<"Perimeter 2: "<<rect1.perimeter()<<endl;

    cout<<"Area3: "<<rect2.Area()<<endl;
    cout<<"Perimeter 3: "<<rect2.perimeter()<<endl;


    return 0;
}
