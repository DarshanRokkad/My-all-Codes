// writing the content to the file
#include<iostream> 
#include<fstream>
using namespace std; 

int main() 
{ 
    ofstream ofs("001My.txt",ios::trunc);

    ofs<<"Abdul bari "<<endl;
    ofs<<30<<endl;
    ofs<<"C++";

    ofs.close();
  
    return 0 ;
}