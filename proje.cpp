#include <iostream>
#include "otomobil.h" // Sadece header'i cagirman yeterli, C++ cpp'yi arkada kendi bulur

int main() {
    // Sınıftan (Class) yeni arabalar üretiyoruz
    Otomobil araba1("Kirmizi", "Dogan SLX", 350000);
    Otomobil araba2("Beyaz", "Renault Toros", 250000);

    // Parametre vermeden boş üretirsek boş kurucu (Otomobil()) çalışır
    Otomobil araba3;

    // Arabalarin bilgilerini ekrana bas
    araba1.bilgileri_goster();
    araba2.bilgileri_goster();
    araba3.bilgileri_goster();

    return 0;
}
