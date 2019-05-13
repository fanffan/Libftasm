section .text
global _ft_memalloc
extern _malloc
extern _ft_bzero

_ft_memalloc:
  enter 0, 0
  mov r12, rdi
  call _malloc
  mov r14, rax
  mov rdi, rax
  mov rsi, r12
  call _ft_bzero
  mov rax, r14
  leave
  ret
