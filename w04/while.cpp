#include<stdio.h>

int leap(int year){
     if((year%4==0&&!(year%100==0))||year%400==0)
        return 1;
        else return 0;
}



int second(int hh,int mm,int ss){
        return(hh*3600+mm*60+ss);


        }

int main(){
        int choice,year,hh,mm,ss;

        while(1){
            printf("Main Manu:\n");
            printf("1.Leap year:\n");
            printf("2.timeconvert:\n");
            printf("3.Exit\n");
            printf("=>");
            scanf("%d",&choice);

            if(choice==3) break;

            switch(choice){
            case 1:
                printf("Enter year:");
	 	        scanf("%d",&year);
	 	         if((year%4==0&&!(year%100==0))||year%400==0)
		 {
	 	printf("Year %d is a leap year\n",year);
		 }
	 	else {
		 printf("Year %d is not a leap Year\n",year);
		 }
            break;

            case 2:

            printf("Enter hh:mm:ss ");
            scanf("%02d:%02d:%02d",&hh,&mm,&ss);
            printf("%02d:%02d:%02d = %d second\n",hh,mm,ss,second(hh,mm,ss));
            break;


            }
        }

        }
