#include "ContaCorrente.h"


ContaCorrente::ContaCorrente()
{
    //ctor
}

ContaCorrente::~ContaCorrente()
{
    //dtor
}

double ContaCorrente::getTaxaCobrada(){
    return TaxaCobrada;
}

void ContaCorrente::setTaxaCobrada(double Taxa){
    TaxaCobrada = Taxa;
}

void ContaCorrente::DescontaTaxa(){
    Debitar(TaxaCobrada);
}
