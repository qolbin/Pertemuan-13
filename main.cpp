#include <iostream>
using namespace std;

typedef struct {
    double panjang;
    double lebar;
} PersegiPanjang;

typedef struct {
    double jari;
} Lingkaran;

typedef struct {
    double jari;
    double tinggi;
} Kerucut;

double HitungLuasPersegiPanjang(const PersegiPanjang& persegiPanjang) {
    return persegiPanjang.panjang * persegiPanjang.lebar;
}

double HitungLuasLingkaran(const Lingkaran& lingkaran) {
    const double PI = 3.14159;
    return PI * lingkaran.jari * lingkaran.jari;
}

double HitungVolumeLingkaran(const Lingkaran& lingkaran) {
    const double PI = 3.14159;
    return (4.0 / 3.0) * PI * lingkaran.jari * lingkaran.jari * lingkaran.jari;
}

double HitungVolumeKerucut(const Kerucut& kerucut) {
    const double PI = 3.14159;
    return (1.0 / 3.0) * PI * kerucut.jari * kerucut.jari * kerucut.tinggi;
}

int main() {
    PersegiPanjang persegiPanjang;
    cout << "Masukkan panjang persegi panjang: ";
    cin >> persegiPanjang.panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> persegiPanjang.lebar;

    Lingkaran lingkaran;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> lingkaran.jari;

    Kerucut kerucut;
    cout << "Masukkan jari-jari kerucut: ";
    cin >> kerucut.jari;
    cout << "Masukkan tinggi kerucut: ";
    cin >> kerucut.tinggi;

    double luasPersegiPanjang = HitungLuasPersegiPanjang(persegiPanjang);
    double luasLingkaran = HitungLuasLingkaran(lingkaran);
    double volumeLingkaran = HitungVolumeLingkaran(lingkaran);
    double volumeKerucut = HitungVolumeKerucut(kerucut);

    cout << "Luas persegi panjang: " << luasPersegiPanjang << endl;
    cout << "Luas lingkaran: " << luasLingkaran << endl;
    cout << "Volume lingkaran: " << volumeLingkaran << endl;
    cout << "Volume kerucut: " << volumeKerucut << endl;

    return 0;
}
