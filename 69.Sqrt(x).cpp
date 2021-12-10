/*
  ->Just do binary search
  T.C-O(log(n))
*/
int sqrt(int n) {

    if(n==0 or n==1)return n;
    //used bcuz to we want to reduce search space to n/2
    if(n==2 or n==3)return 1;
    //h=n/2 bcuz we know its sqrt will always less than it's half
    int l=0,h=n/2;
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
         //mid*mid==n,instead below line it is written to avoid (mid*mid can overflow int)
        if(mid==n/mid){
            return mid;
        }else if(mid<=n/mid){
            //store mid in ans bcuz for case like 5,ans=2,so we want a ans for that type too
            ans=mid;
            l=mid+1;
        }else{
            h=mid-1;
        }
    }
    return ans;
}
