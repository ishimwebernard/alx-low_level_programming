#include <stdio.h>

int main(void)
{
    long sum, first, last, evensum;
    sum = 3;
    evensum = 0;
    while(sum < 4000000){
        sum = first + last;
        first = last;
        last = sum;

        if(sum % 2 == 0)
            evensum += sum;
    }
    printf("%lu", sum);
    return (0);
}