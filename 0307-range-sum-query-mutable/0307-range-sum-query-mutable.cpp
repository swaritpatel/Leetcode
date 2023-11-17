class NumArray {
public:
    vector<int> tree;
    vector<int> a;
    int n;

    NumArray(vector<int>& nums) {
        n = nums.size();
        a = nums;
        tree.resize(4 * n); 
        buildTree(1, 0, n - 1);
    }

    void buildTree(int node, int left, int right) {
        if (left == right) {
            tree[node] = a[left];
            return;
        }
        int mid = left + (right - left) / 2;
        buildTree(2 * node, left, mid);
        buildTree(2 * node + 1, mid + 1, right);
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }

    void update(int index, int val) {
        updateTree(1, 0, n - 1, index, val);
    }

    void updateTree(int node, int left, int right, int index, int val) {
        if (left == right) {
            tree[node] = val;
            return;
        }
        int mid = left + (right - left) / 2;
        if (index <= mid) {
            updateTree(2 * node, left, mid, index, val);
        } else {
            updateTree(2 * node + 1, mid + 1, right, index, val);
        }
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }

    int sumRange(int left, int right) {
        return f(1, 0, n - 1, left, right);
    }

    long long f(int node, int node_left, int node_right, int query_left, int query_right) {
        if(query_left <= node_left && query_right >= node_right) {
            return tree[node];
        }
        if(query_left > node_right || query_right < node_left) {
            return 0;
        }
        int node_mid = (node_left + node_right) / 2;
        return f(2*node, node_left, node_mid, query_left, query_right)
                + f(2*node+1, node_mid+1, node_right, query_left, query_right);
    }
};