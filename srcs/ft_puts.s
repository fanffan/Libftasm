section .data
newline db 0x0a

section .text
  global _ft_puts
  extern _ft_strlen

_ft_puts:
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
  ret
