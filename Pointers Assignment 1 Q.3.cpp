#include<iostream>
using namespace std;
int find_largest_smallest_no(int num_1, int num_2, int num_3, int largest, int smallest){
    largest= num_1;
    if(num_2>largest){
        largest = num_2;
    }
    else if(num_3>largest){
        largest= num_3;
    }

    smallest= num_1;
    if(num_2<smallest){
        smallest = num_2;
    }
    else if(num_3<smallest){
        smallest= num_3;
    }
}
int main(){
    int num_1, num_2, num_3;
    cout<<"Enter the first number: ";
    cin>>num_1;
    cout<<"\nEnter the second number: ";
    cin>>num_2;
    cout<<"\nEnter the third number: ";
    cin>>num_3;
    int largest, smallest;    
    find_largest_smallest_no.(num_1, num_2, num_3, largest, smallest)
    cout<<"\nThe largest number is: "<<largest<<endl;
    cout<<"\nThe smallest number is: "<<smallest<<endl;
    return 0;
}
