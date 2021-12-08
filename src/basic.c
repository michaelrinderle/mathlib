#include <math.h>
#include <basic.h>

uint
get_random(uint seed) {
    seed = (seed << 13) ^ seed;
    return ((seed * (seed * seed * 15731 + 789221) + 1376312589) & 0x7fffffff);
}

float
get_sqrt(float number) {
    int i;
    float x, y;
    x = number * 0.5;
    y = number;
    i = *(int*)&y;
    i = 0x5f3759df - (i >> 1);
    y = *(float*)&i;
    y = y * (1.5 - (x * y * y));
    y = y * (1.5 - (x * y * y));
    return number * y;
}

bool
is_prime(float number) {
    int n, i, flag = 0;

    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    return (flag == 0) ? TRUE : FALSE;
}

char*
reverse_string(char* str) {
    if (!str || !*str) return str;
    int i = strlen(str) - 1, j = 0;
    char ch;
    while (i > j)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }

    return str;
}

int
round_whole_number_at(int number, int places) {

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
    // loop over digits and look for place to round
    for (i = 0; i < num_digits; i++) {

        int num = str[i] - '0';
        // rounded, set to 0;d
        if (rounded) {
            num = 0;
        }
        else {
            if (place == i) {
                // checking digit before round place
                int num_right = str[i + 1] - '0';
                if (num_right >= 5) {
                    num++;
                }
                rounded = true;
            }
        }

        // get power to multiply digit and add to result
        int power = pow(10, num_digits - i - 1);
        result += power * num;
    }

    return result;
}

float
round_percent(float number) {
    return ((int)(number * 100 + .5) / 100.0);
}
