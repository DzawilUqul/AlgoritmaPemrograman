#include <iostream>
using namespace std;

int Pangkat(int x, int n);

int main()
{
    int x,n;
    cout<<"Masukkan nilai x: ";
    cin >> x;
    cout<<"Masukkan nilai n: ";
    cin >> n;
    cout<<x<<" pangkat "<<n<<" adalah "<< Pangkat(x,n) << endl;
    return 0;
}

int Pangkat(int x, int n)
{
    // 6 pangkat 4 adalah 1296
    if(n==0)
    {
        return 1;
    } 
    else 
    {
        return x * Pangkat(x,n-1);
    }
}