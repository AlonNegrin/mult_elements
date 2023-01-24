#include <stdio.h>


//returns the product of a,b without * operator
unsigned int mult_elements(unsigned int a, unsigned int b) {
    unsigned int result = 0;
    unsigned int count = 0;
    while (b != 0) {
        if ((b & 1) == 1) {
            result += (a << count);
        }
        b >>= 1;
        count++;
    }
    return result;
}

int main() {
    printf("%d", mult_elements(5, 9));
    return 0;
}
