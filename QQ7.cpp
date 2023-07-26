#include<iostream>
using namespace std;
class greatest
{
    public:
    int x,y,z;
    greatest(int a,int b,int c)
    {
        x = a;
        y = b;
        z = c;
    }
    int lnum()
    {
        int num = 0;
        (x>y)?((x>z)?(num = x):(num = z)):((y>z)?(num = y):(num = z));
        return num;
    }
};
int main()
{
    int p,q,r;
    cout << "Enter three natural numbers :-" << endl;
    cin >> p >> q >> r;
    greatest l = greatest(p,q,r);
    int d = l.lnum();
    cout << "The largest number is :- "<<d;
    return 0;
}