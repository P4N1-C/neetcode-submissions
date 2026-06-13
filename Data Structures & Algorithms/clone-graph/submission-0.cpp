class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(node == nullptr) return nullptr;
        unordered_map<int, Node*> mp;
        queue<Node*> q;
        mp[node->val] = new Node(node->val);
        q.push(node);
        while(!q.empty()) {
            Node* curr = q.front(); q.pop();
            Node* newNode = mp[curr->val];
            vector<Node*>& adj = curr->neighbors;
            for(auto it : adj) {
                if(mp.find(it->val) == mp.end()) {
                    Node* nn = new Node(it->val);
                    mp[it->val] = nn;
                    q.push(it);
                }
                newNode->neighbors.push_back(mp[it->val]);
            }
        }
        return mp[node->val];
    }
};