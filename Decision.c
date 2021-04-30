#include <stdio.h>
void main() {
int a, b;
printf("Enter two integer values : ");
scanf("%d %d", &a, &b);
printf("The lcm of two numbers %d and %d = %d\n", a, b, lcm(a, b));
}



int gcd (int a, int b)
{
if (b==0)
{
return a;
}
else
{
return gcd(b,a%b);
}
}
int lcm(int a , int b)
{
return (a*b)/gcd(a,b);
}
