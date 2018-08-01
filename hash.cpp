#include<iostream>
#include"encrypt.h"

using namespace std;



 int  main(){

  string data,hash;
  cout<<"Enter Data Hashed:"<<endl;
  cin>>data;
  int len=data.length();
  char cahrtot[len+1];
  strcpy(cahrtot,data.c_str());
  hash=SHA256(cahrtot);
  cout<<endl<<"Hashed Data"<<endl<<hash<<endl;

  return 0;
  }

