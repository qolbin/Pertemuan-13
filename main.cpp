#include <iostream>

using namespace std;

struct sepeda{
    string merk,type;
    int tahun;
    int harga;
};
int main()
{
    sepeda sper;
    sper.merk = "Polygon";
    sper.type = "Sepeda Gunung";
    sper.tahun = 2013;
    sper.harga = 2000000;
    cout << "Merk :" << sper.merk << endl;
    cout << "Type :" << sper.type << endl;
    cout << "Tahun :" << sper.tahun << endl;
    cout << "Harga :" << sper.harga << endl;
    return 0;
}
