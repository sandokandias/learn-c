#include <stdio.h>

#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {
    BOOL its_true = TRUE;
    BOOL its_false = FALSE;
    int ten = 10;
    printf("TRUE is %d \n", its_true);
    printf("FALSE is %d \n", its_false);
    printf("TEN is %d \n", ten);
    return 0;
}
