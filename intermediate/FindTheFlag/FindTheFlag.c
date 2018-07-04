#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char flag[50]="CTF{Fl4G_F0uNd!!}";
	int input;
	printf("Please input your Password to get the flag\n");
	scanf("%d",&input);
	if(input>8113){
	  if(input<9696){
	    if(input != 6){
	      if(input + 100 < 9631){
		if(input > 8616){
		  if(input < 8618){
		  printf("Congratz,  the flag is %s",flag);
		  }
		}
	      }else printf("tehhhh");
	    }else printf("tehhhh");
	  }else printf("tehhhh");
	}else printf("tehhhh");
	return 0;
}
