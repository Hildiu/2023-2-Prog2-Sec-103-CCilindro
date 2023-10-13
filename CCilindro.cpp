//
// Created by mbermejo on 13/10/2023.
//

#include "CCilindro.h"


CCilindro::CCilindro(tnumero radio, tnumero altura)
{
  this->radio = radio;
  this->altura = altura;
}

tnumero CCilindro::areaDeLaBase()
{
  return 3.1415 * radio * radio;
}

tnumero CCilindro::areaLateral()
{
  return 2*3.1415*radio*altura;
}

tnumero CCilindro::areaTotal()
{
  return 2* areaDeLaBase() + areaLateral();
}

tnumero CCilindro::volumen()
{
  return areaDeLaBase() * altura;
}