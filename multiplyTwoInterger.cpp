#include<string>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    string num1="233",num2="26";
    string result;
        int len,len1=num1.size(),len2=num2.size();
        bool flag=true,startZero=true;
        vector<int> res(len1+len2,0);
        for(int i=0;i<len1;i++)
            for(int j=0;j<len2;j++)
                res[j+i+1]+=(num1[i]-'0')*(num2[j]-'0');
        for(int i=len1+len2-1;i>=0;i--)
        {
            res[i-1]+=res[i]/10;res[i] %=10;
        }
      
        int tmp=res[0];
        startZero=tmp==0;
        if(!startZero) result+=(char)('0'+tmp);
        flag= true;
        for(int i=1;i<len1+len2;i++)
        {
            tmp=res[i];

            if(!(tmp==0&&flag&&startZero))//如果非开头连续零，就加上
            {
                result+=(char)(tmp+48);
                flag=flag&&tmp==0;//判断0是否连续
            }
              
        }
        if(result.size()==0&&res[len1+len2-1]==0)
        result+='0';
    cout<<result;
}