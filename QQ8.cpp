#include<iostream>
using namespace std;
class dimentions
{
    public:
    int x,y;
    dimentions(int a,int b)
    {
        x = a;
        y = b;
    }
    int area_rectangle()
    {
        return x*y;
    }
};
int main()
{
    int length = 0,breadth = 0;
    cout << "Enter the length and breadth of the rectangle :-"<<endl;
    cin >> length >> breadth;
    dimentions d(length,breadth);
    int area = d.area_rectangle();
    cout << "The are of a rectangle with length "<<length<<" and breadth "<<breadth<<" is "<<area;
    return 0;
}