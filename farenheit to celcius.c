#include<stdio. h>
int main()
{
float f,c;
printf("enter the temprature in farenheit : ");
scanf("%f",&f);
c=(f-32)*5.0/9.0;
printf("temprature in celsius: %.2f\n", c) ;
return 0;
}
