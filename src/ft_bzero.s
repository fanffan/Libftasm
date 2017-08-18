section .text

global ft_bzero

start:
  enter 0, 0

ft_bzero:
  mov [rdi], BYTE 0x00
  inc rdi
  dec rsi
  cmp rsi, 0
  ja ft_bzero
  ret

