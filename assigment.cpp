#include<iostream>
using namespace std;
int main()
{
	int subject,i;
	float averageMarks, percentage,total=0;
    int eng,pr,bk,c_plusplus,marks,subjects;
    int e=0,g=0,p=0,r=0,b=0,k=0,c=0,plus=0;
    char a;
    do
    {
        cout<<"Student : "<<++i<<endl;
        again:
        cout<<"Eng :";cin>>eng;
        if(eng<0||eng>100)
        {
            goto again;
        }
        do
        {
            cout<<"Pr : ";cin>>pr;
        }
        while(pr<0||pr>100);
        cout<<"BK : ";cin>>bk;
        while(bk<0||bk>100){
            cout<<"BK : ";cin>>bk;
        }
        cout<<"C++ : ";cin>>c_plusplus;
        for(;c_plusplus<0||c_plusplus>100;){
            cout<<"C++ : ";cin>>c_plusplus;
        }
        total=eng+pr+bk+c_plusplus;
        cout<<"Total = "<<total<<endl;
        do
        {
            cout<<"One more Student(y/n) : ";cin>>a;
        }
        while(a!='y'&&a!='n');
        if(eng<50){
            e++;
        }
        else{
            g++;
        }
        if(pr<50){
            p++;
        }
        else{
            r++;
        }
        if(bk>50){
            b++;
        }
        else{
            k++;
        }
        if(c_plusplus<50){
            c++;
        }
        else{
            plus++;
        }
        for(i = 0; i < subjects; i++){
       cin >> marks;
       total += marks; 
    }
     
    
    averageMarks = total / subjects;
     
    
    percentage = (total/(subjects * 100)) * 100;
    }
    while(a=='y');
    cout<<"==================================="<<endl;
    cout<<"     "<<"\t"<<"Eng"<<"\t"<<"PR"<<"\t"<<"BK"<<"\t"<<"C++"<<endl;
    cout<<"Pass"<<"\t"<<g<<"\t"<<r<<"\t"<<k<<"\t"<<plus<<endl;
    cout<<"Fail"<<"\t"<<e<<"\t"<<p<<"\t"<<b<<"\t"<<c<<endl;
    
    cout << "\nAverage Marks = " << averageMarks;  
    cout << "\nPercentage = " << percentage;
    
}
