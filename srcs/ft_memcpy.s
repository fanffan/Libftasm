section .text
  global _ft_memcpy

_ft_memcpy:
	enter 0,0
	push r12
	mov r12, rdi
	cmp rdx, 0
	jbe exit
	mov al, sil
	mov rcx, rdx
	repne movsb
exit:
	mov rax, r12
	pop r12
	leave
	ret
