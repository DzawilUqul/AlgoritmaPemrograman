#include <iostream>
using namespace std;

void BinarySearch(int arr[],int size, int key);

int main()
{
    int arr[5] = {4,4,2,5,3};
    int n=5;

    bool swap = false;

    while(swap == false)
    {
        swap = true;
        for(int j=1; j<n+1 ; j++ )
        {
            if(arr[j-1] > arr[j])
            {
                swap = false;
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }

    for(int i=1;i<n+1;i++)
    {
        cout<<arr[i]<<" ";
    }

    BinarySearch(arr,n, 4);
    // cout<<endl<<"ditemukan di urutan ke : "<<hasil<<endl;
    // cout<<"ditemukan di index ke : "<<hasil - 1;

    return 0;
}

void BinarySearch(int arr[],int size, int key)
{
    int left = 0, right = size-1, mid = 0;

    while(left <= right)
    {
        mid = (left + right) / 2;

        if(arr[mid] == key)
        {
            cout<<"index ke "<<mid;
        }else if(key < arr[mid])
        {
            right = mid -1;
        } else
        {
            left = mid + 1;
        }
    }
}