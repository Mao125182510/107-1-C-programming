#include<stdio.h>

int sumodd1(int n){
    int x=0;
    for (int i=1;i<=n;i++)
        x=x+(2*i-1);
    return x;
}

int sumodd2(int n){
    int m;
    int x=0;
    m=(n+1)/2;
    for(int i=1;i<=m;i++)
        x=x+(2*i-1);
    return x;
}
int main(){
    int n;
    while(1){
        printf("Enter n:");
        scanf("%d",&n);
        if(n==-1)break;
        printf("sumodd1(%d) = %d\n",n,sumodd1(n));
        printf("sumodd2(%d) = %d\n",n,sumodd2(n));

    }
}
