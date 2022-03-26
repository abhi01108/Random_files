#include "iostream"
using namespace std;
void decToBinary(int n)
{
	long long binaryNum[200];
	long long i = 0;
    long long j;
    long long parityCount=0;
	while (n > 0) {
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (long long j = i - 1; j >= 0; j--)
		{
            cout<<binaryNum[j];
        if(binaryNum[j]==1)
        parityCount++;    
            }
            cout<<"\nparity count:"<<parityCount;
            int zeroes=j-parityCount;
            cout<<endl<<zeroes;
    if(parityCount%2==0){
        cout<<"\nEven parity\nParity to be added:0\n";   
        for (long long j = i - 1; j >= 0; j--)
            {
                cout<<binaryNum[j];
            }
            cout<<"0";
        }
    else{
        cout<<"\nOdd parity\nParity to be added:1\n";
    for (long long j = i - 1; j >= 0; j--)
		{
            cout<<binaryNum[j];
        }
        cout<<"1";
}}
int main(){
    long long n;
    cout<<"Enter a number in decimal:";
    cin>>n;
    decToBinary(n);
    }