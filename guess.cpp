#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    string  name;
    char input;
    int inputuser;
    cout<<" Enter your name  ........         ";
    getline(cin,name);
    cout<<endl;
    do{
        srand(0);
        int variable=rand()%10+1 ;
        cout<<"Enter any number in between 1 to 10      ";
        cin>>inputuser;
        cout<<endl;
        if (inputuser==variable)
        {
            cout<<"RIGHT GUESS"<<endl;
        }
        else{
            cout<<"SORRY! your guess is incorrect"<<endl;
        }


        cout<<"would you like to try again Y/N      ";
        cin>>input;
        cout<<endl;
        
    }
    while(input!='N');
    cout<<"GAME OVER "<<endl;
    


}