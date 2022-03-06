#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
/* example:
 *  char str[10090];
   int ch, n = 0;

   while ((ch = getchar()) != EOF && n < 1000) {
      str[n] = ch;
      ++n;
   }

   for (int i = 0; i < n; ++i)
      putchar(str[i]);


   return 0;

 */
  int test = 0;
  printf("\nPlease Enter A Character or String\n");

  while((test = getchar())!=EOF){
    if(islower(test))
    test -= 32;
    putchar(test);
      
  }
  putchar('\n');
    return 0;
}

