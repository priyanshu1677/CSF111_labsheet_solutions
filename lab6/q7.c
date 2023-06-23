#include<stdio.h>
#include<math.h>
int DecimaltoBinary(int dec){
    int temp=dec,i;
    for(i=0;temp>1;i++){
        temp=temp/2;
    }
    int sum= pow(10,i),b;
    for(b=0;b<i;b++){
        int a = dec%2;
        int pw= pow(10,b);
        sum= sum + a*pw ;
        dec= dec/2;
    }
    return sum;
}
int main(){
    int k = DecimaltoBinary(65);
    printf("%d",k);
    return 0;
}