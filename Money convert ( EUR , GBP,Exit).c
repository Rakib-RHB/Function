/*Create a program that converts an amount in USD to either EUR or GBP.

1. Implement a function `input_amount` that takes no arguments and returns the amount to be converted. This function should prompt the user for input.

2. Implement a function `convert_to_eur` that takes the amount as an argument and returns the equivalent amount in EUR. Use the conversion rate 0.85.

3. Implement a function `convert_to_gbp` that takes the amount as an argument and returns the equivalent amount in GBP. Use the conversion rate 0.73.
4. Display a message indicating the conversion details in the main function.

Your main program should call these functions in the following order:

- Call `input_amount` to get the amount to be converted.
- Call either `convert_to_eur` or `convert_to_gbp` based on user input to get the converted amount.
- Print the original amount, converted amount, and the currency name ("EUR" or "GBP").

Example output:
```
Enter the amount to be converted: 100
Convert to:
1. EUR
2. GBP
Enter your choice: 1

Conversion Result:
Amount: $100.00 (USD) is equivalent to €85.00 (EUR)
```



*/



#include<stdio.h>
float input_amount()
{
    float amt;
    printf("Enter the amount: ");
    scanf("%f", &amt);
    return amt;
}
float con_to_eur(float amt)
{
    return amt*.85;
}
float con_to_gbp(float amt)
{
    return amt*.73;
}
int main()
{
    while(1)
    {
        float a;
        a = input_amount();
        int choice;

        printf("Enter your choice: \n1.EUR\n2.GBP\n0.Exit");
        scanf("%d", &choice);
        if(choice==1)
        {
            float b;
            b = con_to_eur(a);
            printf("%f \n", b);
        }
        else if(choice==2)
        {
            float c;
            c = con_to_gbp(a);
            printf("%f \n", c);
        }
        else if (choice == 0)
        {
            exit(0);
        }
    }
}
