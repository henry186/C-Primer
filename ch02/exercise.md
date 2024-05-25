![img](img/ex2.1-2.2.png)

**2.1**

### Integer Types and Their Ranges

- **(Signed) `int`** can hold integers in the range $-2^{31}$ to $2^{31} - 1$ (i.e., -2,147,483,648 to 2,147,483,647). This is the most frequently used integer type due to its balanced range and size.

- **`short`** often holds integers in the size of 2 bytes (16 bits), which can store values in the range $-2^{15}$ to $2^{15} - 1$ (i.e., -32,768 to 32,767). This range is relatively small, so `short` is less commonly used in modern applications where larger ranges are typically needed.

- **`long`** is often the same size as `int` on modern 64-bit machines, typically 4 bytes (32 bits), but this can vary depending on the machine and compiler. On some systems, `long` may be 8 bytes (64 bits). It is essential to check the specific implementation on your target platform.

- **`long long`** can hold integers in the size of 8 bytes (64 bits), providing a much larger range from $-2^{63}$ to $2^{63} - 1$ (i.e., -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807). You can use `long long` when you need to store very large integer values.

```
Size of short: 2 bytes
Range of short: -32768 to 32767

Size of int: 4 bytes
Range of int: -2147483648 to 2147483647

Size of long: 4 bytes
Range of long: -2147483648 to 2147483647

Size of long long: 8 bytes
Range of long long: -9223372036854775808 to 9223372036854775807
```
In summary:

int is the most commonly used integer type.
short is less commonly used due to its small range.
long may be the same size as int on many systems but can vary.
long long is used when very large integers are required.

If you are sure your integer is not negative, you can use `unsigned int`.

`char` also has an implicit signed/unsigned type depending on the machine, so it's better not to perform arithmetic operations on them.

`float` can hold single precision floating-point numbers, which are not precise enough for many applications.

`double` can hold double precision floating-point numbers, and it is generally better to use it to hold floating-point values. Because of its precision, and sometimes it's even faster than `float`.
