class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        if(k>q.size()){
            return q;
        }
        stack<int> s;
        for(int i = 0; i < k; i++){
            s.push(q.front());
            q.pop();
        }
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        int r = q.size()-k;
        for(int i = 0; i < r ; i++){
            int front = q.front();
            q.pop();
            q.push(front);
        }
        return q;
    }
};
