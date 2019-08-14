#include <local/test.h>
#include <stdio.h>
void f(void)
{
    printf("First:  %d\n",first_function(1));
    printf("Second: %d\n",second_function(1));
    printf("Third:  %d\n",third_function(1));
}

int main()
{
    f();
    return 0;
}