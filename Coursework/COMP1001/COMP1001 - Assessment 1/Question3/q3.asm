; COMP1001 - Assessment 1: Question 2

.386  ; Specify instruction set
.model flat, stdcall  ; Flat memory model, std. calling convention
.stack 4096 ; Reserve stack space
ExitProcess PROTO, dwExitCode: DWORD  ; Exit process prototype

; variable definitions
.data
	arrA BYTE 3, 2, 3, 1, 7, 5, 0, 8, 9, 2
	arrB BYTE ?
	arrC BYTE 1, 3, 2, 5, 4, 6, 0, 4, 5, 8

; main program code
.code
main PROC
	mov esi, 0

	mov bh, 2
	mov ch, 3

	loopCycle:
		mov al, [arrA + TYPE arrA * esi]
		mul bh

		add al, 1

		inc esi
		cmp esi, 10
		jne loopCycle;
	INVOKE ExitProcess, 0 ; call exit function
  
main ENDP
END main