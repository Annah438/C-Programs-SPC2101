/*
Name:Muthoki Anah
Reg no;CT100/G/26264/25
Description:students eligibility tosit an exam
*/

#include<stdio.h>
int main(){

float attendance,averagemarks;
//input attendancepercentage and averagemarks
  printf("enter attendancepercentage::");
  scanf("%f,&attendance");
  
  printf("enter averagemarks:");
  scanf("%f, &averagemarks");
 if (attendance<=80&&averagemarks>=50)
 {
 
  printf("eligible");
  }
  else
  {
  printf("not eligible");
  }
  return 0;
  }