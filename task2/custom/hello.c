#include <linux/kernel.h>

asmlinkage long __x64_sys_hello(void){
	printk("Hello from kernel\n");
	return 0;
}
