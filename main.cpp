//Authors: Alex Lopez, Robert Ramos, Gerardo Rojas, Kekoa nelson

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{

vector<string> list;
char input;
int listSize=0;
string name;

do{
cout<<"\n==GROCERY LIST MANAGER==";
cout<<"\nEnter your choice: ";
cout<<"\n (A)dd an item";
cout<<"\n (S)how grocery list";
cout<<"\n (Q)uit";
cout<<"\nYour choice (A/S/Q): " << endl;
cin>>input;
if(input == 'a' || input == 'A'){
  cout <<"What is the name of the item you want to add?" << endl;
  string name;
  cin >> name;
  list.push_back(name);
  listSize = listSize + 1;
}

if(input == 's' || input == 'S'){
  for( int i = 0; i<listSize; i++){
    cout << list[i]<<endl;
  }


}


}

while( input != 'q' && input != 'Q');

return 0;
}
