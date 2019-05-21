section .text

global _ft_cjoin

extern _ft_strlen
extern _ft_strnew
extern _ft_strcpy
extern _ft_strdup

_ft_cjoin:
	enter 0, 0
	mov rax, rdi
	cmp rsi, 0
	je exit
	cmp rdi, 0
	je strnul
	push r12
	push r13
	push r14
	push r15
	mov r12, rdi
	mov r13, rsi
	call _ft_strlen
	mov r15, rax
	inc rax
	mov rdi, rax
	call _ft_strnew
	mov r14, rax
	mov rdi, rax
	mov rsi, r12
	; call _ft_strcpy
	mov rax, r14
	mov byte [rax + r15], r13b
	pop r15
	pop r14
	pop r13
	pop r12
exit:
	leave
	ret

strnul:
	mov rdi, rsi
	call _ft_strdup
	leave
	ret