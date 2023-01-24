#include <stdio.h>


//returns the product of a,b without * operator
int mult_elements(int a, int b) {
    int result = 0;
    int count = 0;
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
