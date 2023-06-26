#include <iostream>
using namespace std;

struct Buku
{
    string buku;
    string penulis;
    int tahunTerbit;
};

void setBuku(Buku buku[], int length);
void getBuku(Buku buku[], int length);
void CariBukuByPenulis(Buku buku[], int length, string penulis);

int main()
{
    Buku buku[2];
    int length = sizeof(buku)/sizeof(buku[0]);
    cout<<length;
    setBuku(buku,length);
    getBuku(buku,length);

    string penulis = "andi";
    CariBukuByPenulis(buku,length,penulis);


    return 0;
}

void setBuku(Buku buku[], int length)
{
    for(int i=0; i < length; i++)
    {
        cout<<"Data buku\n"<<"Buku "<<i+1<<endl;
        cout<<"Judul: ";
        cin>> buku[i].buku;

        cout<<"Penulis: ";
        cin>> buku[i].penulis;
        
        cout<<"Tahun Terbit: ";
        cin>> buku[i].tahunTerbit;
        cout<<endl;
    }
}

void getBuku(Buku buku[], int length)
{
    for(int i = 0; i < length; i++)
    {
        cout << "Judul: " << buku[i].buku << endl;
        cout << "Penulis: " << buku[i].penulis << endl;
        cout << "Tahun Terbit: " << buku[i].tahunTerbit << endl;
        cout<<endl;
    }
}

void CariBukuByPenulis(Buku buku[], int length, string penulis)
{
    for(int i=0; i<length; i++)
    {
        if(buku[i].penulis == penulis)
        {
            cout<<"Buku dengan penulis: "<<penulis<<endl;
            cout<<"Judul :"<<buku[i].buku<<endl;
            cout<<"Tahun terbit :"<<buku[i].tahunTerbit;
        }
    }
}