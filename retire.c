//The prgram about 401(k) plan is a account for people to save money for retirement
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    //made variable according the program computation
    float initialAmount, monthlyContributionAmount, annualReturn, annualInflation, balance;
    float interest, adjustInflationReturnRate, totalInterestEarned=0;
    int retirementYear, month;
     printf("Enter the initial Amount:");
    scanf("%f",&initialAmount);
    printf("How much money you can add on monthly base(monthly amount same over life of saving):");
    scanf("%f",&monthlyContributionAmount);
    printf("Average annual rate of return(on scale 0,1):");
    scanf("%f",&annualReturn);
    printf("Average rate of inflation(on scale 0,1):");
    scanf("%f",&annualInflation);
    printf("Enter a number of year untile retirement:");
    scanf("%i",&retirementYear);
    month=retirementYear*12;