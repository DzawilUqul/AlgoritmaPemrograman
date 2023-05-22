#include <iostream>
using namespace std;

void CetakTerbalik(int n);

int main()
{
    int n;
    cout<<"Masukkan nilai n:";
    cin>>n;
    cout<<"Deret bilangan dari 1 hingga "<<n<<" secara terbalik "<<endl;

    CetakTerbalik(n);
    return 0;
}

void CetakTerbalik(int n)
{
    // 5,4,3,2,1
    if(n >= 1)
    {
        cout<<n<<" ";
        CetakTerbalik(n-1);
    }
}