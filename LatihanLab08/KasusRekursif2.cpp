#include <iostream>
using namespace std;

int JumlahDeret(int n);

int main()
{
    int n;
    cout<<"Masukkan nilai n: ";
    cin>> n;
    cout<<"Jumlah deret bilangan 1 hingga "<<n<< " adalah "<< JumlahDeret(n);
    return 0;
}

int JumlahDeret(int n)
{
    // 5 4 3 2 1
    // 15
    if(n == 1)
    {
        return 1;
    }
    else 
    {
        return n + JumlahDeret(n-1);
    }
}