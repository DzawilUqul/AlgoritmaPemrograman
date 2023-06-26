#include <iostream>

using namespace std;

struct Mahasiswa
{
    string nim;
    string nama;
    string jurusan;
    string tahunLulus;
};

int  main()
{
    Mahasiswa mhs[2];
    mhs[0].nim = "A11.2022.01234";
    mhs[0].nama = "Andi";
    mhs[0].jurusan = "Broadcasting";
    mhs[0].tahunLulus = "2023";

    mhs[1].nim = "A11.2022.01235";
    mhs[1].nama = "Budi";
    mhs[1].jurusan = "Broadcasting";
    mhs[1].tahunLulus = "2023";

    int length = sizeof(mhs) / sizeof(mhs[0]);

    for(int i = 0; i < length; i++)
    {
        cout << "NIM: " << mhs[i].nim << endl;
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "Jurusan: " << mhs[i].jurusan << endl;
        cout << "Tahun Lulus: " << mhs[i].tahunLulus << endl;
        cout << endl;
    }

    return 0;
}