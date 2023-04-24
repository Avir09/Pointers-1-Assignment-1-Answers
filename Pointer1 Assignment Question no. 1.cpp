#include <iostream>
using namespace std;

int main(){	
    int i;
	cin>>i; //For taking input from user
    int*ptr1 = &i; //&i fetches the address of i then store it in ptr1
    cout<<ptr1<<endl;  // print the address of i
    return 0;
}
