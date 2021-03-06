/*
**  赵子豪@20201223
*/
/*
**  这个函数返回参数值中为1的位的个数
*/
int 
count_one_bits( unsigned value )
{
    int ones;
    
    /*
    **  当这个值中还存在一些值为1的位时..
    */
    for ( ones = 0; value != 0; value >>= 1)
        /*
        **  如果最低位为1增加计数器的值
        */
        if ( (value & 1) != 0)
            ones += 1;
    
    return 0;
}