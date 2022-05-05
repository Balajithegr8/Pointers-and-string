#include <iostream>
using namespace std;

int main(void) {
   char str[] = "A string.";
   char *a = str;
   printf("%c ",str[0]);
   printf("%c ",*a);
   printf("%c\n",a[3]);
   a += 2;
   printf("%c ",*a);
   printf("%c ",a[2]);
   printf("%c ",a[5]);

   return 0;
}