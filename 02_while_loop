/* enter a number judge is a leap year or not , and press y or Y to continue the action*/

--------------------ver1--------------------
	char c='Y';
	while(c=='Y'||c=='y'){
		cout<<"input a year: ,0 to leave: ";
		int y;
		cin>>y;
		
		bool a=false;
		if(y%4==0 && y%100 !=0 || y%400 ==0){
			a=true;
		}
		if(a){
			cout<<"leap year"<<endl; 
		}else{
			cout<<"normal year"<<endl; 
		}
		
		cout<<"輸入'Y'或'y'繼續,其他離開: ";
		
		cin>>c;
	}
	--------------------ver2--------------------
	char c='Y';
	while(true){
		
		if(c=='Y'||c=='y'){
			cout<<"輸入一個年份: ,0離開: ";
			int y;
			cin>>y;
			
			bool a=false;
			if(y%4==0 && y%100 !=0 || y%400 ==0){
				a=true;
			}
			if(a){
				cout<<"閏年"<<endl; 
			}else{
				cout<<"平年"<<endl; 
			}
			cout<<"輸入'Y'或'y'繼續,其他離開: ";
			cin>>c;
		}else{
			cout<<"break"<<endl;
			break;
		}
	}
--------------------ver3--------------------
	while(true){
		cout<<"輸入一個年份: ,0離開: ";
		int y;
		cin>>y;
		
		bool a=false;
		if(y%4==0 && y%100 !=0 || y%400 ==0){
			a=true;
		}
		if(a){
			cout<<"閏年"<<endl; 
		}else{
			cout<<"平年"<<endl; 
		}
		cout<<"輸入'Y'或'y'繼續,其他離開: ";
		char c;
		cin>>c;
		if(c!='Y'&&c!='y'){
			break;
		}
	}
--------------------ver4--------------------
	while(true){
		cout<<"輸入一個年份: ,0離開: ";
		int y;
		cin>>y;
		
		bool a=false;
		if(y%4==0 && y%100 !=0 || y%400 ==0){
			a=true;
		}
		if(a){
			cout<<"閏年"<<endl; 
		}else{
			cout<<"平年"<<endl; 
		}
		cout<<"輸入'N'或'n'離開,其他繼續: ";
		char c;
		cin>>c;
		if(c=='N'||c=='n'){
			break;
		}
	}
	--------------------ver5--------------------
	char c='y';
	int cc=0;
	while(c!='N'&&c!='n'){ //條件跟計數器無關使用while 
		
		cout<<"輸入一個年份: ,0離開: ";
		int y;
		cin>>y;
		
		bool a=false;
		if(y%4==0 && y%100 !=0 || y%400 ==0){
			a=true;
		}
		if(a){
			cout<<"閏年"<<endl; 
			cc+=1;
		}else{
			cout<<"平年"<<endl; 
		}
		cout<<"輸入'N'或'n'離開,其他繼續: ";
		cin>>c;
	}
	cout<<cc<<endl;
