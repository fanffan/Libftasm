section .text
  global _ft_strlen

_ft_strlen:
	enter 0,0
	mov rcx, -1 ; rcx est decremete, si il atteint 0 il exit
	mov rsi, rdi
	mov al, 0
	repne scasb
	sub rdi, rsi
	dec rdi
	mov rax, rdi
	leave
	ret
