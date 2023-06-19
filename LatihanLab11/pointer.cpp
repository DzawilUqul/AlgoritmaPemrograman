#include <iostream>

using namespace std;

int main()
{
    int* a = new int[10000000];
    for(int i=0; i<10000000000000; i++)
    {
        cout<<a[i];
    }

    return 0;
}