#include <iostream>
using namespace std;

int CariTerbesar(int arr[], int n);

int main()
{
    int n;
    cout<<"Masukkan jumlah elemen array: ";
    cin>>n;
    int arr[n];
    cout<<"Masukkan elemen elemen array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Nilai terbesar dalam array adalah: "<<CariTerbesar(arr,n)<<endl;
    return 0;
}

int CariTerbesar(int arr[], int n)
{
    // 4 7 1 8
    // nilai terbesar: 8
    if(n==1)
    {
        return arr[0];
    }
    else
    {
        int max = CariTerbesar(arr,n-1);
        if(arr[n-1] > max)
        {
            return arr[n-1];
        }
        else
        {
            return max;
        }
    }
}