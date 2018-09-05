#include <stdio.h>
#include <memory.h>
int main()
{FILE *fp;
fp=fopen("zip.bin","rt");
char a[300];
while(!feof(fp))
{
fgets(a,300,fp);
char *p;p=a;
while(*p)
//for (int i=0;i<8;i++)
{printf("%d#",*p);p++;};
printf("\n");
memset(a,0,sizeof(a));
}

return 0;}
