//
// Created by Marius on 2/23/2023.
//

#include "Kamera.h"

Kamera::Kamera(int atm, string mod, string les) {
    atmintis = atm;
    modelis = mod;
    lesio_tipas = les;
}

void Kamera::keisti_atminties_kortele(int kiekis) {
    atmintis = kiekis;
}

void Kamera::irasyti_i_atminti() {
    filmuoti();
}

void Kamera::spausdintiInfo() {
    cout << modelis << " " << atmintis << " lesio tipas" << lesio_tipas << endl;
}

void Kamera::filmuoti() {
    cout << "Filmuoju: ";
}
