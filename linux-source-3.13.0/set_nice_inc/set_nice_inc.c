#include <linux/sched.h>
#include <linux/kernel.h>
#include <linux/syscalls.h>

asmlinkage long set_nice_inc(pid_t p_id, int val)
{
	
	if(val > 0)
{

	struct task_struct *st_task;
	st_task = find_task_by_vpid(p_id);
	st_task->nice_inc = val;
	
	if(val == st_task->nice_inc)
	{
		return 0;
	}

	return 2; 

}	
	else
{
	return 1;
}

}
