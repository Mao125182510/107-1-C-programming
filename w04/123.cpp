#include<stdio.h>

int main(){


 int choice;
 int height;
 int width;
 int type;

 while(1){
    printf("Main Manu\n");
 printf("1. Rectangle\n");
 printf("2. Vertical Triangle\n");
 printf("3. Exit\n");
 printf("=>");
 scanf("%d",&choice);
 if(choice==3)break;
  switch(choice)
  {
    case 1:
        printf("Enter height and width");
        scanf("%d %d",&height,&width);
        for(int i=1;i<=height;i++){
            for(int j=1;j<=width;j++){
                if(i==1|| i==height||j==1||j==width)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }

        break;
    case 2:
        printf("Enter height and type");
        scanf("%d %d",&height,&type);

          switch(type){


         case 1:
             for(int i=1;i<=height;i++){
            for(int j=1;j<=height;j++){
                if(i==height||j==1|| i==j)printf("*");
                else printf(" ");
         }
         printf("\n");
        }


        break;

        case 2:
        for(int i=1;i<=height;i++){
            for(int j=1;j<=height;j++){
                if(i==height||j==height|| i+j==height)printf("*");
                else printf(" ");
         }
         printf("\n");
        }


        break;
    case 3:
        for (int i=1;i<=height;i++){
            for (int j=1;j<=height;j++){
                if (i==1||j==1|| i+j==height+1)printf("*");
                else printf(" ");
                            }
                            printf("\n");
        }
    case 4:
        for (int i=1;i<=height;i++){
            for (int j=1;j<=height;j++){
                if (i==1||j==height|| i==j)printf("*");
                else printf(" ");
                            }
                            printf("\n");
        }


          }



  }
 }


 return 0 ;
}
