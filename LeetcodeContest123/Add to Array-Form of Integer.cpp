class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        int len = A.size();
        int num=0;
        vector<int>Ve;
        int a[11000]={0},b[11000]={0},c[11000]={0};
        for(int i=len-1;i>=0;i--){
            a[num++]=A[i];
            //cout<<A[i]<<endl;
        }
        int cnt=0;
        int i;
        while(K){
            b[cnt++]=K%10;
            K/=10;
        }
        //cout<<"B"<<endl;
        int k=max(len,cnt);
       
        for(i=0;i<k;i++)
        {
            //cout<<a[i]<<" "<<b[i]<<endl;
            c[i]=a[i]+b[i];
        }
        for(i=0; i<k; i++){
            //cout<<"A1"<<endl;
            if(c[i]>=10){
                c[i+1]+=c[i]/10;
                c[i]%=10;
            }
            //cout<<"A2"<<endl;
        }
        
        if(c[k]==0) k--;
         for(i=k;i>=0;i--){
             Ve.push_back(c[i]);
         }
             
        
        return Ve;
            
    }
};
//https://leetcode.com/contest/weekly-contest-123/problems/add-to-array-form-of-integer/
//大数加法