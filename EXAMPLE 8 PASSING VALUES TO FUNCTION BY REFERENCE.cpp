#include <iostream>
using namespace std;

//Passing by reference changes the values of variables outside the function scope.
void duplicate(int& a,int& b, int& c){
    a*=2;
    b*=2;
    c*=2;
}

int main()
{
    int x =3,y=4,z=7;
    cout << "x= " << x<<" y= "<<y<<" z= "<<z<<endl;
    duplicate(x,y,z);
    cout << "x= " << x<<" y= "<<y<<" z= "<<z;
    return 0;
}
