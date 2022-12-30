#include <iostream> 
using namespace std;
#include <stdio.h>
int main()
{
FILE *fp;
char i, a[10]="tsinghua";
static char b[10];
fp = fopen("d.txt", "w");
for(i=0; i<6; i++)
fprintf(fp, "%c", a[i]);
fclose(fp);
fp = fopen("d.txt", "r");
fseek(fp, 2, SEEK_SET);
fgets(b, 4, fp);
fclose(fp);
cout << b;
return 0;
}