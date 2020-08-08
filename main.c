#include <stdio.h>
#include <math.h>
int addition(int add_num);
int main()
{
    int input_number = 0;
    printf("Enter any number of your choice:\n");
    scanf("%d",&input_number);
    printf("Sum of the digits of %d is %d\n",input_number,addition(input_number));
}
int addition(int add_num)
{

   // int digits = (int)log(add_num);
    if(add_num==0)
        return 0;
    else
    return (add_num%10)+addition(add_num/10);
    }
