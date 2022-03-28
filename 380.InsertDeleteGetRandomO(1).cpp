class RandomizedSet {
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        bool exist = dict.count(val) > 0;
        if(exist)
            return false;
        nums.push_back(val);
        dict[val] = nums.size()-1;
        return true;            
    }
    
    bool remove(int val) {
        bool exist = dict.count(val) > 0;
        if(!exist)
            return false;
        //get the index of curr val
        int index = dict[val];
        //update the current index to the last element of nums
        dict[nums.back()] = index;
        //swap the last one with the curr one
        swap(nums[index], nums.back());
        //remove the last one
        nums.pop_back();
        //remove the val from the hashmap
        dict.erase(val);
        return true;
    }
    
    int getRandom() {
        int index = rand()%nums.size();
        return nums[index];
    }
protected:
    unordered_map<int, int> dict;
    vector<int> nums;
};
