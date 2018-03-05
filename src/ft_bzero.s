section .text

global _ft_bzero

_ft_bzero:
  enter 0, 0
loop:
  mov [rdi], BYTE 0x00
  inc rdi
  dec rsi
  cmp rsi, 0
  ja loop
  leave
  ret
