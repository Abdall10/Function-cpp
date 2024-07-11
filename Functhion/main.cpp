// Online C++ compiler to run C++ program online
#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;


int main()
{
   srand(time(0));
   
  
    for(int i=0;i<=10;i++)
    {
      cout<<rand()%5<<endl;
  }
    

    return 0;
}