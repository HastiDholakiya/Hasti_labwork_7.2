#include<stdio.h>
#include<conio.h>

void main(){
int i,j,k;
clrscr();
for(i=1;i<=5;i++){
   for(k=1;k<=i;k++){
      printf(" ");
   }
   for(j=5;j>=i;j--){
      printf("%d",j);
   }
      printf("\n");
}
getch();
}

/*
54321
 5432
  543
   45
    5
*/