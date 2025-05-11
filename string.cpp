#include<iostream>
#include<string.h>
#include<string>

using namespace std;
int main(){
    int n;
    char name[100];
    cin>>n;
    getchar();//takes garbage enter as an input
    cin.getline(name,100); //fgets er moto
    cout<<n<<endl;
    cout<<name<<endl;
    // fgets(name,100,stdin);---- uses for space soho input
    // cin>>name; space chara

}