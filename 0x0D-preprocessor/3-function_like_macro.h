#ifndef ABSOLUTE_H
#define ABSOLUTE_H
#define ABS(x) { \
	if (x < 0) \
	{ \
		x *= -1; \
	} \
	else \
	{ \
		x = x; \
	}

#endif
