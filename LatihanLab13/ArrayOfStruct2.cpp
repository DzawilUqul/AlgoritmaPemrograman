#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    int usia;
    float ipk;
};

void setMahasiswa(Mahasiswa mhs[], int jumlahMahasiswa);
void getMahasiswa(Mahasiswa mhs[], int jumlahMahasiswa);
void CariNilaiTertinggi(Mahasiswa mhs[], int jumlahMahasiswa);

int main()
{
    Mahasiswa mhs[2];
    int jumlahMahasiswa = sizeof(mhs) / sizeof(mhs[0]);
    setMahasiswa(mhs, jumlahMahasiswa);
    cout << endl;
    getMahasiswa(mhs, jumlahMahasiswa);
    cout << endl;
    CariNilaiTertinggi(mhs, jumlahMahasiswa);

    return 0;
}

void setMahasiswa(Mahasiswa mhs[], int jumlahMahasiswa)
{
    for(int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << "Nama: ";
        cin >> mhs[i].nama;
        cout << "Usia: ";
        cin >> mhs[i].usia;
        cout << "IPK: ";
        cin >> mhs[i].ipk;
    }
}

void getMahasiswa(Mahasiswa mhs[], int jumlahMahasiswa)
{
    for(int i = 0; i < jumlahMahasiswa; i++)
    {
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "Usia: " << mhs[i].usia << endl;
        cout << "IPK: " << mhs[i].ipk << endl;
    }
}

void CariNilaiTertinggi(Mahasiswa mhs[], int jumlahMahasiswa)
{
    float nilaiTertinggi = 0;
    string namaMahasiswa;
    for(int i = 0; i < jumlahMahasiswa; i++)
    {
        if(mhs[i].ipk > nilaiTertinggi)
        {
            nilaiTertinggi = mhs[i].ipk;
            namaMahasiswa = mhs[i].nama;
        }
    }

    cout<< "Nama: " << namaMahasiswa << "Nilai Tertinggi: " << nilaiTertinggi << endl;
}

