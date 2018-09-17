#include<stdio.h>
#include<math.h> 

int main(){
	int a , b , c ;
	 double x1,x2;
	
	printf("enter a b c:");
	scanf("%d %d %d",&a, &b ,&c);
	
	if (b*b - 4*a*c >=0){
		
		x1=(sqrt(b*b - 4*a*c)-b)/(a*2);
		x2=(-sqrt(b*b - 4*a*c)-b)/(a*2);
		
		printf("for equation %d x^2 %d x +%d =0, two roots are\n",a,b,c);
		printf("x1 = %.1f\n",x1);
		printf("x2 = %.1f\n",x2);
	}
	else{
		printf("no real roots");
	}
	
}
