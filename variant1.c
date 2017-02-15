#include<stdio.h>

int main()
{
	int sum,date;

    printf("Enter sum and date:");
    scanf("%d %d", &sum, &date);
	
	 if (date<=365 && sum>=1000){
        if (date>0 && date=30){
        sum = sum-sum*0.10;
        }
        if (date>30 && date=120){
        sum = sum+sum*0.02;
        }
        if (date>120 && date=240){
        sum = sum+sum*0.06;
        }
        if (date>240 && date=365){
        sum = sum+sum*0.12;
        }
    else{
         printf("Error");
         }
    printf("Sum: %d\n", sum)

    return 0;
}