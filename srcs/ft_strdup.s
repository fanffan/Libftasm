section .text
global _ft_strdup
extern _malloc
extern _ft_strlen
extern _ft_memcpy
extern _ft_bzero

_ft_strdup:
  enter 8, 0
  push r12
  push r13
  push r14
  mov r12, rdi ; string
  call _ft_strlen
  mov r13, rax ; size
  inc r13
  mov rdi, r13
  call _malloc
  mov r14, rax ; pointeur
  mov rdi, r14
  mov rsi, r12
  mov rdx, r13
  call _ft_memcpy
  mov rax, r14
  pop r14
  pop r13
  pop r12
  leave
  ret
