	global	main
	extern	printf


main:
	mov	rdi, message
	mov	rax, 0
	call	printf
	mov	rax, 0
	ret
message:
	db "Hello, Holberton", 10, 0
