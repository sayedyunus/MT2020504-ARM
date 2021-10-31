     AREA     largest, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
     ENTRY 
__main  FUNCTION
		MOV R1, #0x20000000
		ADD R2,R1,#0x00000006
		ADD R3,R2,#0x00000005
		MOV R4, #0x78
		MOV R5, #0x299
		MOV R6, #0x188
		STR R4,[R1]
		STR R5,[R2]   
		STR R6,[R3]
		LDR R7,[R1]
		LDR R8,[R2]
		LDR R9,[R3]
		MOV R10,R7
		CMP R10,R8
		BGT M1  
		MOV R10,R8 
M1      CMP R10,R9
		BGT M2
		MOV R10,R9
M2		MOV R0, R10
  	    BL printMsg
stop    B stop 
	 ENDFUNC
	 END 
