#include <iostream>
using namespace std;
int main(){
    int n;
    int m;
    int index=-1;
    cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }
    for (int i = 0; i < n; ++i)
    {
    	if(a[i]==m){
    		index=i;
    	}
    }
    if(index!=-1){
    	cout<<index+1<<endl;
    }
    else{
    	cout<<index<<endl;
    }
    return 0;
}