//【方案一】需要额外内存int count[32]来记录每个bit位出现bit的次数，3%3=0,1%3=1；留下最后位1的count[]

//【方案二】通过记录ones, twos,threes三个数来记录bit位出现的次数

int singleNumber2(int A[], int n) 
{
	int ones=0, twos=0,threes=0;
	for (int i=0;i<n;i++)
	{
		//ones&A[i]：bit位出现两次；twos为bit位出现两次的数
		twos |= ones&A[i];
		//移除出现两次的bit位
		ones ^= A[i];
		//出现三次的数
		threes = ones & twos;
		//出现三次后ones和twos清0
		ones &= ~threes;
		twos &= ~threes;
	}
	return ones;
}