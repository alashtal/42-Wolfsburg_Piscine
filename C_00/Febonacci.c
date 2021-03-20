#include  <stdio.h>
#include <unistd.h>

int feb(int n)
{
	if (n == 0) return (0);
	if (n == 1) return (1);
	return feb(n-1) + feb(n-2);
	write(1, &n, 1);

}

int main(void)
{
	feb(4);
	return (0);
}
