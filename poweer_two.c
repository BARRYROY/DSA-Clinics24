#include <stdio.h>

int power_two(int x) {
    if (x <= 0) {
        return 0; 
    }
    
    while (x != 1) {
        if (x % 2 != 0) {
            return 0;  
        }
        x = x / 2; 
    }
    
    return 1;  
}

int main() {
    int x = 6;
    int y = 8;
    int z = 5;
    int a = 32;
    //int ret = power_two(x);
    //int ret = power_two(y);
    //int ret = power_two(z);
    int ret = power_two(a);
    
    if (ret) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }
    
    return 0;
}
