
int sum_digi( int x)
{
    if( x==0)
    {
        return 0;
    }
    return( sum_digi( x/10 ) + x%10  );