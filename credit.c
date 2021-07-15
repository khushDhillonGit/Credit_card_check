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

    if (valid_length(l))
    {

        int sum =0;
        for(int i=0;c1!=0;i++,c1/=10)
        {
            if(i % 2 == 0)
            {
                sum += c1 % 10;
            }
            else
            {
                int k = 2*(c1 % 10);
                sum += k / 10 + k % 10;
            }

        }

        //formula
        bool valid = false;
        if (sum % 10 == 0)
        {
            valid = true;
        }

        //check for valid card number
        if (valid)
        {

            if ((n >= 4e12 && n < 5e12) || (n >= 4e15 && n < 5e15))
            {
                printf("VISA");
            }
            else if (n >= 51e14 && n < 56e14)
            {
                printf("MASTERCARD\n");
            }
            else if ((n >= 34e13 && n < 35e13) || (n >= 37e13 && n < 38e13))
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }

        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }



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


