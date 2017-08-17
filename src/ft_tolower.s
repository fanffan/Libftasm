section .text
  global ft_tolower

ft_tolower:
  enter 0, 0
  mov rax, rdi
  add rax, 32
  leave
  ret

