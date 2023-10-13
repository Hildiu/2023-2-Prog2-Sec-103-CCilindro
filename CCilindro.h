//
// Created by mbermejo on 13/10/2023.
//

#ifndef INC_01_PROG1_CCILINDRO_H
#define INC_01_PROG1_CCILINDRO_H

#include <iostream>
using namespace std;

using tnumero = double;


class CCilindro
{
  private:
    tnumero radio;
    tnumero altura;
  public:
    CCilindro(){}
    CCilindro(tnumero radio, tnumero altura);
    virtual ~CCilindro() { cout << "\nMe estoy destruyendo... ";}
    tnumero areaDeLaBase();
    tnumero areaLateral();
    tnumero areaTotal();
    tnumero volumen();
    //----- metodos de acceso
    void setRadio(tnumero _radio) { radio = _radio; }
    tnumero getRadio(){ return radio; }

    void setAltura(tnumero _altura) { altura = _altura; }
    tnumero getAltura() { return altura;}
};


#endif //INC_01_PROG1_CCILINDRO_H
