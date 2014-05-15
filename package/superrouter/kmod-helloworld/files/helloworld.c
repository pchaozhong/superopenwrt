#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init hello_init(void)
{
	printk("Hello, OpenWrt.\n");
	return 0;
}

static void __exit hello_exit(void)
{
	printk("Bye, OpenWrt\n");
}

module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("chenhui");
