#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fptr;
	int rollno;
	char name[20];
	float marks;
	
	fptr=fopen("Myfile.txt","w");
	
	if(fptr == NULL)
	{
		printf("\nError!! File cannot be created");
		exit(1);
	}
	else
	{
		//Read the data
		printf("\npls enter the roll no = ");
		scanf("%d",&rollno);
		printf("\npls enter the name = ");
		scanf("%s",&name);
		printf("\npls enter the marks = ");
		scanf("%f",&marks);
		
		//write this data in file
		
		fprintf(fptr,"Roll no = %d \t",rollno);
		fprintf(fptr,"Name = %s \t",name);
		fprintf(fptr,"Marks = %f \n",marks);
		
	}
	printf("\nWriting done !!! Now Close the file");
	fclose(fptr);
}