#include<stdio.h>
int main()
{
	int second,hour,minute;
	printf("kindly enter minutes to find total hours and second :");
	scanf("%d",&minute);
	hour=minute/60;
	second=minute*60;
	printf("total minutes are : %d \n \t so hours are %d ",minute,hour);

	printf("total minutes are %d \n \t so total seconds are %d ",minute,second);
	
	return 0;
}