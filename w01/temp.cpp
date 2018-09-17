#include <stdio.h>

int main(){
	float C, F;
	printf("enter temperature in C :");
	scanf("%f",&C);
	F= C*9/5+32;
	printf("%.1f c= %.1f F\n",C,F);
	
	
	printf("enter temperature in F:");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("%.1f f=%.1f C",F,C);
}
