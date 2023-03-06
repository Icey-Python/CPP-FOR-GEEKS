#include <iostream>
#include <math.h>
using namespace std;

class Circle{
    int radius;
    public:
        float findArea(int radius);
        float findCircumference(int radius);
};

//functions
float Circle::findArea(int radius){
    return (M_PI * radius * radius);
}

float Circle::findCircumference(int radius){
    return (2* M_PI * radius );
}
int main(){
    Circle circle;

    cout<<"Program to calculate area and circumference of a circle\n\n";

    cout<<"Area: "<<circle.findArea(22)<<endl;
    cout<<"Circumference: "<<circle.findCircumference(22);

    return 0;
}
