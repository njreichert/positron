// Pulled from PrimeCell UART PL011 Technical Reference Manual r1p4
#define PL011_UARTDR(base) ((base) + 0x000) // 0x000 RW 12/8 0x--- UARTDR Data register, UARTDR on page 3-5
#define PL011_UARTRSRECR(base) ((base) + 0x004) // 0x004 RW 4/0 0x0 UARTRSR/UARTECR Receive status register/error clear register, UARTRSR/UARTECR on page 3-6
// 0x008-0x014 - - - - Reserved
#define PL011_UARTFR(base) ((base) + 0x018) // 0x018 RO 9 0b-10010--- UARTFR Flag register, UARTFR on page 3-8
// 0x01C - - - - Reserved
#define PL011_UARTILPR(base) ((base) + 0x020) // 0x020 RW 8 0x00 UARTILPR IrDA low-power counter register, UARTILPR on page 3-9
#define PL011_UARTIBRD(base) ((base) + 0x024) // 0x024 RW 16 0x0000 UARTIBRD Integer baud rate register, UARTIBRD on page 3-10
#define PL011_UARTFBRD(base) ((base) + 0x028) // 0x028 RW 6 0x00 UARTFBRD Fractional baud rate register, UARTFBRD on page 3-10
#define PL011_UARTLCR_H(base) ((base) + 0x02C) // 0x02C RW 8 0x00 UARTLCR_H Line control register, UARTLCR_H on page 3-12
#define PL011_UARTCR(base) ((base) + 0x030) // 0x030 RW 16 0x0300 UARTCR Control register, UARTCR on page 3-15
#define PL011_UARTIFLS(base) ((base) + 0x034) // 0x034 RW 6 0x12 UARTIFLS Interrupt FIFO level select register, UARTIFLS on page 3-17
#define PL011_UARTIMSC(base) ((base) + 0x038) // 0x038 RW 11 0x000 UARTIMSC Interrupt mask set/clear register, UARTIMSC on page 3-17
#define PL011_UARTRIS(base) ((base) + 0x03C) // 0x03C RO 11 0x00- UARTRIS Raw interrupt status register, UARTRIS on page 3-19
#define PL011_UARTMIS(base) ((base) + 0x040) // 0x040 RO 11 0x00- UARTMIS Masked interrupt status register, UARTMIS on page 3-20
#define PL011_UARTICR(base) ((base) + 0x044) // 0x044 WO 11 - UARTICR Interrupt clear register, UARTICR on page 3-21
#define PL011_UARTDMACR(base) ((base) + 0x048) // 0x048 RW 3 0x00 UARTDMACR DMA control register, UARTDMACR on page 3-22
// 0x04C-07C - - - - Reserved
// 0x080-0x08C - - - - Reserved for test purposes
// 0x090-FCC - - - - Reserved
// 0xFD0-FDC - - - - Reserved for future ID expansion
#define PL011_UARTPeriphID0(base) ((base) + 0xFE0) // 0xFE0 RO 8 0x11 UARTPeriphID0 UARTPeriphID0 register on page 3-23
#define PL011_UARTPeriphID1(base) ((base) + 0xFE4) // 0xFE4 RO 8 0x10 UARTPeriphID1 UARTPeriphID1 register on page 3-24
#define PL011_UARTPeriphID2(base) ((base) + 0xFE8) // 0xFE8 RO 8 0x14 UARTPeriphID2 UARTPeriphID2 register on page 3-24
#define PL011_UARTPeriphID3(base) ((base) + 0xFEC) // 0xFEC RO 8 0x00 UARTPeriphID3 UARTPeriphID3 register on page 3-24
#define PL011_UARTPCellID0(base) ((base) + 0xFF0) // 0xFF0 RO 8 0x0D UARTPCellID0 UARTPCellID0 register on page 3-25
#define PL011_UARTPCellID1(base) ((base) + 0xFF4) // 0xFF4 RO 8 0xF0 UARTPCellID1 UARTPCellID1 register on page 3-26
#define PL011_UARTPCellID2(base) ((base) + 0xFF8) // 0xFF8 RO 8 0x05 UARTPCellID2 UARTPCellID2 register on page 3-26
#define PL011_UARTPCellID3(base) ((base) + 0xFFC) // 0xFFC RO 8 0xB1 UARTPCellID3 UARTPCellID3 register on page 3-26
