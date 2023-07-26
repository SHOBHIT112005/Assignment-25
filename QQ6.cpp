#include<iostream>
using namespace std;
class square 
{
    public :
    int n;
    square(int a)
    {
        n = a;
    }
    int sq()
    {
        int count = 0;
        cout << "The number of times this function is called :- "<< (count+1) << endl;
        return n*n;
    }
};
int main()
{
    int x;
    cout << "Enter a natural number :- " << endl ;
    cin >> x;
    square s(x);
    int y = s.sq();
    cout << "The square of " << x <<" is "<<y<<endl;
    return 0;
}