DATA SEGMENT
      STR1 DB 'leana'
      LEN EQU 05H
      STR2 DB 20 DUP(0)
      MES1 DB 10,13,'WORD IS PALINDROME$'
      MES2 DB 10,13,'WORD IS NOT PALINDROME$'
 DATA ENDS
 
 CODE SEGMENT
 ASSUME CS:CODE,DS:DATA,ES:DATA
 START:
    MOV AX,DATA
    MOV DS,AX
    MOV ES,AX
    LEA SI,STR1
    LEA DI,STR2+LEN-1
    MOV CX,LEN
    UP: CLD
    LODSB
 STD
 STOSB
 LOOP UP
   LEA SI,STR1
   LEA DI,STR2
 CLD
   MOV CX,LEN
   REPE CMPSB
   CMP CX,0H
   JNZ NOTPALIN
   LEA DX,MES1
   MOV AH,09H
   INT 21H
   JMP EXIT
   NOTPALIN: LEA DX,MES2
   MOV AH,09H
   INT 21H
   EXIT: MOV AH,4CH
   INT 21H
CODE ENDS
END START
