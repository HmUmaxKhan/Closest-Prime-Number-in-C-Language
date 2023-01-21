#include <stdio.h>// It is used to show closest prime number.

// Function to show closest prime number
int closet_prime(int num) 
{
    int i;

    if (num <= 1)
    {
        return 2;
    }
//Using for loop to show the prime number    
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            break;
        }
    }

    if (i == num)
    {
        return num;
    }

    int low = num - 1;
    int high = num + 1;
// Using while loop for closest prime number
    while (1)
    {
        for (i = 2; i < low; i++)
        {
            if (low % i == 0)
            {
                break;
            }
        }
        if (i == low)
        {
            return low;
        }

        for (i = 2; i < high; i++)
        {
            if (high % i == 0)
            {
                break;
            }
        }
        if (i == high)
        {
            return high;
        }
        low--;
        high++;
    }
}

int main()
{
    int num;
    printf("Enter a number : ");
//Taking Input from the user
    scanf("%d", &num);

    int prime = closet_prime(num);//Calling the function
    printf("The prime number closet to %d is %d\n\n", num, prime);
    return 0;
}