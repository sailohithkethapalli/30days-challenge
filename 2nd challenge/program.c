                                        challenge1.c
#include <stdio.h>
int main()
{
float distance,mileage,fuel_price;
float fuel_required,total_cost;

printf("Enter distance(km):");
scanf("%f",&distance);

printf("Enter vehicle mileage (km/l):");
scanf("%f",&mileage);

printf("enter fuel price per litre:");
scanf("%f",&fuel_price);

fuel_required= distance/mileage;
total_cost=fuel_required*fuel_price;

printf("\n fuel required = %.2f litres\n",fuel_required);
printf("total fuel cost= %.2f\n", total_cost);
return 0;
}
