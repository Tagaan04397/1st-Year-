#include <stdio.h>
#include <stdlib.h>

//program in C to calculate and print the Electricity bill of a given customer//

int main()
{
    int id,units;
    float chrg,surchrg,unit_chrg,total;

    printf("\nEnter ID Number:");
    scanf("%d",&id);

    printf("units Consumed by the Costumer:");
    scanf("%d",&units);
    if (units <200)
	chrg = 1.50;
   else	if (units>=250 && units<400)
		chrg = 1.60;
	else if (units>=450 && units<600)
		chrg = 1.85;
	else
		chrg = 2.00;

    unit_chrg = units*chrg;
   if (unit_chrg>600)
	surchrg = unit_chrg*10/100.0;
  total = unit_chrg+surchrg;
   if (total  < 100)
    total =100;

   printf("\n***********Electricity Bill**********\n");
   printf("\nCustomer ID Number                 :%d\n",id);
   printf("unit Consumed                      :%d\n",units);
   printf("Unit Charges @P. %4.2f  per unit    :%8.2f\n",chrg,total);
   printf("Surcharges Amount                  :%8.2f\n",surchrg);
   printf("Total Paid By the Customer         :%8.2f\n",total);

return 0;

}
