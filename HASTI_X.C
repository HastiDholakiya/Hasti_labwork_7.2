#include<stdio.h>
#include<conio.h>

void main(){
int i,j,k,s;
clrscr();

for(i=1;i<=5;i++){
   for(k=4;k>=i;k--){
       printf(" ");
   }
   for(j=1;j<=i;j++){
       printf("%d",j);
   }
   for(s=i-1;s>=1;s--){
      printf("%d",s);
   }
  printf("\n");
}

/*
    1
   121
  12321
 1234321
123454321
*/

getch();
}
