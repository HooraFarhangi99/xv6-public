#include "types.h"
#include "stat.h"
#include "user.h"
#include "param.h"

//print out each process pid and allocated memory size sorted ascendingly
int main(void)
{
    struct proc_info *processInfo;
    processInfo = malloc(NPROC * sizeof(*processInfo));
    getprocess(processInfo);
    for (int i = 0; i < NPROC; i++)
    {
        if (((processInfo + i)->pid) == 0 && (processInfo + i)->memsize == 0)
        {
            break;
        }
        printf(1, "Process id is: %d\t", (processInfo + i)->pid);
        printf(1, "Process memory size is: %d\n", (processInfo + i)->memsize);
    }
    exit();
}