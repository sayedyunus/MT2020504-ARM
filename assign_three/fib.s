	 ; Fiibonacci series
	 
	 AREA     FIB, CODE, READONLY
     EXPORT __main
     IMPORT printMsg

     ENTRY 
__main  FUNCTION
		MOV  R3, #7 
		MOV  R4, #1 
		MOV  R5, #1 
		SUB  R3, #1	
		
loop	CMP R3, #0	
		BLE stop	
		
		ADD R4, R5	
		MOV R0, R4
		BL printMsg
		EOR R4, R5	
		EOR R5, R4
		EOR R4, R5
		SUB R3, #1	
		B loop		
stop    B stop 
	 ENDFUNC
	 END
