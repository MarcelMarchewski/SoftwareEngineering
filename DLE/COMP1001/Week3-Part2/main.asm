; A simple example adding two numbers.
.386  ; Specify instruction set
.model flat, stdcall  ; Flat memory model, std. calling convention
.stack 4096 ; Reserve stack space
ExitProcess PROTO, dwExitCode: DWORD  ; Exit process prototype



.data ; data segment

; define your variables here

string BYTE "This is very exciting."

; WHAT IS THE SIZE OF THE ABOVE ARRAYS IN BYTES?

.code ; code segment


main PROC ; main procedure
	lea eax, string

	iterate:
		; todo, iterate through string

		cmp ax, 1
		jne iterate

	INVOKE ExitProcess, 0 ; call exit function

main ENDP ; exit main procedure
END main  ; stop assembling 