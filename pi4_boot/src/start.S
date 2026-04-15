.section ".text.boot"

.globl _start

// Per https://wiki.osdev.org/Raspberry_Pi_Bare_Bones:
// Entry point for the kernel. Registers:
// x0 -> 32 bit pointer to DTB in memory (primary core only) / 0 (secondary cores)
// x1 -> 0
// x2 -> 0
// x3 -> 0
// x4 -> 32 bit kernel entry point, _start location
.org 0x80000
_start:
        // Halt other cores for now.
        // Per https://github.com/sypstraw/rpi4-osdev/blob/master/part1-bootstrapping/boot.S,
        // I don't know if 
        mrs     x1, mpidr_el1
        and     x1, x1, 0b00000011
        cbz     x1, main_cpu

spin_other_cpu:
        wfe
        b       spin_other_cpu

main_cpu:
        // set stack.
        ldr     x5, =_start
        mov     sp, x5

        // Clear bss
        ldr     x5, =__bss_start
        ldr     w6, =__bss_size // Why 32-bit?
continue_clear_bss:
        cbz     w6, boot_main
        str     wzr, [x5], #8
        sub     w6, w6, #1
        cbnz    w6, continue_clear_bss

        // Jump to C code. 
boot_main:
        bl      kernel_main

halt:
        wfe
        b       halt