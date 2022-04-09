int arr1[4][5];
	int num=1;
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			arr1[i][j]=num++;
		}
	}
	for(int i=0;i<4;i++){
			for(int j=0;j<5;j++){
				cout<<arr1[i][j]<<'\t';
			}
			cout<<endl;
	}
	for(int i=0;i<4/2 ;i++){       //overturn array
			for(int j=0;j<5;j++){
				int temp=arr1[i][j];    //int temp=arr1[0][1]; 第二次~
				arr1[i][j]=arr1[3-i][j];  //arr1[0][1]=arr1[3][1];
				arr1[3-i][j] = temp;       //arr1[3][1] = temp;
		}
	}

	cout<<"翻轉後: "<<endl;
	for(int i=0;i<4;i++){
				for(int j=0;j<5;j++){
					cout<<arr1[i][j]<<'\t';
				}
				cout<<endl;
		}

	for(int i=0;i<4;i++){  //mirror array
			for(int j=0;j<5/2;j++){
			int temp1=arr1[i][j];    //int temp=arr1[0][1]; 第二次~
			arr1[i][j]=arr1[i][4-j];  //arr1[0][1]=arr1[0][3];
			arr1[i][4-j] = temp1;       //arr1[0][3] = temp;
		}
	}

	cout<<"鏡像後: "<<endl;
		for(int i=0;i<4;i++){
					for(int j=0;j<5;j++){
						cout<<arr1[i][j]<<'\t';
					}
					cout<<endl;
			}
