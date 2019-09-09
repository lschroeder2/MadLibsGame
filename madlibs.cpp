//Lyell Schroeder
#include <iostream>
using namespace std;
#include <string>

int main()
{
	string object = " ";
	string name = " ";
	string adjective1 = " ";
	string adjective2 = " ";
	int number = 0;
	
	cout<<"Enter an object"<<endl;
	cin>>object;
	cout<<"Enter a name"<<endl;
	cin>>name;
	cout<<"Enter an adjective"<<endl;
	cin>> adjective1;
	cout << "Enter another adjective"<<endl;
	cin>>adjective2;
	cout << "Enter a number"<<endl;
	cin>> number;
	cout<< endl << "Who lives in a "<<object<<" under the sea? ";
	cout<< name << " who is "<< adjective1 << " and "<<adjective2 << " is he "<<name;
	cout<< " how long as this show been on air "<< number << " years!";
  return 0;
}