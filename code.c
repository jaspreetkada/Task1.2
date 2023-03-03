#include<stdio.h>
int main(){
    printf(" ✡. cm  ➺  m");
    printf("✡. mm  ➺  cm");
    printf("✡. m  ➺  cm");
    printf("✡. cm  ➺  mm");
    printf("✡. m  ➺  mm");
    printf("✡. mm  ➺  m");
    printf("✡. km  ➺  m");
    printf("✡. m  ➺  km");
    printf("✡. mm  ➺  km");
    printf("✡. km  ➺  mm");
    printf("✡. cm  ➺  km");
    printf("✡. km  ➺  cm");
    printf("✡. ft  ➺  inch");
    printf("✡. inch  ➺  ft");
    printf("✡. inch  ➺  cm");
    printf("✡. inch  ➺  mm");
    //first value
    float num1,unit1,unit2,ans1;
    printf("enter the first number");
    scanf("%f", &num1);
    printf("enter the unit you want to convert");
    scanf("%f", &unit1);
    printf("enter the unit you want to convert to");
    scanf("%f", &unit2);
    if (unit1 =='cm' && unit2 =='m'){
        printf("the value is=%f\n"num1/100);
    }
    else if(unit1 =='mm' && unit2 =='cm'){
        printf("the value is=%f\n",num1*100);
    }
    