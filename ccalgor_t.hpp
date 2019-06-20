/* ccalgor_t.hpp    basic algorithms functions head file
  * Author: Charley Chang
  * Created: May 2018
  * This is free and you can do anything you want with this code
*/
#ifndef CCALG_T_H
#define CCALG_T_H

# include <complex>

namespace __CCALG__ {
  using namespace std;

    template<typename T> T abs2_t(complex<T> X);          // abs of a complex double number
    template<typename T> T add_t(T X, T Y);
}


#include "ccalgor_t.ipp"

#endif // CCALG_H
