#include<iostream>
using namespace std;
class reversenumber
{
    public:
    int N;
    reversenumber(int a)
    {
        N = a;
    }
    int revnum()
    {
        int w = 0,t = 0;
        while(N>0)
        {
            t = N%10;
            w = w*10 + t;
            N = N/10;
        }
        return w;
    }
};
int main()
{
    int x = 0;
    cout << "Enter the number :- "<< endl;
    cin >> x;
    reversenumber r(x);
    int z = r.revnum();
    cout << "The reverse if the entered number is :- " << z;
    return 0;
}