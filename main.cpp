#include "Kamera.h"




int main() {

    Kamera philips(256, "Philips Xa1", "isgaubtas");
    philips.irasyti_i_atminti();
    philips.spausdintiInfo();

    Kamera cannon(512, "PCannon 8795A", "Nano mano");
    cannon.spausdintiInfo();
    cannon.irasyti_i_atminti();
    cannon.keisti_atminties_kortele(1024);
    cannon.spausdintiInfo();


    return 0;
}
