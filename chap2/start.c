/*
 * start.c - Illustration of multi filed modules
 */
#include <linux/module.h> 
#include <linux/kernel.h>

int init_module(void)
{
    printk(KERN_INFO "Hello world - this is the kernel speaking\n");

    return 0;
}
