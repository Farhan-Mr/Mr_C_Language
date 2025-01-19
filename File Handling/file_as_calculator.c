#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
	FILE *fptr;
	int e,ch,age;
	char name[20],gender[6],cha;
	while(true)
	{
		printf("what do you want to do now \n");
		printf("Enter 1. to read a file \n Enter 2.to create a file \n Enter 3. to update a file \n ");
		scanf("%d",&e);
		if(e==1)
		{
			fptr=fopen("info.txt","r");
			fscanf(fptr,"%c",&cha);
			while((cha=getc(fptr))!=EOF)
			{
				printf("%c",cha);
			}

			fclose(fptr);
			printf("enter 0. to terminate the program \n enter 1 to continue ");
			scanf("%d",&ch);
			if(ch==0)
			{
				exit(0);
			}
		}
		else if(e==2)
		{
			printf("enter your name,gender,age:");
			scanf("%s%s%d",&name,&gender,&age);
			fptr=fopen("info.txt","w");
			fprintf(fptr,"%s\n",name);
			fprintf(fptr,"%s\n",gender);
			fprintf(fptr,"%d\n",age);
			fclose(fptr);
			printf("enter 0. to terminate the program \n enter 1 to continue ");
			scanf("%d",&ch);
			if(ch==0)
			{
				exit(0);
			}
		}
		else if(e==3)
		{
			printf("enter your name,gender,age:");
			scanf("%s%s%d",&name,&gender,&age);
			fptr=fopen("info.txt","a");
			fprintf(fptr,"%s\n",name);
			fprintf(fptr,"%s\n",gender);
			fprintf(fptr,"%d\n",age);
			fclose(fptr);
			printf("enter 0. to terminate the program \n enter 1 to continue ");
			scanf("%d",&ch);
			if(ch==0)
			{
				exit(0);
			}
		}
	}
	return 0;
}