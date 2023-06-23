#include<stdio.h>
int IsPrime(int n){
    if(n==2)
    return 1;
    int div;
    for(div=2;div<n;div++){
        if(n%div==0)
        {break;} 
    }
    if(div==n)
    return 1;
    else 
    return 0;
}
void SumOfPrimes(int num){
    int i;
    for(i=0;i<num;i++){
        if( (IsPrime(i)>0) && (IsPrime(num-i)>0) ){
           printf("The number can be expressed as: %d + %d\n",i,num-i);
           return;
        }
    }
    printf("No possible sum of prime\n");
}
int main(){
    SumOfPrimes(12);
    SumOfPrimes(13);
    SumOfPrimes(5);
    SumOfPrimes(24);
    SumOfPrimes(3);
    SumOfPrimes(6);
    return 0;
}