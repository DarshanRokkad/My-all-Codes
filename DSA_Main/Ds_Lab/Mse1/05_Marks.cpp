// Storing the marks and index of a exam 
// This is the correct code for that question.
/* Question : Alice wants to store the marks he scored in an exam using the <index, value> pair. Suggest an appropriate data structure to store the (42) Poseround; his marks and also show the abstract data type of that data structure. */
#include<iostream> 
using namespace std; 
int main() 
{ 
    int index , col;
    cout<<"Enter the number of subjects : ";
    cin>>index;
    int a[index][2];
    for(int i = 0 ;i<index ;i++)
    {
        cout<<"Enter the marks of a student in subject "<<(i+1)<<" : ";
        int marks;
        cin>>marks;
        // Storing index in the column 1
        a[i][0]=(i+1);
        // Storing marks in the column 2 
        a[i][1]=marks;
    }
    cout<<"Index and marks of the subject : "<<endl;
    for(int i = 0 ;i<index ;i++)
    {
        cout<<a[i][0]<<" : "<<a[i][1]<<endl;
    }
  
    return 0 ;
}