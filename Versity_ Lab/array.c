#include<stdio.h>
int main() {
    int a[0],sum=0,i;
    printf("Enter the num :");
    for(i=0;i<5;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=(sum+a[i]);
    }
    printf("The sum is : %d\n",sum );
    return 0;

}