#include<iostream>
using namespace std;
class complex
{
    public : 
    int real,img;
    complex(int a,int b)
    {
        real = a;
        img = b;
    }
    void cmp()
    {
        cout << "The complex number is :- " <<real <<" + "<<img<<"i"<< endl;
    }
};
int main()
{
    int x = 0,y = 0;
    cout << "Enter two integers :- "<< endl;
    cin >> x>> y;
    complex c = complex(x,y);
    c.cmp();
    return 0;
}