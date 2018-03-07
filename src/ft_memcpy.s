section .text
  global _ft_memcpy

_ft_memcpy:
  enter 0,0
  cmp rdx, 0
  je exit
loop:
  mov al, [rsi]
  mov [rdi], al
  inc rdi
  inc rsi
  dec rdx
  cmp rdx, 0
  ja loop
exit:
  leave
  ret
