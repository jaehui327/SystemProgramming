//A
void is_all_bit_one(x){
    int value = !(~x);
    printf("%d\n",value);
}
//B
void is_all_bit_zero(x){
    int value = !x;
   printf("%d\n",value);
}
//C
void is_LSB_one(x){
    int temp, value;
    temp = (x & 0xFF) | 0xFFFFFF00;
    value = !(~temp);
    printf("%d\n",value);
}
//D
void is_MSB_zero(x){
    int shifts_val, temp, value;
    shifts_val = (sizeof(int)-1) << 3;
    temp = x >> shifts_val & 0xFF;
    value = !temp;
    printf("%d\n",value);
}

int main(int argc, const char * argv[]) {
    int x;
    scanf("%d",&x);
    is_all_bit_one(x); //A
    is_all_bit_zero(x); //B
    is_LSB_one(x); //C
    is_MSB_zero(x); //D
    return 0;
}

