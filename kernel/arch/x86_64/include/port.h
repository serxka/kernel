#ifndef _KERNEL_ARCH_X86_64_PORT_H_
#define _KERNEL_ARCH_X86_64_PORT_H_

#include <kernel/types.h>

static inline uint8_t port_inb(uint16_t port) {
	uint8_t data;
	__asm__ __volatile__("inb %1, %0" : "=a"(data) : "Nd"(port));
	return data;
}

static inline void port_outb(uint16_t port, uint8_t data) {
	__asm__ __volatile__ ("outb %0, %1" : : "a"(data), "Nd"(port));
}

#endif // _KERNEL_ARCH_X86_64_PORT_H_
