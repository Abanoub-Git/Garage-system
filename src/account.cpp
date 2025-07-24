#include "account.h"
#include<fstream>
void account::setuser(){
string name;
cin>>name;
this->name=name;
}

void account::setpass(){
string pass;
cin>>pass;
this->pass=pass;

}

string account::getuser(){
return name;
}

string account::getpass(){
return pass;
}

int account::check(){
ifstream file("account.txt");
int flag=0;
while(true){
    string n,p;
    file>>n>>p;
if(name==n&&pass==p){
   return flag=1;
   break;
}
if(file.fail())
break;

}
return flag;
file.close();
}


