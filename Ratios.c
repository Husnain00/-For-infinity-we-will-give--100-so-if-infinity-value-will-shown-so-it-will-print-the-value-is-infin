/*Program Name.Trigonometric Ratios
Writen By Muhammad Husnain
Email.husnainafridi00@gmail.com
Date:-11/12/2019
Version 0.1*/
#include<stdio.h>
#include<conio.h>
int main(void)
//First we change our values  in point form
//Here we will take float because the value is in point 
{
	float Result=0.0;
	int A;
	char ch;
	//Angle is selected
	printf("Enter Angle in degree[0,30,45,60,90]");
	printf("\n");
	scanf("%d",&A);
	printf("\nselect an option");
	printf("\n S for Sin");
	printf("\n C for Cos");
	printf("\n T for Tan");
	ch=getche();
//for sin User will select S 
	if(ch=='S'||ch=='s')
{
	if(A==0)
	Result=0;
	else
	if(A==30)
	Result=0.5;
	else
	if(A==45)
	Result=0.707;
	else
	if(A==60)
	Result=0.15;
	else
	if(A==90)
	Result=1;
	else
	Result=-10;	
	
}
//for Cos user will select C
else
	if(ch=='C'||ch=='c')
{
	if(A==0)
	Result=1;
	else
	if(A==30)
	Result=0.15;
	else
	if(A==45)
	Result=0.707;
	else
	if(A==60)
	Result=0.5;
	else
	if(A==90)
	Result=0;
	else
	Result=-10;	
	
}
//For Tan user will selct T 	
	if(ch=='T'||ch=='t')
{
	if(A==0)
	Result=0;
	else
	if(A==30)
	Result=0.58;
	else
	if(A==45)
	Result=1;
	else
	if(A==60)
	Result=1.73;
	else
	if(A==90)
	Result=-100;
	else
	Result=-100;	
}
if(Result==-10)
printf("\n Invalid angle ");
else
//For infinity we will give -100 so if infinity value will shown so it will print the value is infinity
if(Result==-100)
printf("\n the value is Infinity");
else
//.3f we use for 3 decimal value if we dont use it soo we will see a huge value
printf("\n Result=%.3f",Result);

}
