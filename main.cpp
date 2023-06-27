#include <iostream>

using namespace std;

struct Sepeda {
    string merk,type;
    int th,hg;
};
int main()
{
    Sepeda *ptr, a;
    ptr = &a;
    cout << "enter Merk : ";
    cin >> (*ptr).merk;
    cout << "enter Type : ";
    cin >> (*ptr).type;
    cout << "enter Tahun : ";
    cin >> (*ptr).th;
    cout << "enter Harga : ";
    cin >> (*ptr).hg;
    cout << endl;

    cout << "Merk : " << (*ptr).merk << " Type : " << (*ptr).type << " Tahun : " << (*ptr).th << " Harga : " << (*ptr).hg << endl;
    return 0;
}
