#include <stdio.h>
int zhuan_zheng (char a[])
{
//char a[7]={'2','1','4','3'};
char *p=a;
while(*p)p++;p--;
//printf("%c",*p);

int m=0;
int n=1;
while(*p)
{
m=m+(*p-48)*n;//printf("%d\n",m);
n=n*10;
p--;
}
int b=2143;
//printf("%d",a);
//printf("%d",m);
return m;}

//   jie_ma_uncode_part
char un_atcg(int a)
{if(a==0)
return 'A';
if(a==1)
return 'T';
if(a==2)
return 'C';
if(a==3)
return 'G';
else return 'N';
}

void xxx2(char a,char z[4])
{char base='1'-46;
z[0]=un_atcg(int(((base << 6) & a) >> 6));
z[1]=un_atcg(int(((base << 4) & a) >> 4));
z[2]=un_atcg(int(((base << 2) & a) >> 2));
z[3]=un_atcg(int(((base << 0) & a) >> 0));
}


