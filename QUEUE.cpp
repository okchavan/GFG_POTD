class Solution{
    public:
    // Function to insert element into the queue
   void insert(queue<int> &q, int k){
        q.push(k);
    }
    int findFrequency(queue<int> &q, int k){
        queue<int> t=q;
        int freq=0;
        for(int i=0;i<q.size();i++)
    {
        if(t.front()==k)
        {
            freq++;
        }
     t.pop(); 
    }
        return freq;
    }
};
