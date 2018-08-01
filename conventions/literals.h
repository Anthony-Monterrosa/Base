#pragma once 

#ifndef BASE_CONVENTIONS_LITERALS
#define BASE_CONVENTIONS_LITERALS

#include "types.h"

ubit8 constexpr inline operator ""_ubp8(const unsigned long long int literal) {
	return static_cast<ubit8>(literal);
}

ubit16 constexpr inline operator ""_ubp16(const unsigned long long int literal) {
	return static_cast<ubit16>(literal);
}

ubit32 constexpr inline operator ""_ubp32(const unsigned long long int literal) {
	return static_cast<ubit32>(literal);
}

ubit64 constexpr inline operator ""_ubp64(const unsigned long long int literal) {
	return static_cast<ubit64>(literal);
}

fbit32 constexpr inline operator ""_fbp32(const fbit80 literal) {
	return static_cast<fbit32>(literal);
}

fbit64 constexpr inline operator ""_fbp64(const fbit80 literal) {
	return static_cast<fbit64>(literal);
}

fbit80 constexpr inline operator ""_fbp80(const fbit80 literal) {
	return static_cast<fbit80>(literal);
}

utf8 constexpr inline operator ""_utfp8(const utf8 literal) {
	return static_cast<utf8>(literal);
}

utf16 constexpr inline operator ""_utfp16(const utf16 literal) {
	return static_cast<utf16>(literal);
}

utf32 constexpr inline operator ""_utfp32(const utf32 literal) {
	return static_cast<utf32>(literal);
}

#endif