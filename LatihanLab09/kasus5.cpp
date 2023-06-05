#include <iostream>
using namespace std;

void CetakPrima(int n);

int main()
{
    int n;
    cout<<"Masukkan nilai n : ";
    cin>>n;

    cout<<"Bilangan prima dari 1 hingga "<<n<<" adalah ";
    CetakPrima(n);

    return 0;
}

void CetakPrima(int n)
{
    if (n <= 1)
    {
        return;
    }

    bool isPrime = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    CetakPrima(n - 1);

    if (isPrime)
    {
        cout << n << " ";
    }
}