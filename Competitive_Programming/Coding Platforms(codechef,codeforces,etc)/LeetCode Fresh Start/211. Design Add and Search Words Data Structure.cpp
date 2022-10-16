class WordDictionary
{
     unordered_map<int, vector<string>> words;

     bool isEqual(string word1, string word2)
     {
          for (int i = 0; i < word1.size(); i++)
          {
               if (word2[i] == '.')
                    continue;
               if (word1[i] != word2[i])
                    return false;
          }
          return true;
     }

public:
     WordDictionary() {}

     void addWord(string word)
     {
          words[word.size()].push_back(word);
     }

     bool search(string word)
     {
          for (auto &&s : words[word.size()])
               if (isEqual(s, word))
                    return true;
          return false;
     }
};
