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
       printf("*");
   }
   for(s=i-1;s>=1;s--){
      printf("*");
   }
  printf("\n");
}

getch();
}

/*
    *
   ***
  *****
 *******
*********
*/