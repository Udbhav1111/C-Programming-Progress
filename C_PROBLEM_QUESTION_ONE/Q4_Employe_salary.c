#include <stdio.h>
void main(){
	int id,work_hour,amount_perH;
	float salary;
	printf("Enter the Employee id: ");
	scanf("%d",&id);
	
	printf("Enter the Employee Woking_hour: ");
	scanf("%d",&work_hour);
	
	printf("Enter the Employee Amount Recived per_Hour: ");
	scanf("%d",&amount_perH);
	salary = amount_perH*30/365*1/24*work_hour;
	
	printf("The total salary of employe is %.2f Lakhs",salary);
	
}
