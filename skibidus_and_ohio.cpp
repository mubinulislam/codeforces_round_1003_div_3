#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int t;
    vector<int> lengths;
    string s;
    int length;
    cin>>t;
    cin.ignore();
    for (int i=0; i<t; i++){
        length=0;
        getline(cin,s);
        for (int j=0; j<s.length()-1; j++){
            if (s[j]==s[j+1]){
                length=1;
                lengths.push_back(length);
                break;
            }
            else{
                continue;
            }
        }
        if (length==0){
            length=s.length();
            lengths.push_back(length);
        }
    }
    for (size_t i = 0; i < lengths.size(); i++) {
        cout << lengths[i] << endl;
    }
}