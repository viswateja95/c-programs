/*print sum of all prime numbers between 1 and 25.*/
#include<stdio.h>
int checkprime(int a);
int static sum=0;
int main(){
    int a=1;

    while(a<25){
        if(a!=1){

            checkprime(a);

        }
        a++;

    }
    printf("sum of prime numbers between 1 to 25 is: \n%d",sum);

}
int checkprime(int a){
    int i=2,count=0;
    while(i<a/2){

        if(a%i==0){
            count++;
        }
        i++;
    }
    if(count<=0){
       sum=sum+a;
    }

}
