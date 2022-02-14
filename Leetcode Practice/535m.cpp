/*535. Encode and Decode TinyURL*/

class Solution {
public:

    // Encodes a URL to a shortened URL.
    unordered_map<string,string> ump;
    string encode(string longUrl) {
        ump[longUrl]="qq";
        return ump[longUrl];
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        for(auto a: ump)
        {
            if(a.second==shortUrl)
                return a.first;
        }
        return "Na";
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));

/*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*/
class Solution {
public:

    // Encodes a URL to a shortened URL.
    unordered_map<string,string> ump;
    string encode(string longUrl) {
        hash<string>hasher;
        size_t hash = hasher(longUrl);
        string shortUrl = "tinyurl.com/" + to_string(hash);
        ump[longUrl] = shortUrl;
        return shortUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        for(auto a: ump)
        {
            if(a.second==shortUrl)
                return a.first;
        }
        return "Na";
    }
};
