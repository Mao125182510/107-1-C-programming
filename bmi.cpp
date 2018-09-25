#include<stdio.h>
#include<math.h>
int main(){
	float a,b,bmi;
	printf("Enter your height:");
	scanf("%f.2",&a);
	printf("Enter you weight:");
	scanf("%f.1",&b);
	bmi=b / (a*a);
	
	while(bmi>=0){
		if(bmi<18.5) printf("you are underweight people\n");
		else if (bmi>=18.5 && bmi<24) printf("you are normal\n");
		else if (bmi>=24 && bmi <27)printf("you are overwigh\n");
		else if (bmi>=27 && bmi <30)printf("you are mild obesity\n");
		else if (bmi>=30 && bmi <35)printf("you are moderate obesity\n");
		else  printf("you are severe obesity\n");
		printf("Enter your height:");
	    scanf("%f.2",&a);
	    printf("Enter you weight:");
	    scanf("%f.1",&b);
		
		
	}
	
}
