#include <stdio.h>

int fizzbuzz(int a, int b){
    for(int i = a; i<= b; i++){
        if(i %3 ==0 && i % 5 ==0){
            printf("FizzBuzz\n");
        }else if(i %3 == 0){
            printf("Fizz\n");
        }
        else if(i % 5 == 0){
            printf("Buzz\n");
        }else{
            printf("%d The Number does fit the above conditions", i);
        }
    }
    return 0;

}

int main(){
    int start = 1;
    int end = 100;
    int ret = fizzbuzz(start, end);
    return 0;
}