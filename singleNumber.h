//ע��nΪ�����С���������¼������鳤��

int singleNumber(int A[], int n) 
{
	int num=0;
	for(int i=0;i<n;i++)
	{
		num^=A[i];
	}
	return num;
}