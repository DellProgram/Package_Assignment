/*
Name: Adel Disla
Date: 11/4/2022
Description: Global Courier Services will ship your package based on how much it weighs and how far you are sending the package. 
Packages above 200 pounds will not be shipped. 
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	double weight, packageDistance, packagePrice=0, shippingCost;
	int segmentNum;
	printf("How much will your package weigh?\n");
	scanf_s("%lf", &weight);
	printf("The weight you have entered is %.2lf\n", weight);

	// If a package weighs less than 100 pounds, it will cost $10.00
	if (weight <= 100)
		packagePrice = 10.00;

	// If a package that weighs less than or equal to 200 pounds but more than 100, it will cost $20.00

	else

	{
		if (weight <= 200)
			packagePrice = 20.00;

		// It will not ship if a package weighs more than 200 pounds.

		else
			printf("The package will not be delivered. \n");
    }        
	
	// Shipping will cost the same for 500 miles.
    //This segment is for a distance of 500 miles.
	printf("How far are you sending the package? \n");
	scanf_s("%lf", &packageDistance);
	printf("The distance you entered is %.2lf\n", packageDistance);

	segmentNum = packageDistance / 500;

	if ((int)packageDistance % 500 != 0)
		segmentNum = segmentNum + 1;
	shippingCost = packagePrice*segmentNum;


	//The shipping cost 
	printf("The shipping cost is: %.2lf\n", shippingCost);

	system("pause");
}