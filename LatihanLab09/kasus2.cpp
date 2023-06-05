#include <iostream>
using namespace std;

void PrintUrut(int n);

int main()
{
    int n;
    cout<<"Masukkan nilai n :";
    cin>>n;

    PrintUrut(n);

    return 0;
}

void PrintUrut(int n)
{
    if(n>=1)
    {
        PrintUrut(n-1);
        cout<<n<<" ";
    }
}