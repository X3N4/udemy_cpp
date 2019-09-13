#include "I_Printable.h"

// single operator overloaded in printable interface and used everywhere else
std::ostream &operator<<(std::ostream &out, const I_Printable &obj){
    obj.print(out);
    return out;
}

