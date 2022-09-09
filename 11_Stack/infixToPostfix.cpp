#include<iostream>
#include<stack>
#include<unordered_map>
using namespace std;

string infixToPostfix(string st){
    stack<char> s;
    string res = "";
    unordered_map<char, int> um;
    um['^'] = 5;
    um['/'] = 4;
    um['*'] = 4;
    um['+'] = 2;
    um['-'] = 2;

    for (int i = 0; i < st.length();i++){
        if((int(st[i]) >= 65 && int(st[i]) <= 90) || (int(st[i]) >= 97 && int(st[i]) <= 122)){
            res += st[i];
            //cout << res << endl;
            continue;
        }
        if(!s.empty()){
            if(st[i] == '('){
                s.push(st[i]);
                continue;
            }
            if(st[i] == ')'){
                //cout << res << endl;
                while(s.top() != '('){
                    res += s.top();
                    s.pop();
                }
                //cout << s.top() << endl;
                s.pop();
                //cout << s.top()<<endl;
                continue;
            }
            if(s.top() == '('){
                s.push(st[i]);

            }
            else if(um[st[i]] > um[s.top()]){
                s.push(st[i]);
            }
            else if(s.top() == '^' && st[i] == '^'){
                s.push(st[i]);
            }
            else{
                while(!s.empty() && s.top() != '(' && um[s.top()] >= um[st[i]]){
                    res += s.top();
                    s.pop();
                }
                s.push(st[i]);
            }
        }
        else{
            s.push(st[i]);
        }
    }
    while(!s.empty()){
        res += s.top();
        s.pop();
    }
    return res;
}

int main(){
    string st;
    getline(cin, st);
    cout << infixToPostfix(st);
}

ABC*DEF^ /G*-H*+