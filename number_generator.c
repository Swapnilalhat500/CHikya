#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int n;
srand(time(0));
n=rand()%100+1;
printf("the number is %d\n",n);

    return 0;
}