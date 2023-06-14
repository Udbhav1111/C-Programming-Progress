#include <stdio.h>
void main(){
	int option,cal_num,result;
	printf(" -- Choose What You want to do? -- \n 1 - km to Miles \n 2 - Inches to Foot \n 3 - Cm to Inch \n 4 - Pounds to Kg \n 5 - Inches to Meter \nEnter your choice: ");
	scanf("%d",&option);
	
	switch(option){
		case 1:
			printf(" -- Please Write Only Interger Value of KM -- \n Enter the Number: ");
			scanf("%d",&cal_num);
			printf("\n%d KM is %f Miles",cal_num,cal_num*0.62137119);
			break;
			
		case 2:
			printf(" -- Please Write Only Interger Value of INCH -- \n Enter the Number: ");
			scanf("%d",&cal_num);
			printf("\n%d Inch is %d Foot",cal_num,cal_num/12);
			break;
			
		case 3:
			printf("  -- Please Write Only Interger Value of CM -- \n Enter the Number: ");
			scanf("%d",&cal_num);
			printf("\n%d CM is %f Inch",cal_num,cal_num/2.54);
			break;
		case 4:
			printf("  -- Please Write Only Interger Value of Pounds -- \n Enter the Number: ");
			scanf("%d",&cal_num);
			printf("\n%d Pounds is %f Kg",cal_num,cal_num*0.45359237);
			break;
		case 5:
			printf("  -- Please Write Only Interger Value of Inches -- \n Enter the Number: ");
			scanf("%d",&cal_num);
			printf("\n%d Inches is %f Meter",cal_num,cal_num*0.0254);
			break;
		default:
			printf("** Invalid Choice ** ");
	}
	
}
