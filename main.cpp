//---------------------------------------------
//-- Dato de Entrada:  radio, altura (double)
//-- Dato de Salida:  areaDeLaBase
//--                  areaLateral
//--                  areaTotal
//--                  volumen  (double)
//------------------------------------------------

#include "CCilindro.h"

int main()
{  tnumero r, h;

    cout << "Radio : "; cin >> r;
    cout << "Altura: "; cin >> h;

    CCilindro objeto(r,h);
    cout << "Area de la base : " << objeto.areaDeLaBase() << "\n";
    cout << "Area lateral    : " << objeto.areaLateral() << "\n";
    cout << "Area Total      : " << objeto.areaTotal() << "\n";
    cout << "Volumen         : " << objeto.volumen() << "\n";

    cout << "\nCreamos un segundo objeto de la clase CCilindro\n";
    CCilindro objeto2;    //---- costructor por defecto

    cout << "Radio : "; cin >> r;
    cout << "Altura: "; cin >> h;
    objeto2.setRadio(r);
    objeto2.setAltura(h);
    cout << "Area de la base : " << objeto2.areaDeLaBase() << "\n";
    cout << "Area Lateral    : " << objeto2.areaLateral() << "\n";
    cout << "Area Total      : " << objeto2.areaTotal() << "\n";
    cout << "Volumen         : " << objeto2.volumen() << "\n";

    //---- ahora creamos un objeto dinamico  necesitamos un puntero pObj3
    cout << "Radio : "; cin >> r;
    cout << "Altura: "; cin >> h;

    CCilindro  *pObj3 = new CCilindro(r,h);

    cout << "Area de la base: " << (*pObj3).areaDeLaBase() << "\n";
    cout << "Area Lateral   : "  << (*pObj3).areaLateral() << "\n";

    cout << "Area Total     : "  <<  pObj3->areaTotal() << "\n";
    cout << "Volumen        : "  <<  pObj3->volumen() << "\n";

    delete pObj3;

    return 0;
}
