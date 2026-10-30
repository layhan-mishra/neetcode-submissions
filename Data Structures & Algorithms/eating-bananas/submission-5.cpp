class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int leftBound = 1;
        int rightBound = *max_element(piles.begin(), piles.end());
        int k = rightBound;

        while(rightBound >= leftBound)
        {
            int mid = leftBound + ((rightBound - leftBound)/2);
            int timeTotal = 0;

            for(int i = 0; i < piles.size(); i++)
            {
                if(timeTotal > h)
                    break;
                timeTotal += piles[i]/mid;
                if(piles[i] % mid != 0)
                    timeTotal++;
            }

            if(timeTotal <= h)
            {
                k = mid;
                rightBound = mid -1;
            }
            else
            {
                leftBound = mid + 1;
            }
        }

        return k;
    }
};
