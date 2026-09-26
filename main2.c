/* main2.c */
#include <stdio.h>
#include "palindrome.h"

int main(void)
{
    printf("palindrome (\"cat\") = %s\n", palindrome("cat") ? "ναι" : "όχι");
    printf("palindrome (\"noon\") = %s\n", palindrome("noon") ? "ναι" : "όχι");
    return 0;
}
