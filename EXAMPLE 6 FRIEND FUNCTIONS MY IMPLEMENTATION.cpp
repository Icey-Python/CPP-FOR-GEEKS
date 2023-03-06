#include <iostream>
using namespace std;

class People{
string name;
int age;

public:
    void set_details(int,string);

friend void display_details(People s);
}person;

void People::set_details(int a, string b){
    name = b;
    age = a;
}

void display_details(People s){
    //in order to display the persons details we have to pass the object we are referring to  as the parameter/argument to this function
    cout <<s.name<<" is "<<s.age<<" years old"<<endl;
}
int main()
{
    person.set_details(21,"Bob");
    display_details(person);
    return 0;
}
