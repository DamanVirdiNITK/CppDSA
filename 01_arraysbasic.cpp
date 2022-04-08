#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    cout<<"HI";
    int A[10];
    A[0] = 12;
    A[1] = 23;
    A[2] = 21;
    A[3] = 54;

    cout<<"\nSize of an array : "<<sizeof(A);
    cout<<"\nSize of one element of an array : "<<sizeof(A[1]);
    //cout is for CPP
    //printf is for C
    //To include C code in CPP, just include stdio.h

    printf("\n%d",A[2]);

    //To see default values of elements of an array is ZERO
    cout<<"\nDefault value of element of an array : "<<A[7];


    //Initalizing array 
    int B[] = {1,2,3,4,5};
    cout<<"\nSize of array B : "<<sizeof(B);
    

    //Print array
    cout<<"\n";
    for(int i = 0; i< sizeof(B)/sizeof(B[1]); i++){
        cout<<"\t"<<B[i];
    }

    //Print array for each loop 
    //For each loop works in only some compilers
    //In some compilers, it may give an error or warning
    //warning: range-based 'for' loops only available with -std=c++11 or -std=gnu++11
    cout<<endl;
    /*for(int x:B){
        cout<<x<<endl;
    }*/

    //Take user input value for no of elements in array
    int n;
    cout<<"\n Enter the no of elements : ";
    cin>>n;
    cout<<endl;
    int C[n];
    for(int i = 0; i< n; i++){
        cout<<C[i]<<"\t";
    }

    //Note: Garbage value will be given to the elements of array

    return 0;
}