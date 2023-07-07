#include<stdio.h>
#include<conio.h>

void main(){
int i,j,k;
clrscr();
for(i=1;i<=5;i++){
   for(k=1;k<=i;k++){
      printf(" ");
   }
   for(j=i;j<=5;j++){
      printf("%d",j%2);
   }
      printf("\n");
}
getch();
}

/*
10101
 0101
  101
   01
    1
*/