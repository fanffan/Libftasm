section	.text
global _ft_islower

_ft_islower:
  enter 0, 0
  cmp rdi, 97
  jb false
  cmp rdi, 122
  jg false
  mov rax, 1
  jmp exit

false:
  mov rax, 0
  
exit:
  leave
  ret
