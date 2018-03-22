#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int l;
	int i;
	cout<<"Zaczynamy gre w 33"<<endl;
	cout<<" "<<endl;
	cout<<"Zaczynasz"<<endl;
	cout<<" "<<endl;
	srand( time( NULL ) );
	do{
	cin>>l;
	 
    l+=(rand() % 3) + 1;
    cout<<l<<endl;;
    
}
while(l<=32);
    return 0;
}