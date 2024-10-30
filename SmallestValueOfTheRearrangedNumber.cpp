long long smallestNumber(long long num) {
        long long ans =0;
        if(num>0){ //case for positive valuew
            vector<int> temp;
            while(num!=0){
                int x = num%10;
                temp.push_back(x);
                num /= 10;
            }
            sort(temp.begin(), temp.end());
            int i=0;
            while(temp[i]==0) i++;
            ans = temp[i];
            temp[i]=-1; //choosen digit will not be added again
            for(int i=0; i<temp.size(); i++){
                if(temp[i]>=0) ans = ans*10 + temp[i];
            }
            return ans;
        }
        else if(num<0){ //case for negative values
            num = abs(num);
            vector<int> temp;
            while(num!=0){
                int x = num%10;
                temp.push_back(x);
                num /= 10;
            }
            sort(temp.begin(), temp.end(), greater<int>());
            for(int i=0; i<temp.size(); i++){
                ans = ans*10 + temp[i];
            }
            return -ans;
        }
        return 0;
    }
