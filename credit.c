#include <stdio.h>
#include <cs50.h>

bool valid_length(int n);
int length(long n);
int main(void)
{
    // get card no from user
    long n = get_long("Enter credit card no: ");
    long c1 = n;
    // to find length
    int l = length(n);
    // printf("%i",l);
    // check for valid length





}

int length(long n)
{
    int i;
    for(i=0;n!=0;i++,n/=10);
    return i;

}

bool valid_length(int n)
{
    return (n > 12 && n < 17);
}


