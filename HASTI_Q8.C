#include<stdio.h>
#include<conio.h>

void main(){
int i,j,k,s;
clrscr();

for(i=5;i>=1;i--){
   for(k=4;k>=i;k--){
       printf("");
   }
   for(j=1;j<=i;j++){
       printf("%d",j);
   }
   for(k=i;k<=4;k++){
      printf("  ");
   }
   for(s=i;s>=1;s--){
      printf("%d",s);
   }
  printf("\n");
}

for(i=1;i<=5;i++){
   for(k=4;k>=1;k--){
       printf("");
   }
   for(j=1;j<=i;j++){
       printf("%d",j);
   }
   for(k=i;k<=4;k++){
      printf("  ");
   }
   for(s=i;s>=1;s--){
      printf("%d",s);
   }
  printf("\n");
}

getch();
}

/*
1234554321
1234  4321
123    321
12      21
1        1
1        1
12      21
123    321
1234  4321
1234554321
*/