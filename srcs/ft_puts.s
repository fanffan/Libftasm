section .data
newline db 0x0a
nullMsg : db '(null)', 10, 0
len: equ $-nullMsg

section .text
  global _ft_puts
  extern _ft_strlen

_ft_puts:
	enter 0, 0
	cmp rdi, 0
	je null
	mov rsi, rdi 
	call _ft_strlen
	mov rdi, 1
	mov rdx, rax
	mov rax, 0x2000004
	syscall
	mov rsi, newline
	mov rdx, 1
	mov rax, 0x2000004
	syscall
	leave
	ret

null:
	mov rdi, 1
	mov rsi, nullMsg
	mov rdx, len
	mov rax, 0x2000004
	syscall
	leave
	ret
