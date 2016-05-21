#include <unistd.h>
#include <stdio.h>
int main() {
	//printf("bye\n");
	fork();     //makes copy of running program
	printf("hi\n");
	return 0;
}
