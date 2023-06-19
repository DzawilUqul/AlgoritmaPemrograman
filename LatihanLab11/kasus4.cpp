#include <iostream>
#include <stdio.h>
#include <string.h>


using namespace std;

int main()
{
    char a[10] = "Hello ";
    char b[10] = "World";
    int length = strlen(a) + strlen(b);
    cout<<length<<endl;

    char* c = new char[length];
    strcpy(c,a);
    strcat(c,b);
    cout<<c;

    return 0;
}



