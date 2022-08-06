// Write a program which takes the cost price and selling price of a product from the
//user. Now calculate and print profit or loss percentage.
#include <stdio.h>
int main()
{
int costPrice , sellingPrice;
printf("enter amount of costprice and sellingprice");
scanf("%d%d",&costPrice,&sellingPrice);
if(sellingPrice == costPrice)
{
printf("No profit no loss ");
}
else if (sellingPrice > costPrice)
{
printf("profit");
}
else
printf("loss ");
return 0;
}
