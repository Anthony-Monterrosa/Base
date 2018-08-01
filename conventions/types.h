#pragma once 

#ifndef BASE_CONVENTIONS_TYPES
#define BASE_CONVENTIONS_TYPES

#include <stdint.h>
#include <cstddef>

// u -> unsigned, f -> signed, f -> float.

using bit    = bool;
using ubit8  = uint8_t;
using ubit16 = uint16_t;
using ubit32 = uint32_t;
using ubit64 = uint64_t;

using sbit8  = int8_t;
using sbit16 = int16_t;
using sbit32 = int32_t;
using sbit64 = int64_t;

using fbit32 = float;
using fbit64 = double;
using fbit80 = long double;

using utf8   = char;
using utf16  = char16_t;
using utf32  = char32_t;

using null_pointer = std::nullptr_t;
using none         = void;

#endif