section .text
  global _ft_puts
  extern _ft_strlen

_ft_puts:
  mov rsi, rdi 
  call _ft_strlen
  mov rdi, 1 ;fd
  mov rdx, rax ;length
  mov rax, 0x2000004 ; adress of sys_write on osx
  syscall
  mov rsi, newline
  mov rdx, 1
  mov rax, 0x2000004 ;number of exit syscall
  syscall
  ret

section .data
newline db 0x0a
