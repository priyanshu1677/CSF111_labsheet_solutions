#include<stdio.h>
int sumfact(int a){
    int i,sum=0;
    for(i=1;i<=(a-1);i++){
        int k,fact=1;
        for(k=1;k<=i;k++){
            fact=fact*k;
        }
        sum=sum + fact;
    }
    return sum;

}
int main(){
printf("%d\n", sumfact(3));
return 0;
}