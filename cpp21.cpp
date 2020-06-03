 #include<iostream>
using namespace std;
int length(int a[],int n){
	int max_len=1;
	for(int i=0;i<n-1;i++){
		int mn=a[i],mx=a[i];
		for(int j=i+1;j<n;j++){
			mn=min(mn,a[j]);
			mx=max(mx,a[j]);
			if((mx-mn)==j-i) max_len=max(max_len,mx-mn+1);
			}
		}
	return max_len;
}
int main(){
	int a[]={1,2,3,4,100,200};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"Length of consecutive elements:"<<length(a,n);
	return 0;
}
