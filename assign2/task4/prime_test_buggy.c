#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void get_valid_number(int *n);
bool is_prime(int x);

//main() uses a sentinel controlled loop to test the primality of numbers
//, without knowing how many numbers to be tested.
// -1 is the sentinel value
// the loop repeats the cycle of read->test->process->read ...

int main()
{
    int n;
    get_valid_number(&n); //read
    while (n!=-1) { //test
        //process
        if (is_prime(n))
        {
            printf("%d is a prime number!\n", n);
        }
        else
        {
            printf("%d is not a prime number!\n", n);
        }
        
        //read again then loop back to test
        get_valid_number(&n);
    }
    return 0;
}

bool is_prime(int n)
{
    bool flag=true;
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            flag=false;
            break;
        }
    }
    return flag;

}

void get_valid_number(int * n)
{
    //The valid number is either -1 (to exit the program) or an integer greater than 2.
    //A loop is used to implement input validation, that is, user will be asked to
    //enter a valid number over and over again until a valid number is received.
    do{
   printf("Please enter an integer greater than 2 to test its primality, enter -1 to exit \n");
   scanf("%d", n);
   }while (*n <= 2 && *n != -1);
}

