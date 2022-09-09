#include<iostream>
#include<stack>
#include<cmath>
#include<unordered_set>
using namespace std;

int evaluationPostfix(string st){
    stack<int> s;
    unordered_set<char> us;
    us.insert('/');
    us.insert('*');
    us.insert('+');
    us.insert('-');
    us.insert('^');
    int a, b;
    string n="";
    for (int i = 0; i < st.length();i++){
        if(us.find(st[i]) != us.end()){
            b = s.top();
            s.pop();
            a = s.top();
            s.pop();
            if(st[i] == '/'){
                s.push(a / b);
            }
            else if(st[i] == '*'){
                s.push(a * b);
            }else if(st[i] == '+'){
                s.push(a + b);
            }
            else if(st[i] == '-'){
                s.push(a - b);
            }
            else if(st[i] == '^'){
                s.push(pow(a, b));
            }
            continue;
        }
        // if(st[i] == ' ' && n != ""){
        //    // cout << n << " ";
        //     s.push(stoi(n));
        //     n = "";
        // }
        // else if(st[i] != ' '){
        //     n += st[i];
        // }
        n += st[i];
        s.push(stoi(n));
        n = "";
        }
    return s.top();
}
int main(){
    string st;
    getline(cin, st);
    //cout << st;
    cout << evaluationPostfix(st);
}