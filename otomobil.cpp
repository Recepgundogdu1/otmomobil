#include "otomobil.h"

// 1. Dolu Kurucu
Otomobil::Otomobil(string _renk, string _model, int _fiyat) {
    renk = _renk;
    model = _model;
    fiyat = _fiyat;
}

// 2. Boş Kurucu (H'ta söz verdin, burada içini doldurmak zorundasın yoksa hata verir)
Otomobil::Otomobil() {
    renk = "Belirsiz";
    model = "Belirsiz";
    fiyat = 0;
}

// 3. Bilgi Gösterme Fonksiyonu
void Otomobil::bilgileri_goster() {
    cout << "Model: " << model << " | Renk: " << renk << " | Fiyat: " << fiyat << " TL" << endl;
}
