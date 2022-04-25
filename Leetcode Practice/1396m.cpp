/*1396. Design Underground System*/

class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>> in;
    map<pair<string,string>,pair<int,int>> mp;
    UndergroundSystem() {
        
    }
    void checkIn(int id, string station, int t) {
         in[id]={station,t};
    }
    
    void checkOut(int id, string station, int t) {
         if(in.count(id)) {
             string from = in[id].first;
             int dist = in[id].second;
             if(mp.count({from,station})) {
                  pair<int,int> trips = mp[{from,station}];
                  mp[{from,station}]={trips.first+abs(dist-t),trips.second+1};
             }else {
                  mp[{from,station}]={abs(dist-t),1};
             }
             in.erase(id);
         }
    }
    
    double getAverageTime(string start, string end) {
          return mp[{start,end}].first/(double)mp[{start,end}].second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */