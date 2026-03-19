.globl _start
.org 0x80000

ker_start:
        add x1, x1, #1
        b _start
        
