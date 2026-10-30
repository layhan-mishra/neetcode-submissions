class LRUCache {
public:
    LRUCache(int capacity) {
        limit = capacity;
    }    
    
    int get(int key) {
        if(values.find(key) != values.end())
        {
            accessed.splice(accessed.begin(), accessed, values[key]);
            return values[key]->second; 
        }
        else
            return -1;
    }
    
    void put(int key, int value) {
        if(values.find(key) != values.end())
        {
            accessed.splice(accessed.begin(), accessed, values[key]);
            values[key]->second = value;
        }
        else if(accessed.size()>=limit)
        {
            values.erase(accessed.back().first);
            accessed.pop_back();
            accessed.push_front({key, value});
            values[key] = accessed.begin();

        }
        else
        {
            accessed.push_front({key, value});
            values[key] = accessed.begin();
        }
    }
private:
    unordered_map<int, list<pair<int, int>>::iterator> values;
    list<pair<int, int>> accessed;
    int limit;
};
