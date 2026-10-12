#ifndef CPP_OTOMOBIL_H
#define CPP_OTOMOBIL_H
#include <iostream>
#include <string>
using namespace std;

class Otomobil {
public:
    string renk;
    string model;
    int fiyat;

    // Sadece isimleri (imzaları) yazıp bırakıyoruz
    void bilgileri_goster();
    Otomobil(string _renk, string _model, int _fiyat);
    Otomobil(); // Boş kurucu
};

#endif //CPP_OTOMOBIL_H
