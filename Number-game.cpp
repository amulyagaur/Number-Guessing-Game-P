#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
long long low;
long long high;
void b_search()
{
	long long mid;
	int inp1,inp;
	while(low<=high)
	{
		mid = low + (high-low)/2;
		printf("Is your number %lld ??. Enter 1 or 0\n",mid);
		scanf("%d",&inp);
		if(inp==1)
		{
			printf("Thats'it ! Thanks for playing :)\n");
			return;
		}
		else
		{
			printf("Is your numbers greater or lesser than %lld ?? Enter 1 or 0\n",mid);
			scanf("%d",&inp1);
			if(inp1==1)
				low = mid+1;
			else
				high=mid-1;
		}
	}
	return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //long long low,high;
    printf("Welcome to The Number Guessing Game\n");
    
    printf("Think of a Number in a range of your choice\n");
    printf("Enter lower bound of range\n");
    scanf("%lld",&low);
    printf("Enter upper bound of range\n");
    scanf("%lld",&high);
    b_search();
    return 0;
}
