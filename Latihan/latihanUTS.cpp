#include <iostream>
using namespace std;
int* BubbleSort(int* arr, int n);
void FungsiTampil(int arr[], int length);

int main()
{
    int arr[] = {3,1,4,5,2};
    int length = sizeof(arr)/sizeof(int);

    int* arrHasil = BubbleSort(arr, length);
    FungsiTampil(arrHasil, length);

    return 0;
}

int* BubbleSort(int* arr, int n)
{
    bool swap = false;

    while(swap == false)
    {
        swap = true;
        for(int j=1; j<n ; j++ )
        {
            if(arr[j-1] > arr[j])
            {
                swap = false;
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr;
}

void FungsiTampil(int arr[], int length)
{
    for(int i=0; i<length; i++)
    {
        for(int j=0; j<arr[i]; j++)
        {
            cout<<"I";
        }
        
        for(int k=i; k<length; k++)
        {
            cout<<" ";
        }

        

        cout<<" ["<<arr[i]<<"] "<<endl;
    }


}