//program to show if one qualifies for loan
/*
author James Kamau
Date 1/10/2024
*/
#include <stdio.h>
#include<conio.h>
int main (void) {
  int age;
  float annualincome;
  
  printf("Enter your age \n");
  scanf("%d",&age);
  
  printf("Enter your annualincome\n");
  scanf("%f",& annualincome);
  
  
  
   if(age>=21 && annualincome>=21000) 
   {
   printf("Congratulations you qualify for a loan");
   
   }
   
    else
   {
   printf("unfortunately ,we are unable to offer you a loan at this time");
   
   }
   






 return 0;



}
    
