namespace phone{
    typedef struct sim{
         int phone_number;
         uint2048_t A1_key;
         uint8192_t A2_hash;
         uint2048_t A3_key;
    };
}