#include <iostream>
using namespace std;
int main()
{

// var
int input;
int fizz, buzz;
cin>>fizz;
cin>>buzz;
cin>> input;

for (int num=1; num<=input;num++)
{

	if ((num%fizz==0)and(num%buzz==0))
	{

		cout<<"FizzBuzz"<<endl;
	}

	else if (num%fizz==0)
	{
		cout<<"Fizz"<<endl;

	}

	else if (num%buzz==0)
	{
		cout<<"Buzz"<<endl;

	}

	else 
	{
		cout<< num<<endl;
	}
}

}