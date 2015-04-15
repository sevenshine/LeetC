//注意n为数组大小，不用重新计算数组长度

int singleNumber(int A[], int n) 
{
	int num=0;
	for(int i=0;i<n;i++)
	{
		num^=A[i];
	}
	return num;
}