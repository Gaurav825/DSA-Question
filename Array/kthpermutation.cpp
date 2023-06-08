 //https://practice.geeksforgeeks.org/problems/find-kth-permutation-0932/1  

string kthPermutation(int n, int k)
    {
       
      int fact=1;
      vector<int>number;
       for(int i=1; i<n; i++)
       {
           fact*=i;
          number.push_back(i);
       }
       k-=1;
       number.push_back(n);
       string ans="";
       while(1)
       {
           ans+=to_string(number[k/fact]);
          
           number.erase(number.begin()+k/fact);
           if(number.size()==0)
           break;
           k=k%fact;
           
            fact/=number.size();
       }
       return ans;
    }
