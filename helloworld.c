// helloworld.c
#include <linux/string.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/slab.h>
#include <linux/errno.h>
#include <linux/netdevice.h>
#include <linux/net.h>
#include <linux/inetdevice.h>
#include <linux/etherdevice.h>
#include <linux/skbuff.h>
#include <linux/init.h>

static int __init hello_init(void)
{
	printk("in %s\n",__func__);
	return 0;


}

static void __exit hello_exit(void)
{
	printk("in %s\n",__func__);
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_AUTHOR("Rami Rosen");
MODULE_DESCRIPTION("test");
MODULE_LICENSE("GPL");


