/*
 * hello world kernel module
 * make V=1
 * make test // for testing module load unload
 */

#include <linux/module.h> /* Needed by all modules */
#include <linux/kernel.h> /* Needed for KERN_INFO */

// Proof
#define DRIVER_AUTHOR "Vinay Banakar"
#define DRIVER_DESC "Hello world driver"

int init_module(void)
{
	printk(KERN_INFO "Hello world!!!\n");
	/*
	 * * A non 0 return means init_module failed; module can't be loaded.
	 * */ 
	return 0;
}

void cleanup_module(void)
{
	printk(KERN_INFO "Goodbye world, will be back soon!!!\n");
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
