#include <iostream>
using namespace std;
void BubbleSort(int arr[],int n);
int* BubbleSortReturn(int arr[],int n);

int main()
{
    int arr[] = {5,4,1,3,2};
    int arr2[] = {50,40,10,30,20};
    int n = sizeof(arr)/sizeof(int);

    // Pemanggilan fungsi void
    BubbleSort(arr, n);

    // Pemanggilan fungsi return
    int *arrReturn = BubbleSortReturn(arr2,n);
    for(int i=1; i<n+1;i++)
    {
        cout<<arrReturn[i]<<" ";
    }

    return 0;
}   

/*====================================
 *Fungsi Void Bubble Sort 
======================================*/
void BubbleSort(int arr[],int n)
{
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

    for(int i=1; i<n+1; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}

/*====================================
 *Fungsi Return Bubble Sort 
======================================*/
int* BubbleSortReturn(int arr[],int n)
{
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
    return arr;
}