section	.text
global _ft_isdigit

_ft_isdigit:
  enter 0, 0
  cmp rdi, 48
  jb false
  cmp rdi, 57
  jg false
  mov rax, 1
  jmp exit

false:
  mov rax, 0
  
exit:
  leave
  ret
