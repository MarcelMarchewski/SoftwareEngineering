; Addition and subtraction homework
.386  ; Specify instruction set
.model flat, stdcall  ; Flat memory model, std. calling convention
.stack 4096 ; Reserve stack space
ExitProcess PROTO, dwExitCode: DWORD  ; Exit process prototype

.data
  result DWORD ?
.code
main PROC
  mov eax, 15 ; store 'A'
  mov ebx, 20 ; store 'B'
  mov ecx, 5 ; store 'C'
  mov edx, 10 ; store 'D'

  add eax, ebx ; add 'A' and 'B', store result in eax
  add ecx, edx ; add 'C' and 'D', store result in ebx

  sub eax, edx ; subtract '(A+B)' and '(C+D)', store result in eax

  mov result, eax ; move '(A+B) - (C+D)' to result variable
	INVOKE ExitProcess, 0 ; call exit function
  
main ENDP
END main