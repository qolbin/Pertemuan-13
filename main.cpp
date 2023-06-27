#include <iostream>

using namespace std;

typedef struct mahasiswa
{
   string nama, nim, jurusan;
   int ths;
}mhs;

int main()
{
    mhs orang[5];
    int x, i;
    for (i=0;i<=4;i++){
       cout << "NIM : ";
       cin >> orang[i].nim;
       cout << "Nama : ";
       cin >> orang[i].nama;
       cout << "Jurusan : ";
       cin >> orang[i].jurusan;
       cout << "Tahun Lulus : ";
       cin >> orang[i].ths;
       cout << endl;
    }
    for (x=0;x<=4;x++){
        cout << "NIM : " << orang[x].nim << " Nama : " << orang[x].nama << " Jurusan : " << orang[x].jurusan << " Tahun Lulus : " << orang[x].ths;
        cout << endl;
    }
}
