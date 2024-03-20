#include<iostream>
using namespace std;

int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er&&sc==ec) return 1;
    int rightways=maze(sr,sc+1,er,ec);
    int leftways=maze(sr+1,sc,er,ec);
    int total=rightways+leftways;
    return total;
}
int maze2(int er,int ec){
    if(er<1||ec<1) return 0;
    if(er==1 &&ec==1) return 1; 
    int r=maze2(er,ec-1);
    int d=maze2(er-1,ec);
    int tot=r+d;
    return tot;

}
void printpath(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er&&sc==ec){
        cout<<s<<endl;;
        return;
    }
    printpath(sr,sc+1,er,ec,s+'R');
    printpath(sr+1,sc,er,ec,s+'D');
    
}
void printpath1(int er,int ec,string s){
    if(er<1||ec<1) return;
    if(ec==1&&er==1){
        cout<<s<<endl;;
        return;
    }
    printpath1(er,ec-1,s+'R');
    printpath1(er-1,ec,s+'D');
    
}
int main(){
    //cout<<maze2(3,3);
    printpath1(3,3,"");
}