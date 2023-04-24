#include<iostream>
using namespace std;
int main(){
    int num_1, num_2;
    cout<<"Enter the numbers: "<<" "<<endl;
    cin>> num_1>>num_2;
    int*ptr1 = &num_1;
    int*ptr2 = &num_2;

    int const_var;

    int*ptr_const_var= &const_var;

    *ptr1= *ptr2;
    *ptr2= *ptr_const_var;
    *ptr_const_var= *ptr1;

    cout<<ptr1<<" "<<ptr2;

    return 0;
}
