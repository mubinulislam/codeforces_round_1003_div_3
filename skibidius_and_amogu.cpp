#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector<string> inputs(9);
    string temp;
    int n;
    cin>>n;
    for(int i=0; i<(n+1); i++){
        getline(cin,temp);
        if (temp=="us"){
            temp ='i';
            inputs.push_back(temp);
        }
        else if (temp[temp.size()-2]=='u' && temp[temp.size()-1]=='s'){
            temp[temp.size()-2]='i';
            temp.pop_back();
            inputs.push_back(temp);
            }
    }
    for (size_t i = 0; i < inputs.size(); i++) {
        cout << inputs[i] << endl;
    }
}