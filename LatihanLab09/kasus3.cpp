#include <iostream>
using namespace std;

double Average(int n, int sum);

int main()
{
    int n;
    int sum = 0;
    int rata;
    cout<<"Masukkan nilai n :";
    cin>>n;

    rata = Average(n,sum)/n;
    cout<<"rata-rata = "<<rata;
    return 0;
}

double Average(int n, int sum)
{
    if(n==0)
    {
        return sum;
    }
    else
    {
        sum += n;
        return Average(n-1,sum);
    }
}