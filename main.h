#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
void _putchar(char character);

#define sprintf sprintf_
int sprintf_(char* buffer, const char* format, ...);
#define snprintf  snprintf_
#define vsnprintf vsnprintf_
int  snprintf_(char* buffer, size_t count, const char* format, ...);
int vsnprintf_(char* buffer, size_t count, const char* format, va_list va);
#define vprintf vprintf_
int vprintf_(const char* format, va_list va);
int fctprintf(void (*out)(char character, void* arg), void* arg, const char* format, ...);

#ifdef __cplusplus
extern "C" {
#endif

#define printf printf_
int _printf(const char *format, ...);

#endif // _MAIN_H_
