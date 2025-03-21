namespace data{
    typedef uint4_t = "0x0"; //Unsigned integer of 4-bits.
    typedef uint8_t = "0x00"; //Unsigned integer of 8-bits.
    typedef uint16_t = "0x0000"; //Unsigned integer of 16-bits.
    typedef uint32_t = "0x00000000"; //Unsigned integer of 32-bits.
    typedef uint64_t = "0x000000000000"; //Unsigned integer of 64-bits.
    typedef uint128_t = "0x0000000000000000"; //It is declared as a string. Conversion needed to be represented as an unsigned integer in RAM.
    typedef uint512_t = "0x000000000000000000000000000000"; //It is declared as a string. So, you can convert it into a 512-bit unsinged integer when the compilier and the processor supports it.
    typedef uint1024_t = "0x000000000000000000000000000000000000000000000000000000000000"; //New datatype uint1024_t of 1024-bit length. Declared as a string. Conversion needed to represent as an unsigned integer in RAM.
    typedef uint2048_t = "0x000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"; //New datatype uint2048_t of 2048-bit length. Declared as a string. Implmentation in RAM hasn't occured yet.
    typedef uint3072_t = "0x000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"; // Unsigned integer of length 3072-bit length.
    typedef uint4096_t = "0x000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"; // Unsigned integer of 4096-bit
    typedef uint8192_t = "0x0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"; //Unsigned integer of length 8192-bits.
    typedef int512_t = "0"; // Signed 512-bit integer.
    typedef int1024_t = "0"; // Signed 1024-bit integer.
    typedef int2048_t = "0"; // Signed 2048-bit integer.
    typedef int4096_t = "0"; // Signed 4096-bit integer.
    typedef int8192_t = "0"; // Signed 8192-but integer
    typedef float512_t = "0"; // Signed 512-bit floating point number.
    typedef float1024_t = "0"; // Signed 1024-bit floating point number.
    typedef float2048_t = "0"; // Signed 2048-bit floating point number.
    typedef float4096_t = "0"; // Signed 4096-bit floating point mumber.
    typedef float8192_t = "0"; // Signed 8192-bit floating point numbers.
    typedef double512_t = "0"; //Signed 512-bit double precision number.
    typedef double1024_t = "0"; // Signed 1024-bit double precision number.
    typedef double2048_t = "0"; // Signed 2048-bit double precision number.
    typedef double4096_t = "0"; // Signed 4096-bit double precision number.
    typedef double8192_t = "0"; // Signed 8192-bit double precision number.

    typedef struct variable_data_type{
        char *data;
    };

    typedef struct string{
        uint1024_t number_of_characters;
        char array[number_of_characters];
    };

    typedef struct vector{
        uint8192_t size_of_data;
        char data[size_of_data];
    };
}