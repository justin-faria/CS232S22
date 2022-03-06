#include <stdio.h>  
#include <string.h> 
#include <stdlib.h>

#define NUM 30   /* number of strings */
#define LEN 1200  /* max length of each string */

void SortNames(char** Sorted, int Count)
{
  for (int j = 0; j < Count -1; j++) {
    for (int i = 0; i < Count -1; i++) {
      if (0 < strcmp(Sorted[i], Sorted[i +1])) {
        char* pchTemp = Sorted[i+1];
        Sorted[i+1] = Sorted[i];
        Sorted[i] = pchTemp;
      }
    }
  }
}
int main()
{
  char * Strings[NUM];
  int j;

 /* Write a for loop here to read NUM strings.

     Use fgets(), with LEN as an argument to ensure that an input line that is too
     long does not exceed the bounds imposed by the string's length. However, each 
	 string stored in array Strings must not waste space. That is, only the buffer
	 used by fgets() to temporary store the string read from input stream needs to 
	 be LEN bytes long.  
	 Note that the newline and NULL characters will be included in LEN.
  */
  printf("Please enter %d strings, one per line:\n", NUM);
    
  for(int i=0;i<NUM;i++){
    Strings[i] = (char*)malloc(LEN-2);
    fgets(Strings[i], LEN-2, stdin);
    
    j++;
    
    
    
  }
    
   puts("\nHere are the strings in the order you entered:");
/* Write a for loop here to print all the strings. */

    for(int i=0;i<NUM;i++){
    
    printf("%s\n",Strings[i]);
    
  }
  /* Write code here to bubble sort the strings in ascending alphabetical order

     Your code must meet the following requirements:
        (i) The comparison of two strings must be done by checking them one
            character at a time, without using any C string library functions.
            That is, write your own while/for loop to do this.
       (ii) Implement a swap function to swap two strings by swapping pointers
	    without copying any chars.You are not allowed to use any C library 
	    functions in swap.
      (iii) You are allowed to use strlen() to calculate string lengths.
  */
  /* Output sorted list */
 SortNames(Strings, NUM);
  puts("\nIn alphabetical order, the strings are:");     
 
  for(int i = 0;i<NUM;i++){
    
    printf("%s\n",Strings[i]);
  }       
        
}