#include <iostream>
using namespace std;

void CetakKelipatan5(int n, int i);

int main()
{
    int n;
    cout<<"Masukkan nilai n :";
    cin>>n;

    CetakKelipatan5(n,0);
    return 0;
}

void CetakKelipatan5(int n, int i)
{
    // n: 25
    // 5 10 15 20 25
    if(i <= n)
    {
        if(i!=0)
        {
            cout<<i<<" ";
        }
        CetakKelipatan5(n,i+5);
    }
}