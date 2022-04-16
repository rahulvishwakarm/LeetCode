#include<iostream>
using namespace std;

class StringOperation {
    public:
        void TraverseString(string str) {
            int n = str.length();
            for(int i=0;i<n;i++) {
                cout<<str[i]<<" ";
            }
        }

        void swap(char *str1,char *str2) {
            char temp;
            temp = *str1;
            *str1 = *str2;
            *str2 = temp;
        }

        string ReverseStr(string& str) {
            int lestrlen = str.length();
            for(int i=0;i<lestrlen/2;i++) {
                swap(&str[i],&str[lestrlen-i-1]);
            }
            return str;
        }
        
        int LengthStr(string str) {
            int count = 0;
            int ln = str.length();
            for(int i=0;i<ln;i++) {
                count++;
            }
            return count;
        }

};

int main() {
    StringOperation RS;
    string str ="Rahul Vishwakarma";
    RS.TraverseString(str);
    cout<<endl;
    cout<<str<<endl;
    RS.ReverseStr(str);
    cout<<str<<endl;
    cout<<"Length Of String: "<<RS.LengthStr(str);
    return 0;
}   