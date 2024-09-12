#include<iostream>
using namespace std;
	int main()
	
	{
		int n,num,digit,rev=0;
		cout<<"Enter a number to check if its a palindrome or not"<<endl;
		cin>>num;
		n=num;
		while(num!=0)
		{
			digit=num%10;
			rev=(rev*10)+digit;
			num=num/10;
			
		}
		if(n==rev)
		{
			cout<<"number entered is a palindrome"<<endl;
			
		}
		else
		{
			cout<<"the number entered is not a palindrome";
		}
		return 0;
	}

