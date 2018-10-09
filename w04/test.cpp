#include<stdio.h>

int main()
{
    int cm1,cm2,cm,i;
    float kg1,kg2,kg3;
    printf("Enter height (-1 to exit):");
    while(scanf("%d %d",&cm1,&cm2))
    {
        if(cm1<0)
        {
            printf("Bye! coding by 407410892");
            return 0;
        }
        for(i=cm1;i<=cm2;i++)
        {
            cm=i*i;
            kg3=cm;
            kg3=kg3/10000;
            printf("%d cm: %.1f ~ %.1f (kg)\n",i,kg1=(18.5*kg3),kg2=(24.0*kg3));
        }
        printf("Enter height(-1 to exit):");
    }
}
