#include <iostream>
using namespace std;
void LinearSearch(int arr[], int length, int length2, int key[]);
void BinarySearch(int arr[], int length, int key);

int main()
{
    int arr[] = {22, 32, 1, 4, 6, 4, 3, 10, 19, 12, 4, 62, 3};
    int arr2[] = {3, 4, 12};

    int arrBinary[] = {1,2,3,4,4,4,5,6,7,8};
    int lengthBinary = sizeof(arr)/sizeof(int);

    // 3 = 6, 12
    // 4 = 3 , 5, 10
    // 12 = 9

    int length = sizeof(arr)/sizeof(int);
    int length2 = sizeof(arr2)/sizeof(int);
    LinearSearch(arr, length, length2, arr2);

    BinarySearch(arrBinary, lengthBinary, 4);

    return 0;
}

void LinearSearch(int arr[], int length, int length2, int key[])
{
    int hasil;
    int counter;

    for(int i=0; i<length2; i++)
    {
        for(int j=0; j<length; j++)
        {
            if(key[i] == arr[j])
            {
                counter++;
                hasil = j;

                if(counter>1)
                {
                    cout<<", "<<hasil;
                } else
                {
                    cout<<key[i]<<" Ditemukan di index "<<hasil;
                }
            }
        }
            cout<<"\nJumlah ditemukan = "<<counter<<endl<<endl;
            counter = 0;
    }
    // cout<<counter;
}

void BinarySearch(int arr[], int length, int key)
{
    int left = 0;
    int right = length-1;
    int mid = 0;

    while(left <= right)
    {
        mid = (left + right)/2;

        if(arr[mid] == key)
        {
            cout<<"binary = "<<mid;

            if(arr[mid + 1] == key)
            {
                cout<<", "<<mid + 1;
            }

            if(arr[mid - 1] == key)
            {
                cout<<", "<<mid - 1;
            }

            break;
        } else 
        {
            if(key > mid)
            {
                left = mid+1;
            } else 
            {
                right = mid-1;
            }
        }
    }
}