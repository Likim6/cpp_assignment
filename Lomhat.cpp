#include<iostream>
using namespace std;
int main()
{
	int score, i, n, count=0, male=0, female=0;
	char sex;
	
	cout<<"How many student = ";
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<"Student = ";
		cin>>i;
		cout<<"Sex = ";
		cin>>sex;
		cout<<"Score = ";
		cin>>score;
		if(sex=='m' || sex=='M')
		male++;
			else if(sex=='f' || sex=='F')
			female++;
				if(score>=50){
					cout<<"Result = Pass \n";
						count++;
				}
				else
					cout<<"Result = fail\n";
					cout<<"------------------------------\n";
	}
	cout<<"Number of male student = "<<male<<endl;
	cout<<"Number of female student = "<<female<<endl;
	cout<<"Number of pass = "<<count<<endl;
	
}
