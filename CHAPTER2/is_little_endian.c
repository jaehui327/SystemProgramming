int is_little_endian() {
     int x = 1;
     char *y = (char *)&x;
     return *y;
 }
 int main(int argc, const char * argv[]) {
     int endian = is_little_endian();
     printf("%d\n",endian);
     return 0;
 }

