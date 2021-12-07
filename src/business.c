#pragma once
#include <math.h>
#include <business.h>

API int MATHCALL round_whole_number_at(int number, int places) {

    // convert number to string & get length
    char str[NUM_MAX];
    sprintf(str, "%d", number);
    int num_digits = strlen(str);
    int result = 0;
    bool rounded = false;

    int place = num_digits - places;

    // check if places to left if too large
    if (places > num_digits) return NULL;

    int i;
    for (i = 0; i < num_digits; i++) {

        int num = str[i] - '0';
        if (rounded) {
            num = 0;
        }
        else {
            if (place == i) {
                int num_right = str[i + 1] - '0';
                if (num_right >= 5) {
                    num++;
                }
                rounded = true;
            }
        }

        int power = pow(10, num_digits - i - 1);
        result += power * num;
    }

    return result;
}