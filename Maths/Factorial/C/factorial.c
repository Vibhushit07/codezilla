#include "stdio.h"
/* factorial function will find the factorial of 5.
   Recursion is used here.
*/
long long factorial(long long n) {
	if(n == 1) {
		return 1;
	}
	else {
		return n * factorial(n-1); 
	}
}

int main(int argc, char * argv[]) {
	printf( "%d\n", factorial(5));
}
