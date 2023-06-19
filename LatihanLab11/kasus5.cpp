#include <iostream>
#include <stdio.h>
#include <string.h>


using namespace std;

int main()
{
    char a[100];
    cout<<"Masukkan string = ";
    cin.getline(a,10000);
    int length = strlen(a);
    cout<<"Pangjang string = "<<length;
    return 0;
}