#include <stdio.h>
#include <math.h>

int main() {
    int x,n;	
    printf("Enter Number:  ");
    scanf("%d", &x);
    
    if (x<2) {
    	printf("It is not a prime number");
    }
    
    else {
    	for (int i=2; i<= sqrt(x); i++)
    }
    
    
    return 0;
}
