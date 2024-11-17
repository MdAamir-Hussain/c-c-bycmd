#include<stdio.h>

void TOH(int n , int A, int B, int C)
{
	if(n>0)
	{
		TOH(n-1, A,C,B);
		printf("move a disc from %d to %d\n", A,C);
		TOH(n-1, B,A,C);
	}
}


int main(){
	int n=3; 
	printf("Steps to solve the Tower of Hanoi for %d discs:\n", n);
	TOH(n,1,2,3);
	return 0;

}