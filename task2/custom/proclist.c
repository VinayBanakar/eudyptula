// This needs to be added to kernel src, recompiled and booted for access from userspace.
// https://stackoverflow.com/questions/28587721/a-system-call-to-dump-information-about-all-system-processes-and-the-threads-in
// https://github.com/torvalds/linux/commit/d5a00528b58cdb2c71206e18bd021e34c4eab878
// https://github.com/torvalds/linux/commit/cab56d3484d4bb8b21e4d9500392ac1ce99af026#diff-ee48e9f67ee8420d21b655cfd0eb5d75

#include <linux/kernel.h>
#include <linux/printk.h>
#include <linux/sched.h>
#include <linux/sched/signal.h>

asmlinkage long __x64_sys_proclist(void)
{
    struct task_struct *task;

    printk("Printing task_struck list:\n");
    for_each_process(task) {
        /* this prints the name and PID of each task */
        printk("%s[%d]\n", task->comm, task->pid);
    }
    return 0;
}
