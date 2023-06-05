#include <iostream>
using namespace std;

void PrintEvenNumber(int n);

int main()
{
    int n;
    cout<<"Masukkan Nilai n:";
    cin>>n;

    cout<<"Deret angka genap dari 2 hingga "<<n<<" adalah: ";
    if(n%2 == 0)
    {
        PrintEvenNumber(n);
    }
    else
    {
        PrintEvenNumber(n-1);
    }
    

    return 0;
}

void PrintEvenNumber(int n)
{
    // 10
    // 2 4 6 8 10
    if(n>1)
    {
        PrintEvenNumber(n-2);
        cout<<n<<" ";
    }
}