// Per https://wiki.osdev.org/Raspberry_Pi_Bare_Bones
// TODO: Add other regs.
#define MBOX_READ(base) ((base) + 0x00)
#define MBOX_STATUS(base) ((base) + 0x18)
#define MBOX_WRITE(base) ((base) + 0x20)

// Adapted from SerenityOS codebase.
#define MBOX_RESPONSE_SUCCESS 0x8000'0000
#define MBOX_RESPONSE_PARTIAL 0x8000'0001
#define MBOX_REQUEST 0
#define MBOX_FULL 0x8000'0000
#define MBOX_EMPTY 0x4000'0000
#define ARM_TO_VIDEOCORE_CHANNEL 8
