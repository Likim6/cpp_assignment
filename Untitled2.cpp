#include <iostream>
using namespace std;
int main()
{
    int i,n;
    int s=0;
    
    while(1)
    cout<<"Input n =";
    cin>>n;
    if((n%2)==0)
    {
        for(i=1;i<=n;i++){
        	s=s+i;
        	cout<<i<<"+";
		}
    }
    else if((n%2)!=0){
    	for(i=1;i<=n;i=i+2){
    		s=s+i;
    		cout<<i<<"+";
    		i++;
		}
		
	}
    cout<<"\b="<<s<<endl;
    
    
    return 0;
}
