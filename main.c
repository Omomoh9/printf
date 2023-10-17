#include "main.h"
int main()
{
	int len;
	/*len = _printf("%b", 0);
	_printf("\n");
	_printf("%d",len);
	_printf("\n");
	return (0);*/
	len = _printf("%r","omomoh");
	printf("\n%d\n",len);
	len = _printf("%r", "\nThis sentence is retrieved from va_args!");
	printf("\n%d\n",len);
	len = _printf("Complete the sentence: You %r nothing, Jon Snow.\n", "know");
	printf("\n%d\n",len);
	len= _printf("Complete the sentence: You %r nothing, Jon Snow.\n", "");
	printf("\n%d\n",len);
	return (0);
}
