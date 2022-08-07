//#include<stdio.h>
int fact(int n)
{
int k = 1;
for (int i = 1; i <= n; i++)
k =k * i;
return k;
}
int sumofseries(int n)
{
int sum = 0;
for (int i = 1; i <= n; i++)
{
sum = sum + fact(i) / i;
printf("%d ",sum);
}
return sum;
}
int main()
{
int n;
printf("enter a number .how many number in series: ");
scanf("%d", &n);
printf("sum of series %d", sumofseries(n));
return 0;
}
