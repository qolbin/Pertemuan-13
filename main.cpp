#include <iostream>

using namespace std;

struct hitung {
    int p,l,r,t,Lp,Ll,Vk,Vb;
};
int main()
{
    struct hitung jumlah;
    jumlah.p = 5;
    jumlah.l = 12;
    jumlah.r = 7;
    jumlah.t = 10;
    jumlah.Lp = jumlah.p * jumlah.l;
    jumlah.Vk = 1/3 * 3,14 * jumlah.r * jumlah.r * jumlah.t;
    jumlah.Ll = 22/7 * jumlah.r * jumlah.r;
    jumlah.Vb = 4/3 * 3,14 * jumlah.r * jumlah.r * jumlah.r;
    cout << jumlah.Lp << endl;
    cout << jumlah.Ll << endl;
    cout << jumlah.Vk << endl;
    cout << jumlah.Vb << endl;
}
