#include <stdio.h>

int main() {
    int n,temp,sum=0,pow,dig,count=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        count++;
        temp/=10;
    }
    temp=n;
    while(temp!=0){
        dig=temp%10;
        pow=1;
        for(int i=1;i<=count;i++){
            pow=pow*dig;
        }
        sum=sum+pow;
        count--;
        temp/=10;
    }
    if(sum==n){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
