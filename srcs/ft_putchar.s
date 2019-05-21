
section .text
  global _ft_putchar

_ft_putchar:
	enter 0, 0	
	mov byte [rsp - 4], dil 
	mov rdi, 1
	lea rsi, [rsp - 4]
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	leave
	ret
