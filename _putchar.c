
#include <unistd.h>

/* the unistd.h library contains the write function
 * that we need. The write function writes things down in
 * a file or in the standard output
 * */

int _putchar(char c)
{
	/* the first parameter "1" designates the standard output the the
	 * bytes will be written
	 * the second parameter "&c" is the memory location of the bytes
	 * the third parameter "1" is how many bytes we want to display from 
	 * that memory location
	 *
	 *the write function will return 1 on success and -1 on failure
	 * 
	 */
	return write((1, &c, 1));
}
