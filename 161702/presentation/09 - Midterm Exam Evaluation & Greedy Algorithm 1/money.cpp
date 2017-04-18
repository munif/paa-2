#include<bits/stdc++.h>

using namespace std;

int flag = 0, top = -1, s[100], lembar[100];

int money(int i, int uang){
    int sisa;
    if(uang == 0)
        return 0;
    if(uang/s[i] >= 1){
        if(uang%s[i] == 0){
            flag++;
            //lembar[++top]=s[i];
        }
        else if(uang%s[i] > 0){
            flag++;
            sisa = uang - s[i];
          //  lembar[++top]=s[i];
            money(i, sisa);
        }
    }
    else{
        money(i-1, uang);
        //while(top!=-1){
          //  cout << lembar[top] << endl;
            //top--;
        //}
    }
    return flag;
}

int main(){
    int uang;
    s[0]=50;
    s[1]=100;
    s[2]=200;
    s[3]=500;
    s[4]=1000;
    s[5]=2000;
    s[6]=5000;
    s[7]=10000;
    s[8]=20000;
    s[9]=50000;
    s[10]=100000;

    cin >> uang;

    cout << "Hasilnya adalah : " << money(10, uang) << " lembar" << endl;
}
