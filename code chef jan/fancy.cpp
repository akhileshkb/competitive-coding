#include<bits/stdc++.h>
using namespace std;

int main()
{
	char line[100];
	char * p;
	int testcase;
	cin>>testcase;
	cin.ignore();
	int a;
	while(testcase--)
	{	//cout<<i;
		a=0;
	  	cin.getline(line,100);
		p=strtok(line," ");
		while(p!=NULL)
		{
	 		if(!strcmp(p,"not"))
				a=1;
		//cout<<a[i];
			p=strtok(NULL," ");
	 	}
		
		if(a==0)
			cout<<"regularly fancy\n";
		else
		
			cout<<"Real Fancy\n";
	}	
	
	return 0;
}


