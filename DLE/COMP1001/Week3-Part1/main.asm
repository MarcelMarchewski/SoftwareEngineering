; Mult/Div homework
.386  ; Specify instruction set
.model flat, stdcall  ; Flat memory model, std. calling convention
.stack 4096 ; Reserve stack space
ExitProcess PROTO, dwExitCode: DWORD  ; Exit process prototype

; (50ay + 50xb) / by

.data
  a DWORD 35 ; x
  b DWORD 60 ; c
  x DWORD 45 ; y
  y DWORD 55 ; d

  fifty DWORD 50

  tmp DWORD ?

  by DWORD ?

  quotient DWORD ?
  remainder DWORD ?
.code
main PROC
  mov eax, a
  mul y
  mul fifty
  mov tmp, eax

  mov eax, x
  mul b
  mul fifty
  add tmp, eax

  mov eax, b
  mul y
  mov by, eax

  mov edx, 0
  mov eax, tmp
  mov ecx, by
  div ecx
  mov quotient, eax
  mov remainder, edx
	INVOKE ExitProcess, 0
main ENDP
END main