section .text
  global _ft_strlen

_ft_strlen:
  enter 0,0
  xor rax, rax
  cmp [rdi], byte 0
  je exit

loop:
  inc rax
  cmp [rdi + rax], byte 0
  jne loop

exit:
  leave
  ret
