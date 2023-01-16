#include<vector>
#include<iostream>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M =matrix.size(),N=matrix[0].size(),all=M*N;
        int left =0 ,right= N-1,top=0,bottom=M-1;
        vector<int> res;

        while(left<=right&&top<=bottom){
            for(int k=left;k<=right;k++)
                res.push_back(matrix[top][k]);
            if(++top>bottom) break;
            for(int k=top;k<=bottom;k++)
                res.push_back(matrix[k][right]);
           
            if(--right<left) break;
            for(int k=right;k>=left;k--)
                res.push_back(matrix[bottom][k]);
            if(--bottom<top) break;
            for(int k=bottom;k>=top;k--)
                res.push_back(matrix[k][left]);
            if(++left>right)break;
        }
        return res;
    }
    int main()
    {
        vector<vector<int>> matrix ={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
        vector<int> res = spiralOrder(matrix);
        for(int i=0;i<res.size();i++)
            cout<<res[i]<<"  ";
        
    }