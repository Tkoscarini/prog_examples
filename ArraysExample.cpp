#include <stdlib.h>
#include <stdio.h>

int main(){
	int arr[10];
	for(int i = 0; i <=10; i++){
		printf("Enter the value %d: ", i);
		scanf("%d", &arr[i]);
	};
	printf("\nFirst is equal to: %d\n", arr[0]);
	printf("Fifth is equal to: %d\n", arr[5]);
	printf("Last is equal to: %d\n", arr[10]);		
	return 0;
}
