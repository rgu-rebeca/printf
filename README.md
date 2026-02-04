# 42 Cursus' ft_printf
*Because I'm tired of using putnbr and putstr.*


## 📌 Status
**Finished**

**Grade:** 100 / 100 ✅


## 💡 About the project

The **ft_printf** project from **42 School** consists of recreating the standard C `printf` function.

The goal of this project is to understand and implement **variadic functions** in C and to manage complex formatting options. Once completed, this custom `ft_printf` function can be reused in all future C projects, replacing the need for repetitive calls to `ft_putstr`, `ft_putnbr`, etc.

This project is a key step toward writing structured, extensible, and reusable code.


## 🧠 What this project teaches

This project helps develop and demonstrate the following skills:

- Use of **variadic functions** (`stdarg.h`)
- Parsing and interpreting format strings
- Dispatcher design using function pointers
- Detailed management of formatting options
- Robust error handling
- Writing clean, extensible, and maintainable C code


## 🛠️ Usage

This function is **not a standalone program**.  
It is compiled as a static library and linked to another project.

### 1️⃣ Including it in your code

Include the header file:

```c
#include "ft_printf.h"
```

Compile your project linking the library:
```c
gcc -Wall -Wextra -Werror main.c -L. -lftprintf
```

📋 Function prototype
```c
int ft_printf(const char *format, ...);
```

### Return value

- Returns the number of characters printed

- Returns a negative value in case of error

### 📏 Constraints & rules

- The function must be named ft_printf

- Must follow the 42 Norm

- Buffer management must not be done inside ft_printf

- Global variables are forbidden

- Program must never crash (segfault, double free, etc.)

Only the following functions are allowed:

- write

- malloc

- free

- exit

- Variadic macros from stdarg.h

### 🧪 Compilation

The project is compiled as a static library:
```c
make
```

This generates:
libftprintf.a
