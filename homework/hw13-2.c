#include<stdio.h>
enum week{Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
int main(){
  int n;
  scanf("%d",&n);
  switch ((enum week)n)
  {
  case Monday:
    printf("Monday");
    break;
  case Tuesday:
    printf("Tuesday");
    break;
  case Wednesday:
    printf("Wednesday");
    break;
  case Thursday:
    printf("Thursday");
    break;
  case Friday:
    printf("Friday");
    break;
  case Saturday:
    printf("Saturday");
    break;
  case Sunday:
    printf("Monday");
    break;
  
  default:
    break;
  }
}