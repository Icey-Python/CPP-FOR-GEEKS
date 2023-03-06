#include <iostream>

using namespace std;

class Sample{
int a,b;
public:
    void setvalue(void){
    a=25;
    b=40;
    }
friend float mean(Sample s);
};

float mean(Sample s){
    /*mean*/
    return float(s.a + s.b)/2.0; //type-casting
}

int main()
{
    Sample sample1;
    sample1.setvalue();
    cout << "Mean is = "<< mean(sample1);
    return 0;
}
