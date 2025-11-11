#include<stdio.h>
#include<conio.h>

void main(){
	   int i,j,sk;
	clrscr();
	printf("\t menu:\n 1.right angled trigle \n 2.inverted triagle \n 3.square patten \n 4.exit");
   do{
      printf("\n enter the case :");
      scanf("\n %d",&sk);

      switch(sk){
      case 1;
      for(i=1;i<5;i++){
	  for(j=1;j<=1;j++){
	  printf("*");
      }
      printf("\n");
      }
      break;
      case 2:
	    for(i=5;i>0;i--){
		for(j=1;j<=1;j++){

		   printf("*");
		}
		 printf("\n");
	    }
	 break;
	 case 3:
	 for(i=1;i<=5;i++){
	    for(j=1;j<=5;j++){
		printf("*");
	    }
	   printf("\n");
	 }
	  break;
	  case 4:
	  printf("\t \n  exit");
	  break;
      }
      //switch
   }
   while(sk!=4);

getch();
}