#include<string>
#include<set>
using namespace std;
int calHappy(int n)
{
    string nStr =to_string(n);
    int sum=0;
    for(int i=0;i<nStr.size();i++)
        sum+=(nStr[i]-48)*(nStr[i]-48);
    return sum;
}
bool isHappy(int n) {
        int res =n;
        set<int> s ;
        s.insert(res);
        while(true)
        {
            res = calHappy(res);
            if(res==1) return true;
            else if(s.insert(res).second==false) 
            return false;
        }
    }
int main()
{
    isHappy(19);
}