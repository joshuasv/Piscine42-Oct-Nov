void ft_putchar(char c)
{
	__asm__ volatile (
		"syscall"
		:
		: "a" (0x2000000 + 4),
		  "D" (1),
		  "S" (&c),
		  "d" (1)
		: "rax", "rdi", "rsi", "rdx"
	);
}

int main(void)
{
	ft_putchar('A');
}
