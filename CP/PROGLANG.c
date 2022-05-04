#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	int arr[6];
	scanf("%d", &t);
	for(int i =1; i<=t; i++){
	    for(int j = 1; j<=6; j++)
	        scanf("%d", &arr[j]);
	    if (((arr[1] == arr[3]) && (arr[2] == arr[4])) || ((arr[1] == arr[4]) && (arr[2] == arr[3])))
	        printf("1\n");
	   else if (((arr[1] == arr[5])&&(arr[2] == arr[6]))||((arr[1] == arr[6])&&(arr[2] == arr[5])))
	        printf("2\n");
	   else
	   printf("0\n");
	}
	return 0;
}

