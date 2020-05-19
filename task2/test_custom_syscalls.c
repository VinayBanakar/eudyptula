#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main(){
	long int k = syscall(439); // check syscall table
	printf("Syscall 439 returned: %ld\n", k);

	long int p = syscall(440); 
	printf("Syscall 440 returned; %ld\n", p);
	return 0;
}
