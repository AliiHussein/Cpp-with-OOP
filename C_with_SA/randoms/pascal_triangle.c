#include <stdio.h>

void main(){
	int range, horz, ver;
	
	printf("Enter a range: ");
	scanf("%d", &range);
	
	horz = range+2;
	ver = range;
	
	for(char i = 1; i <= ver; i++){
		for(char j = 0; j < range; j++){
			if(j > ((horz/2)-i) && j < ((horz/2)+i)){
				printf("1");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

/*  C program to print Pascal triangle using For Loop  

Enter the no. of lines: 8

       1
      1 1
     1 2 1
    1 3 3 1
   1 4 6 4 1
  1 5 10 10 5 1
 1 6 15 20 15 6 1
1 7 21 35 35 21 7 1

Process returned 0

*/