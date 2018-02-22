#include <iostream>
#include <fstream>
#include <string>
main()
{
	int choice;
	float num1,num2;
	loop: printf("/n") 
	printf("main menu\n");
	printf("1.program Addition\n");
	printf("2.program subtraction\n");
	printf("3.program multiplication\n");
	printf("4.program Division\n");
	printf("0.Exit program \n");
	printf("================\n");
	printf("Please select choice (0-4): ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 0 :exit(0);
	}
	printf("Enter number 1=");
	printf("Enter number 2=");
	switch(choice)
{
        case 1:printf(“%.2f+%.2f=%.2f\n”,num1,num2,num1+num2);break;
		case 2:printf(“%.2f-%.2f=%.2f\n”,num1,num2,num1-num2);break;
        case 3:printf(“%.2f*%.2f=%.2f\n”,num1,num2,num1*num2);break;
        case 4:printf(“%.2f/%.2f=%.2f\n”,num1,num2,num1/num2);break;
}
      goto loop;                    /*==================== loop*/
      getch();
 }
