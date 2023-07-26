#include<iostream>
using namespace std;
class factorial
{
    public :
    int N;
    factorial(int a)
    {
        N = a;
    }
    int fac()
    {
        int x = 1,result = 1;
        while(x<=N)
        {
            result = result*x;
            x = x+1;
        }
        return result;
    }
};
int main()
{
    int z;
    cout << "Enter the number :- " << endl;
    cin >> z;
    factorial f(z);
    int y = f.fac();
    cout << "The factorial of entered number is :- "<<y<<endl;
    return 0;
}