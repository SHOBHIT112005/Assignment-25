#include<iostream>
using namespace std;
class Time
{
    public : 
    int hours,minutes,seconds;
    Time(int a, int b, int c)
    {
        hours = a;
        minutes = b;
        seconds = c;
    }
    void display_time()
    {
        cout << "The current time in hr:min:sec format is :- "<<hours<<" : "<<minutes<<" : "<<seconds<<" U.T.C."<<endl;
    }
};
int main()
{
    int x = 0,y = 0,z = 0;
    cout <<"Enter in values in order, hours,minutes and seconds"<< endl;
    cin >> x >> y >> z;
    Time t = Time(x,y,z);
    t.display_time();
    return 0;
}