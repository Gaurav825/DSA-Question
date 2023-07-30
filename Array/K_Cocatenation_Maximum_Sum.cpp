//if k=1 return kadane(a)
/*
if(sum<0)
return kadane(a+a);
if(sum>0)
{
return sum*(k-2)+kadane(a+a)
// if(sum>0) 
=> kadane(a)<kadane(a+a);
because sum(a)>0 so used whole array sum which is positive + max sum subaaray of one array
ex-> -3 3 4 -2
       maxsubsum(3,4)=7
        but -3 3 4 -2 -3 3 4 -2>
        maxsubarray (3+4+-2-3+3+4)=>9 hence proved         


}



 */



int kConcatenationMaxSum(vector<int>& a, int k) {
         int m_sum = 0, sz = a.size();
    for (auto i = 0, sum = 0; i < min(2, k) * sz; ++i) {
        sum = max(sum + a[i % sz], a[i % sz]);
        m_sum = max(m_sum, sum);
    }
    return ((long long)m_sum + 
        max(0ll, accumulate(begin(a), end(a), 0ll) * max(0, k - 2))) % 1000000007;
        
    }
