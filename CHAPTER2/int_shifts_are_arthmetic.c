int int_shifts_are_arithmetic() {
     int x;
     int bit, temp, value;
     x = -1;
     bit = sizeof(int) << 3;
     temp = (x & (x >> 1) >> (bit - 1));
     value = temp & 0x1;
     return value;
 }
 int main(int argc, const char * argv[]) {
     int ari_shift = int_shifts_are_arithmetic();
     printf("%d\n",ari_shift);
     return 0;
 } 

