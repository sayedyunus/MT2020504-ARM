    ;EVEN_NUMBERS

     AREA     EVEN, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
     ENTRY 
__main  FUNCTION
		MOV R0,#0x20000000
		ADD R1,R0,#0x00000005
		ADD R2,R0,#0x0000000A
		ADD R3,R0,#0x0000000F
		MOV R4,#24
		MOV R5,#16
		MOV R6,#32
		MOV R7,#18
		STR R4,[R0]
		STR R5,[R1]   
		STR R6,[R2]
		STR R7,[R3]
		LDR R8,[R0]
		LDR R9,[R1]
		LDR R10,[R2]
		LDR R11,[R3]
		MOV R0,#0
		MOV R1,#1
		MOV R2,#0
		AND R12,R8,R1
		CMP R12,R2
		BEQ E1
M1		AND R12,R9,R1
		CMP R12,R2
		BEQ E2
M2		AND R12,R10,R1
		CMP R12,R2
		BEQ E3
M3		AND R12,R11,R1
		CMP R12,R2
		BEQ E4	
		BL printMsg
		B stop
E1   ADD R0,R0,R1
		B M1
E2   ADD R0,R0,R1
		B M2
E3   ADD R0,R0,R1
		B M3
E4   ADD R0,R0,R1
	    BL printMsg 
stop    B stop 
	 ENDFUNC
	 END 
		
