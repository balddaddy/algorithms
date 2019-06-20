/* ccalgor_t.ipp    Basice algorithms functions
  * Author: Charley Chang
  * Created: May 2018
  * This is free and you can do anything you want with this code
*/

# include <math.h>
# include <memory.h>
# include <cfloat>
# include <complex>

namespace __CCALG__ {

using namespace std;

/// abs of a complex double number
/// @ X: input complex number
/// return sqrt(X.real^2+X.imag^2)
/// WARNING: recommend to use std function: abs();
template<typename T> T abs2_t(complex<T> X)
{
    return sqrt(X.imag()*X.imag()+X.real()*X.real());
}

template<typename T> T add_t(T X, T Y)
{
    return X+Y;
}


}
