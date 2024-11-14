#include<stdio.h>
#include<math.h>
int main(){
int choice;
double num1,num2,result;
printf("SELECT AN OPERATION:\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Logarthmic Value\n");
printf("6. Square Root\n");
printf("\n Type any number as per your choice:");
scanf("%d",&choice);

switch(choice){
    case 1:
    printf("Enter two numbers:");
    scanf("%lf %lf",&num1,&num2);
    result=num1+num2;
    printf("Result:%f\n",result);
    break;

      case 2:
    printf("Enter two numbers:");
    scanf("%lf %lf",&num1,&num2);
    result=num1-num2;
    printf("Result:%f\n",result);
    break;

  case 3:
    printf("Enter two numbers:");
    scanf("%lf %lf",&num1,&num2);
    result=num1*num2;
    printf("Result:%f\n",result);
    break;

      case 4:
    printf("Enter two numbers:");
    scanf("%lf %lf",&num1,&num2);
    if(num2!=0){
        result=num1/num2;
    printf("Result:%f\n",result);
    }else{
        printf("Division by zero is not allowed.\n");
    }
    break;

    case 5:
    printf("Enter a number:");
    scanf("%lf",&num1);
    result=log(num1);
    printf("Logarithmic Value:%f\n",result);
    break;

    case 6:
    printf("Enter a number:");
    scanf("%lf",&num1);
    if(num1>=0){
        result = sqrt(num1);
        printf("Square Root:%f\n",result);
    }else{
        printf("Square root of a negative number is not allowed.\n");
    }
    break;

    default:
    printf("INVALID CHOICE! Please Try Again.\n");
}
return 0;
}