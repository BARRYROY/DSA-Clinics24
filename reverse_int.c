#include <stdio.h>
#include <limits.h>  // For INT_MIN and INT_MAX

int reverse(int x) {
    long sign = (x < 0) ? -1 : 1; 
    x *= sign;  

    long reversed_x = 0;
    while (x != 0) {
        int digit = x % 10;
        x /= 10;

        reversed_x = reversed_x * 10 + digit;

        if (reversed_x > INT_MAX || reversed_x < INT_MIN) {
            return 0;  
        }
    }

    reversed_x *= sign;  

    return (int)reversed_x;
}

int main() {
    int ret = reverse(91);
    printf("Reversed: %d\n", ret); 
    return 0;
}
