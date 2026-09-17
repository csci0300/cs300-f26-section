#include <stdio.h>

void increment_by_one(int* x) {
   int y = *x + 1;
   x = &y;
}


int main() {
   int my_number = 1;
   int* my_number_p = &my_number;
   increment_by_one(my_number_p);

   // my_number should be 2 now
   printf("my number is %d\n", my_number);
}
