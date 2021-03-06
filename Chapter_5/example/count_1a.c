/*
   赵子豪@20201222
*/
/*
**  这个函数返回参数值中值为1的位的个数。
*/

int
count_one_bits( unsigned value)
{
    int ones;
    
    /*
    **  当这个值还有一些值为1的位时。。。
    */
    for( ones = 0; value != 0; value = value >> 1)
        /*
        **  如果最低位的值为1，计数增1
        */
        if (value % 2 != 1)
            ones = ones + 1;
    
    return ones;
}