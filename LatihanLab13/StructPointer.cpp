#include <iostream>

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
    Sepeda sepeda;
    Sepeda* pSepeda = &sepeda;

    pSepeda->merk = "Polygon";
    pSepeda->type = "Sepeda Gunung";
    pSepeda->tahun = 2013;
    pSepeda->harga = "2.000.000";

    cout << "Merk Sepeda: " << pSepeda->merk << endl;
    cout << "Type Sepeda: " << pSepeda->type << endl;
    cout << "Tahun Sepeda: " << pSepeda->tahun << endl;
    cout << "Harga Sepeda: " << pSepeda->harga << endl;

    return 0;
}