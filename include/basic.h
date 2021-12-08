#ifndef BASIC_MATH_H
#define BASIC_MATH_H
#ifdef __cplusplus
extern "C" {
#endif

#include "mathlib.h"

#define NUM_MAX 13

//int binary_hex_values[] = { 0, 1, 10, 11, 100, 101, 110, 111, 1000,
//    1001, 1010, 1011, 1100, 1101, 1110, 1111 };

enum WHOLE_PLACE_VALUE {

    ONES = 1,
    TENS = 2,
    HUNDREDS = 3,
    THOUSANDS = 4,
    TEN_THOUSANDS = 5,
    HUNDRED_THOUSAND = 6,
    MILLIONS = 7,
    TEN_MILLIONS = 8,
    HUNDRED_MILLIONS = 9,
    BILLIONS = 10,
    TEN_BILLIONS = 11,
    HUNDRED_BILLIONS = 12,
    TRILLION = 13
};

enum DECIMAL_PLACE_VALUE {
    TENTH = 1,
    HUNDREDTH = 2,
    THOUSANDTH = 3
};

extern API uint		MATHCALL	get_random(uint seed);
extern API float	MATHCALL	get_sqrt(float number);
extern API bool     MATHCALL    is_prime(uint number);
extern API char*    MATHCALL	reverse_string(char* str);
extern API int      MATHCALL    round_whole_number_at(int number, int places);
extern API float    MATHCALL    round_percent(float number);

#ifdef __cplusplus
}
#endif
#endif //  BASIC_MATH_H