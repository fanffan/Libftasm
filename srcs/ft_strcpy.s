section .text

global _ft_strcpy
extern _ft_strlen
extern _ft_memcpy

_ft_strcpy:
	enter 0, 0
	push r12
	push r13
	mov r12, rdi
	mov r13, rsi
	mov rdi, rsi
	call _ft_strlen
	mov rdx, rax
	mov rdi, r12
	mov rsi, r13
	call _ft_memcpy
	pop r13
	pop r12
exit:
	leave
	ret
