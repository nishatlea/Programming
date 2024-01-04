
 int numberOfBeams(vector<string>& bank) {
        int length= bank.size();
        int arr[length];
        for(int i=0; i<bank.size();i++)
        {
            int len = bank[i].length();
            int cal=0;
            for(int j=0; j<len; j++)
            {
                if(bank[i][j]=='1')
                    cal++;
            }
            arr[i]= cal;
        }
        int sum =0, prev=0;
        for(int i=0; i<length; i++)
        {
            if(arr[i]!=0)
            {
                sum+= arr[prev]*arr[i];
                prev=i;
            }
        }
        return sum;
    }
