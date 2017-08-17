section	.text
  global ft_islower

ft_islower:
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
