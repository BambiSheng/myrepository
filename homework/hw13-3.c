#include<stdio.h>
#include<math.h>
struct fraction
{
  long long numerator;
  unsigned long long denominator;
};
typedef struct fraction fraction;
fraction division(long long a,unsigned long long b){
  long long sign = a/(long long)fabs((double)a);
  long long a1=(long long)fabs((double)a),b1=b;

  long long c=a1%b1;
  while(c){
    a1=b1;
    b1=c;
    c=a1%b1;
  }
  fraction res={a/b1,b/b1};
  return res;
}
fraction Fra_Add(fraction f1,fraction f2){
  long long numerator;
  unsigned long long denominator;
  numerator=f1.numerator*f2.denominator+f2.numerator*f1.denominator;
  denominator=f1.denominator*f2.denominator;
  fraction res={0,0};
  if(denominator==0)
  return res; 
  res=division(numerator,denominator);  
  return res;
}
fraction Fra_Sub(fraction f1,fraction f2){
  f2.numerator=-f2.numerator;
  return Fra_Add(f1,f2);
}
double Fra_Cal(fraction f){
  if(!f.denominator){
    return 0; 
  }
  else
  return (double)f.numerator/f.denominator;
}
int main(){
  fraction ans={0,1};
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    fraction f={1,(long long)2*i-1};
    if(i%2){
      ans=Fra_Add(ans,f);
    }
    else{
      ans=Fra_Sub(ans,f);
    }
  }
  ans.numerator*=4;
  printf("%lld/%lld %lf",ans.numerator,ans.denominator,Fra_Cal(ans));
  return 0;
}
