#include <iostream>
using namespace std;
//class creation
class Person{

    //defining members
    char name[30]; //string name;
    int age;
//making the functions public
public:
    void setDetails(void);
    void displayDetails(void);
};

//setting the person details
void Person::setDetails(void){
    //cin an cout are objects of the iostream
    cout<<"Enter your name"<<endl;
    //cin.getline(address:char,character_count:int)
    cin.getline(name,30);
    cout<<"Enter your age"<<endl;
    cin>>age;
}

//displaying the details
void Person::displayDetails(void){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
}
int main()
{
    Person P;//object created

    P.setDetails();
    P.displayDetails();

    return 0;
}
