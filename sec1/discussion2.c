#include <stdio.h>

void increment_by_value(int x) {
   x = x + 1;
}

int main() {
   int my_number = 1;
   increment_by_value(my_number);


   printf("my number is %d\n", my_number); // BUG:  why not two?!?!?!?!?!
}
