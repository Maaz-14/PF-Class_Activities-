#include<stdio.h>
int main(){
	float variable_charges,uniform_quarterly_adjustments,fuel_charges_adjustment,additional_surcharge,surcharge,Electricity_Bill;
	float Units,RateOfUnit,TVL_fee,MUCT,income,Sales_Tax,electricity_duty,electricity_charges;
	printf("Enter Number of Units Consumed: ");
	scanf("%f",&Units);
	if (Units>300){
		RateOfUnit=41.89;
	}
	else{
		RateOfUnit=34.26;
	}
	variable_charges=Units*RateOfUnit;
	printf("Enter Uniform Quarterly Adjustment: ");
	scanf("%f",&uniform_quarterly_adjustments);
	printf("Enter Fuel Charges Adjustment: ");
	scanf("%f",&fuel_charges_adjustment);
	printf("Enter Additional Surcharge and Surcharge:  ");
	scanf("%f %f",&additional_surcharge,&surcharge);
	printf("Enter your income: ");
	scanf("%f",&income);
	
	if (income>=1000000){
		Sales_Tax=4000.94;
	}
	else if (income>10000){
		Sales_Tax=2059.94;	
	}
	else{
		Sales_Tax=0;
	}
	TVL_fee=35.00;
	MUCT=40.00;
	electricity_duty= 169.13;
	electricity_charges=variable_charges+uniform_quarterly_adjustments+fuel_charges_adjustment + additional_surcharge + surcharge;
	Electricity_Bill=TVL_fee + electricity_duty + variable_charges + MUCT + Sales_Tax + uniform_quarterly_adjustments + fuel_charges_adjustment + additional_surcharge + surcharge;

printf("\nYour electricity charges for the period   No.of Month(s):1\n");
printf("--------------------------------------------------\n");
printf("--------------------------------------------------\n");
printf("Variable Charges                                  %.2f\n",variable_charges);
printf("\n Uniform Quarterly Adjustment                   %.2f\n",uniform_quarterly_adjustments);
printf("\n Fuel Charges Adjustment                        %.2f\n",fuel_charges_adjustment);
printf("\n Additional Surcharge                           %.2f\n",additional_surcharge);
printf("\n Surcharge                                      %.2f\n",surcharge);
printf("--------------------------------------------------\n");
printf("\nElectricity Charges                             %.2f\n",electricity_charges);
printf("--------------------------------------------------\n");
printf("Electricity Duty                                  %.2f\n",electricity_duty);
printf("Sales Tax u/s 3(1)*                               %.2f\n",Sales_Tax);
printf("TVL fee                                           %.2f\n",TVL_fee);
printf("MUCT(KMC)                                         %.2f\n",MUCT);
printf("--------------------------------------------------\n");
printf("Taxes and Duties                                  %.2f\n",Electricity_Bill);
printf("--------------------------------------------------\n");
return 0;
}


