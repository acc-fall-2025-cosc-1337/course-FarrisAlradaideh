#include <iostream>
#include <vector>
using namespace std;

vector<double> get_cookie_ingredients(int c);

int main(){
    int c; char a;
    do{
        cout<<"Cookies: "; cin>>c;
        if(c<1) continue;
        auto v=get_cookie_ingredients(c);
        cout<<"Sugar "<<v[0]<<", Butter "<<v[1]<<", Flour "<<v[2]<<endl;
        cout<<"Again? "; cin>>a;
    }while(a=='y'||a=='Y');
}

vector<double> get_cookie_ingredients(int c){
    double f=c/48.0;
    return {1.5*f,1*f,2.75*f};
}

