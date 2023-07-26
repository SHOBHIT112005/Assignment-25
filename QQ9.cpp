#include<iostream>
using namespace std;
#define pi 3.14
class dimentions
{
    public:
    float r;
    dimentions(float a)
    {
        r = a;
    }
    float area_circle()
    {
        return (pi*r*r);
    }
};
int main()
{
    float radius;
    cout << "Enter the radius of the circle :-"<<endl;
    cin >> radius;
    dimentions d(radius);
    float area = d.area_circle();
    cout << "The are if circle with radius "<<radius<<" is "<<area<<endl;
    return 0;
}