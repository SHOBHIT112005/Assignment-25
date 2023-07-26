#include<iostream>
#define pi 3.14
using namespace std;
class dimentions
{
    float x,y;
    public:
    dimentions(float a,float b = 0)
    {
        x = a;
        y = b;
    }
    float area_rectangle()
    {
        return x*y;
    }
    float area_circle()
    {
        return (pi*x*x);
    }
    float area_square()
    {
        return x*x;
    }
};
int main()
{
    float n;
    cout<<"Choose the option :-"<<endl<<"1)Area of rectangle"<<endl<<"2) Area of circle"<<endl<<"3)area of square"<<endl;
    cin >> n;
    if(n==1)
    {
        float p,q;
        cout << "Enter length :-"<<endl;
        cin >> p;
        cout << "Enter breadth :-" << endl;
        cin >> q; 
        dimentions d(p,q);
        float area = d.area_rectangle();
        cout << "Area of rectangle is "<<area<<endl;
    }
    else if(n==2)
    {
        float r;
        cout << "Enter the radius :-"<<endl;
        cin >> r;
        dimentions d(r);
        float area = d.area_circle();
        cout << "Area of circle is :- "<<area<<endl;
    }
    else if(n==3)
    {
        float s;
        cout <<"Enter the side of the square:-"<<endl;
        cin >> s;
        dimentions d(s);
        float area = d.area_square();
        cout <<"Area of the square is :- "<<area<<endl;
    }
    else 
    {
        cout <<"Invalid option selected"<<endl;
    }
    return 0;
}
