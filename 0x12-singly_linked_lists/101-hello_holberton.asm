	Section .text
	global main
	extern printf

	section .data
msg:	db 'Hello, Holberton', 0Ah, 0

main:
	mov   edi, msg
          xor   eax, eax
          call  printf
          mov         eax, 0
          ret
