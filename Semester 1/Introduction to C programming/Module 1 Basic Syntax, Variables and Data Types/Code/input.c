#include<stdio.h>
int main()
{
int a;
// integer
scanf("%d",&a);
printf("%d\n",a);

// long long integer
long long int c;
scanf("%lld",&c);
printf("%lld\n",c);

//Float
float b;
scanf("%f",&b);
printf("%.2f\n",b);

// double 
double d;
scanf("%lf",&d);
printf("%lf\n",d);

// long double 
long double e;
scanf("%lf",&e);
printf("%.10lf\n",e);

return 0;
}