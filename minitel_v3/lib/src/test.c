#include <stdio.h>
#include <proc/readproc.h>
#include <stdlib.h>
#include <string.h>

char *concatenate(char **tstr)
{
  int i = 0;
  char *str = "";
  char *temp;
  int sizet;
  int sizestr;
  while(tstr[i])
    {
      sizet = sizeof(tstr[i]);
      sizestr = sizeof(str);
      temp = realloc(str, ( sizet + sizestr ));
      for (int j = 0; j < sizet; j++)
	{
	  temp[sizestr , j] = tstr[i][j];
	}
      str = temp;
    }
  return str;
}

int main()
{
    PROCTAB* proc = openproc(PROC_FILLMEM | PROC_FILLCOM | PROC_FILLSTATUS );
    proc_t proc_info;
    memset(&proc_info, 0, sizeof(proc_info));
    while (readproc(proc, &proc_info) != NULL) {
      char *cmdline = concatenate(proc_info.cmdline);
      printf("=========================================\n PID : %d \n Name : %20s \n Status : %c \n Parent : %d \n Command line : %s \n",
	     proc_info.tid, proc_info.cmd, proc_info.state, proc_info.ppid, cmdline);
      free(cmdline);
}
    printf("=========================================\n");
    closeproc(proc);

    return 0;
}
