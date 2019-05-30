#include "counter.h"

void counter::setValue(int value)
{
    if(value!=m_value){
        m_value = value;
        emit valueChanged(value);
    }
}
