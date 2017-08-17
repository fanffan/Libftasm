section .text
  global ft_toupper

ft_toupper:
  enter 0, 0
  mov rax, rdi
  sub rax, 32
  leave
  ret

