#include <conversions.h>

float 
convert_float_to_percent(float number) {
    return (number * 100);
}

const char*
convert_float_to_fraction(float number) {

    char* buffer = malloc(100 + 1);
    int c = 10000;
    double b = (number - floor(number)) * c;
    int d = (int)floor(number) * c + (int)(b + .5f);

    while (1) {
        if (d % 10 == 0) {
            d = d / 10;
            c = c / 10;
        }
        else break;
    }

    sprintf(buffer, sizeof(100), "%d/%d", d, c);
    return buffer;
}

float
convert_fraction_to_float(char fraction[]) {
    float whole = 0;
    float piece = 0;

    char* tokens = NULL;
    char delimit[] = " /";

    // split on space
    tokens = strtok(fraction, delimit);
    whole = (float)tokens[0] - '0';

    // split on / and divide for piece
    bool whole_obtained = false;
    while (tokens != NULL) {
        printf("%s ", tokens);
        tokens = strtok(NULL, delimit);
        if (whole_obtained) {
            float num = tokens[0] - '0';
            piece = piece / num;
            break;
        }

        piece = tokens[0] - '0';
        whole_obtained = true;
    }
    // return the whole number and piece
    return (whole + piece);
}

