#include <kernel/string.h>
#include <kernel/types.h>

void *memset(void *s, int c, size_t n) {
	uint8_t *p = (uint8_t*)s;
	for (size_t i = 0; i < n; ++i)
		p[i] = c;
	return s;
}
