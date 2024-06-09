using namespace std;
#include <iostream>
#include <cmath>
#include <vector>

double ortalamaBul(const vector<int>& sayilar) {
    int toplam = 0;
    for (int sayi : sayilar) {
        toplam += sayi;
    }
    return static_cast<double>(toplam) / sayilar.size();
}

double standartSapmaBul(const vector<int>& sayilar, double ortalama) {
    double toplamKareFark = 0.0;
    for (int sayi : sayilar) {
        toplamKareFark += pow(sayi - ortalama, 2);
    }
    return sqrt(toplamKareFark / sayilar.size());
}

int main() {
    setlocale(LC_ALL, "Turkish");
    int n;
    cout << "Kaç adet sayı gireceksiniz? ";
    cin >> n;

    vector<int> sayilar(n);
    for (int i = 0; i < n; ++i) {
        cout << "Lütfen " << i + 1 << ". sayıyı giriniz: ";
        cin >> sayilar[i];
    }

    double ortalama = ortalamaBul(sayilar);
    double standartSapma = standartSapmaBul(sayilar, ortalama);

    cout << "Ortalamanız: " << ortalama << endl;
    cout << "Standart Sapmanız: " << standartSapma << endl;

    return 0;
}
