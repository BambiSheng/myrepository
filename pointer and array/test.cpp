#include<stdio.h>
#include<math.h>
int main(){
  double n=99;
  double ans;
  for(int i=1;i<=n;i++){
    ans+=1/(sqrt(n)+sqrt(i));
  }
  ans*=1/sqrt(n);
  printf("%lf",ans);
}