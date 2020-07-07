#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main (int argc,char *argv[])
{

	int pid;
	int status;
	int waitTime, runTime;	
	pid = fork();
	if (pid == 0)
  	{	
  		sleep(234);
    	exit();
    }
  	else
 	{
    	status = waitx(&waitTime, &runTime);
 	}  
 	
 	exit();
} 