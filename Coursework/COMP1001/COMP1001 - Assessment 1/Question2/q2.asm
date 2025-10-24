; COMP1001 - Assessment 1: Question 2

.386  ; Specify instruction set
.model flat, stdcall  ; Flat memory model, std. calling convention
.stack 4096 ; Reserve stack space
ExitProcess PROTO, dwExitCode: DWORD  ; Exit process prototype

; variable definitions
.data
  arr DWORD 10, 20, 30, 40		; unsigned integer array with 4 elements

  multiplier DWORD 3			; value to multiply the multiplicand with
  divisor DWORD 6				; value to divide the dividend by

; main program code
.code
main PROC
  mov eax, [arr + TYPE arr * 3] ; move last element of arr into eax
  mul multiplier				; multiply eax by the multiplier variable (3)

  div divisor					; divide eax by the divisor variable (6)

  mov [arr + TYPE arr * 3], eax ; move value of eax into the last element of arr
	INVOKE ExitProcess, 0		; call exit function
  
main ENDP
END main
