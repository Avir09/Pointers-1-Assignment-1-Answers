#include<iostream>
using namespace std;
int main(){
    int num_1, num_2;
    cout<<"Enter the first number: ";
    cin>>num_1;
    cout<<"\nEnter the second number: ";
    cin>>num_2;
    
    int*ptr1 = &num_1; //Address of num_1 stored in ptr1
    int*ptr2 = &num_2; //Address of num_2 stored in ptr2
    
    int mul;
    int*ptr_mul= &mul;
    *ptr_mul = (*ptr1) * (*ptr2); //(*ptr1) denotes the value stored in the address of &num_1 and (*ptr2) denotes the value stored in the address of &num_2 
    cout<<"\nThe product of two number is: "<<*ptr_mul<<endl;

    return 0;
}
