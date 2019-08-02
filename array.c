#include<stdio.h>
int main()
{
	int counter=0,outer,inner;
	int arr[]={2,3,4,5,6,8};
	for(outer=0;outer<sizeof(arr)/sizeof(int);outer++)
	{
		for(inner=0;inner<sizeof(arr)/sizeof(int);inner++)
	{	
		if(arr[outer]<arr[inner])
			counter++;
		if(counter==2)
			break;
	}
		if(counter==2)
		printf("%d\n",arr[outer]);		
		counter=0; 
	}
}


/*
output:
	ankush@ankush-X553SA:~/Desktop$ ./a.out
2
3
4
5

*/

