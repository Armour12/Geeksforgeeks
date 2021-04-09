class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int jump=0;
        int c=0;
        int cf=0;
        for(int i=0;i<n-1;i++)
        {
            cf=max(cf,i+arr[i]);
            if(i==c)
            {
                jump++;
                c=cf;
            }
            if(c>=n-1)
            {
                break;
            }
        }
        if(c<n-1)
        return -1;
        return jump;
        
        
    }
};