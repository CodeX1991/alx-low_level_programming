section .rodata
message: db 'Hello, Holberton', 10
messagelen: equ $ - message

section .text
global main
main:
        mov     rax, 1          ;sytem call number should be stored in rax
        mov     rdi, 1          ;system #1 in rdi: where to write (descriptor)
        mov     rsi, message    ; argument #2 in rsi: where does the string start?
        mov     rdx, messagelen         ; argument #3 in rdx: how many bytes to write?
        syscall                 ; this instruction invokes a system call

	mov rax, 60		; 'exit' syscall number
	mov rdi, 0
	syscall
