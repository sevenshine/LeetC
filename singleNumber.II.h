//������һ����Ҫ�����ڴ�int count[32]����¼ÿ��bitλ����bit�Ĵ�����3%3=0,1%3=1���������λ1��count[]

//����������ͨ����¼ones, twos,threes����������¼bitλ���ֵĴ���

int singleNumber2(int A[], int n) 
{
	int ones=0, twos=0,threes=0;
	for (int i=0;i<n;i++)
	{
		//ones&A[i]��bitλ�������Σ�twosΪbitλ�������ε���
		twos |= ones&A[i];
		//�Ƴ��������ε�bitλ
		ones ^= A[i];
		//�������ε���
		threes = ones & twos;
		//�������κ�ones��twos��0
		ones &= ~threes;
		twos &= ~threes;
	}
	return ones;
}