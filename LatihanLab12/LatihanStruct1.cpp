#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

struct Sepeda
{
    string merk;
    string type;
    int tahun;
    string harga;
};

int main()
{
    Sepeda sepeda1;
    sepeda1.merk = "Polygon";
    sepeda1.type = "Sepeda Gunung";
    sepeda1.tahun = 2013;
    sepeda1.harga = "2.000.000";

    cout<<sepeda1.merk<<endl;
    cout<<sepeda1.type<<endl;
    cout<<sepeda1.tahun<<endl;
    cout<<sepeda1.harga<<endl;
    return 0;
}