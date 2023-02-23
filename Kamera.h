//
// Created by Marius on 2/23/2023.
//

#ifndef UNTITLED6_KAMERA_H
#define UNTITLED6_KAMERA_H

#include <iostream>
using namespace std;
class Kamera{
public:
    Kamera(int atm, string mod, string les);
    void keisti_atminties_kortele(int kiekis);
    void irasyti_i_atminti();
    void spausdintiInfo();
private:
    int atmintis;
    string modelis;
    string lesio_tipas;
    void filmuoti();
};


#endif //UNTITLED6_KAMERA_H
