int score,eng,pr,bk,c,total;
    int i=0;
    char student,onemorestudent;
    cout<<"student :"<<++i<<endl;
    eng:
    cout<<"eng = ";cin>>eng;
    if(eng<0  eng>100)
        goto eng;
    do 
    {
        cout<<"PR = ";cin>>pr;
    }while(pr<0  pr>100);
    
    cout<<"BK = ";cin>>bk;
    while(bk<0  bk>100)
    {
        cout<<"BK = ";cin>>bk;   
    }
    
    cout<<"C++ = ";cin>>c;
    for(;c<0  c>100;)
    {
        cout<<"C++ = ";cin>>c;
    }
    total = eng+pr+bk+c;
    cout<<"Total = "<<total<<endl;
    cout<<"one more student:";cin>>onemorestudent;
    while(onemorestudent!='y' && onemorestudent!='n')
    {
        cout<<"one more student:";cin>>onemorestudent;
    }
    if
