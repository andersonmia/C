#include<stdio.h>
int main(){
	const float minimum_base_salary = 2000.00;
	const float healthInsurance = (5/100)*minimum_base_salary;
	const float allowance = (5/100)*minimum_base_salary;	
	int numberOfEmployees;
	float income,bonus,grossSalary,totalGross,tax,totalTax;	
	printf("Enter the number of employess: ");
	scanf("%d",numberOfEmployees);	
	printf("Enter the monthly income: ");
	scanf("%f",&income);	
	bonus = (7/100)*income;
	grossSalary = income + bonus + healthInsurance + allowance;
	totalGross = grossSalary*numberOfEmployees;	
	if(totalGross<minimum_base_salary){
		printf("Not enough salary for this month");
	}else{
		printf("\nThe gross salary for each employee is: %.2f",grossSalary);
		printf("\nThe total gross salary for all employees is: %.2f",totalGross);
		tax = grossSalary*(15/100);
		totalTax = tax * numberOfEmployees;
		printf("\nThe tax for each employee is: %.2f",tax);
		printf("\nThe total tax to be charged for all employees is: %.2f",totalTax);
	}
	
	return 0;
}
