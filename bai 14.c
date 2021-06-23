
//Tính tích s=1*2*3*…*n ( n là số nguyên dương nhập từ bàn phím)
int main()
{
    int n,s=1;
    printf("nhap n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s*=i;
    }
    printf("S= %d",s);
    return 0;
}
