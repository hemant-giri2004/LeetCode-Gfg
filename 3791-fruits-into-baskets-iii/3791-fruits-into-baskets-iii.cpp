class Solution {
public:
    void build(int i, int l, int r, vector<int>& baskets ,vector<int>& segmentTree){
        //base case for stop recur. and assign value in leaf node of segment tree. 
        if(l==r){
            segmentTree[i]=baskets[l];
            return;
        }
        // find mid for chategorize the range in left or right.
        int mid =l + (r-l) / 2;
        //build left sub tree.
        build(2*i+1, l, mid, baskets, segmentTree);
        //build right sub tree.
        build(2*i+2, mid+1, r, baskets, segmentTree);

        //after building assign the value of non leaf node.
        //by finding max range.
        segmentTree[i]=max(segmentTree[2*i+1],segmentTree[2*i+2]);
    }

    bool queryST(int i, int l, int r, vector<int>& segmentTree, int fruit){
        // for root value is small that is a highest value in tree.
        if(segmentTree[i]< fruit){  
            return false;
        }
        if(l==r){
            segmentTree[i]=-1; //assign the fruit in this basket.
            return true;
        }

        int mid =l + (r-l) / 2;
        bool placed=false;
        if(segmentTree[2*i+1] >= fruit){   //find in left sub tree
            placed=queryST(2*i+1,l,mid,segmentTree,fruit);
        }else{  //find in right sub tree
            placed=queryST(2*i+2,mid+1,r,segmentTree,fruit);
        }
        //update the current node value
        segmentTree[i]=max(segmentTree[2*i+1],segmentTree[2*i+2]);
        return placed;
    }
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        // int n = fruits.size();

        // int unplaced = 0;
        // for(int i=0; i<n ; i++){
        //     bool placed = false;
        //     for(int j=0; j<n; j++){
        //         if(fruits[i] <= baskets[j]){
        //             placed=true;
        //             baskets[i]= -1;
        //             break;
        //         }
        //     }
        //     if(!placed){
        //         unplaced++;
        //     }
        
        // }
        // return unplaced;

        //optimal approach (Segment tree).
        int n = fruits.size();
        vector<int> segmentTree(4*n,-1);    // 4*n size for pair all the leaf nodes(safest ).
        //build segment tree
        //(current node, left , right, orginal , build tree)
        build(0,0,n-1,baskets,segmentTree);

        int unplaced=0;
        //check one by one every fruits
        for(int &fruit: fruits){
            //?? root, left , right , buildTree , current fruit
            if(queryST(0, 0, n-1, segmentTree, fruit)==false)
                unplaced++;
        }

        return unplaced;
    }
};