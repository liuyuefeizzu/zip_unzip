#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aa.h"

char head1[30];
char head2[30];

int aa[3]={1101,2356,1000};

void xx1(FILE *fp_in)
{char xx1[10];short int x;int y;char z;
fread(&x,1,sizeof(x),fp_in);printf("%d:",x);
fread(xx1,1,1,fp_in);

if(xx1[0] == 10){printf("%d",aa[2]);fread(&z,1,sizeof(z),fp_in);}
if(xx1[0] != 10 && xx1[0] > 0){aa[2]=aa[2]+xx1[0];printf("%d",aa[2]);fread(&z,1,sizeof(z),fp_in);}
if(xx1[0] < 0){fread(&y,1,sizeof(y),fp_in);aa[2]=y;printf("%d",aa[2]);}

fgets(xx1,10,fp_in);
}

void xx2(FILE *fp_in)
{char line2[150];char z[4];
fgets(line2,150,fp_in);
for(int i=0;i<37;i++)
{xxx2(line2[i],z);
printf("%s",z);
}
xxx2(line2[37],z);
printf("%c%c",z[0],z[1]);
}
void xx3(FILE *fp_in)
{char line3[310];
fgets(line3,310,fp_in);
for(int i=0;i<strlen(line3);i++)
{for(int j=0;j<int(line3[i]);j++){printf("%c",line3[i+1]);}
i++;
}
}
int main()
{FILE *fp_in;
fp_in= fopen("zip.bin" , "rt");
fgets(head1,30,fp_in);fgets(head2,30,fp_in);
//while(!feof(fp_in))
while(!feof(fp_in))
{  printf("%s",head1);
xx1(fp_in);
printf("%s",head2);
printf("\n");

//fread(asss,1,1,fp_in);
xx2(fp_in);
printf("\n");
printf("+");
printf("\n");
xx3(fp_in);
printf("\n");

//xx2(fp_in);
//printf("\n");
//xx3(fp_in);
//printf("\n");

}

fclose(fp_in); // close file
return 0;}


