#include <linux/module.h>
void func(void);
static int __init sample_init(void)
{
	func();
	return 0;
}
static void __exit sample_exit(void)
{
}
module_init(sample_init);
module_exit(sample_exit);
