#include<stdio.h>
long long int gcd(long long int a,long long int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
void main(){
long long int t,x,n,a,k,ans,num,den,g;
scanf("%lld",&t);
while(t--){
scanf("%lld %lld %lld",&n,&a,&k);
num=(a*n*(n-1))+((k-1)*(((n-2)*360)-(2*a*n)));
den=n*(n-1);
g=gcd(num,den);
num=num/g;
den=den/g;
printf("%lld %lld\n",num,den);
}
}
