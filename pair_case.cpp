#include <iostream>
using namespace std;

//Function To find length
int length(char arr[])
{
	int len = 0;
	for(int i =0;arr[i]!='\0';i++)
  {
		len++;
	}
	return len;
}

//Recursive Function
void pairStar(char arr[],int start)
{
	//Base Case: Reached End Of String
	if(arr[start]=='\0')
  {
		return;
	}   
	//Recursive Call 
	pairStar(arr,start+1);
	if(arr[start] == arr[start+1])
  {
		int l = length(arr);
		//Extending the string
		arr[l+1] = '\0';
		int i;
		//To shift the letters by 1
		for(i = l-1;i>=start +1;i--)
    {
			arr[i+1] = arr [i];
		}
		//Entering * in between
		arr[start+1] = '*';
	}
}

//Main
int main()
{
	char input[50];
	cout<<"Enter Input"<<endl;
	cin>> input;

	pairStar(input,0);  //Calling the function

	cout<<"Modified Output"<<endl;
	cout<<input<<endl;

	return 0;
}
