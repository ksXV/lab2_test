#include <stdlib.h>
#include <stdio.h>

int function(int x){
    x = x - 2;
    //bad line >:(
    /* x = function(x); */
	return x;
}

int main(){
	int a=30, i=0;
	
    // sunt un smecher 
	while (a>0){
		a=function(a);
		i++;
	}
	printf("%d\n", i);
	return 0;	
}

