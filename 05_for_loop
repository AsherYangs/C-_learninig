/* input two number and add from little number to large number */

---------------------------ver1---------------------------
cout<<"input start number: ";
	int s;
	cin>>s;
	cout<<"input end number:  ";
	int e;
	cin>>e;
	
	int t=0;
	if(s<e){       //use if to judge s or e which is bigger
		for(int c=s;c<=e;c++){
			t+=c;
		}
	}else{
		for(int c=e;c<=s;c++){
			t+=c;
		}
	}
	cout<<t<<endl;
---------------------------ver2---------------------------
	cout<<"input start number: ";
	int s;
	cin>>s;
	cout<<"input end number:  ";
	int e;
	cin>>e;
	
	int t=0;
	for(int c=s;c<=e;c++){  for loop can set the condition so can not write if
		t+=c;
	}
	for(int c=e;c<=s;c++){
		t+=c;
	}
	if(s==e){
		t-=e;
	}
	cout<<t<<endl;
---------------------------ver3---------------------------
	cout<<"input start number: ";
	int s;
	cin>>s;
	cout<<"input end number:  ";
	int e;
	cin>>e;
	
	int t=0;
	if(s>e){    //if s>e change two number first
		int temp;
		temp=s;
		s=e;
		e=temp;
	}
	for(int c=s;c<=e;c++){
		t+=c;
	}
	
	cout<<t<<endl;
---------------------------ver4---------------------------
	cout<<"input start number: ";
	int s;
	cin>>s;
	cout<<"input end number:  ";
	int e;
	cin>>e;
	
	int t=0;
	for(int a=(s<e ? s : e);a<=(s>e ? s : e);a++){
		t+=a;
	}
	
	cout<<t<<endl;
	---------------------------ver5---------------------------
	cout<<"input start number: ";
	int s;
	cin>>s;
	cout<<"input end number:  ";
	int e;
	cin>>e;
	
	int t=0;
	for(int a=(s<e ? s : e);a<=(s>e ? s : e);t+=a++);
	
	cout<<t<<endl;
