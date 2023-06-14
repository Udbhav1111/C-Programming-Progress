#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    FILE *fileptr1, *fileptr2;// orignal file pointer , temporary file pointer
    char file_txt_reading[10000];
    int delete_line = 0;
    
    //FILE WRITING MODE
    fileptr1 = fopen("program.txt","r");
    fileptr2 = fopen("temp____program.txt","w");
    
    
    //Selecting the deleted line from the user
	printf("Please Enter The Number of line which you want to delete: ");
	scanf("%d",&delete_line);
	
	int current_line = 1;
    int keep_reading = 1;
    do{
    	fgets(file_txt_reading,10000,fileptr1);
    	//Reading the file until file -> EOF
    	if(feof(fileptr1)){
    		keep_reading = 2;
    		
    	}
    	
    	else if(current_line != delete_line){
    		printf("Added line : %s",file_txt_reading);
			fputs(file_txt_reading,fileptr2);
			current_line++;
		}
		else{
			printf("This line has deleted---- %s",file_txt_reading);
			break;
		}
	}while(keep_reading == 1);
	
    //Closing the file
    fclose(fileptr1);
    fclose(fileptr2);
    
    //Removing the original file rename other file to orignal one
    remove("program.txt");
    rename("temp____program.txt","program.txt");
}


