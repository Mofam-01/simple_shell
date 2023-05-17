#include "shell.h"

/**
 * _myexit - the shell exits
 * @info: Structure containing potential arguments. Used to maintaining
 * a constant function prototype.
 * Return: exits with a particular exit status
 * (0) if info.argv[0] != "exit"
 */

int_myexit(info_t *info)
{
	int exitcheck;

	if (info->argv[1])/* if there is an exit arguement */
	{
		exitcheck = erratoi(info->argv[1]);
		if (exitcheck == -1)
		{
			info->status = 2;
			print_erro(info, "Illegal number: ");
			_eputs(info->argv[1]);
			_eputschar('\n');
			return (1);
		}
		info->err_num = _erratoi(info->argv[1]);
		return (-2);
	}
	info->err_num = -1;
	return (-2);
}
