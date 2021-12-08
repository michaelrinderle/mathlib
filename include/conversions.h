#ifndef CONVERSIONS_MATH_H
#define CONVERSIONS_MATH_H
#ifdef __cplusplus
extern "C" {
#endif

#include <mathlib.h>

    extern API float        MATHCALL convert_float_to_percent(float number);
    extern API const char*  MATHCALL convert_float_to_fraction(float number);
    extern API float        MATHCALL convert_fraction_to_float(char fraction[]);

#ifdef __cplusplus
}
#endif
#endif //  CONVERSIONS_MATH_H