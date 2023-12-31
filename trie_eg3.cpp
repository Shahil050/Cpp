#include<iostream>
#include<vector>
#include<string>
using namespace std;
class trieNode{
    public:
        char data;
        trieNode *children[26];
        bool isTerminal;
        

        trieNode(char ch){
            data = ch;
            for(int i=0;i<26;i++){
                children[i]=NULL;
            }
            
            isTerminal = false;
        }
};
class Trie{
    public:
        trieNode *root;
        Trie(){
            root=new trieNode('\0');
        }
        void insertUtil(trieNode *root,string word){
            //base case
            if(word.length()==0){
                root->isTerminal=true;
                return ;
            }

            //assumption word will be in Caps
            int index=word[0]-'a';
            trieNode *child;

            //present
            if(root ->children[index] != NULL){
                child = root->children[index];
            }
            else{
                //absent
                child = new trieNode(word[0]);
                root->children[index]=child;

            }
            //Recursion
            insertUtil(child,word.substr(1));
        }
        void insertWord(string word){
            insertUtil(root,word);
        }


        void printSuggestions(trieNode *curr,vector<string> &temp,string prefix){
            if(curr->isTerminal){
                temp.push_back(prefix);
                
            }
            for(char ch='a';ch<='z';ch++){
                trieNode *next = curr->children[ch-'a'];
                if(next!=NULL){
                    prefix.push_back(ch);
                    printSuggestions(next,temp,prefix);
                    prefix.pop_back();
                }

            }
        }

        vector<vector<string>> getSuggestions(string str){
            trieNode *prev=root;
            vector<vector<string>> output;
            string prefix ="";

            for(int i=0;i<str.length();i++){
                char lastch=str[i];
                prefix.push_back(lastch);

                //check for lastch
                trieNode *curr=prev->children[lastch - 'a'];

                //if not found
                if(curr == NULL){
                    break;
                }
                
                //if found
                vector<string> temp;
                printSuggestions(curr,temp,prefix);

                output.push_back(temp);
                temp.clear();
                prev = curr;
            }
            if(output.size()==0){
                return {};
            }
            return output;
        }
        
};

 vector<vector<string>> phoneDirectory(vector<string>&contactList,string &queryStr){
    //creation of trie
    Trie *t=new Trie();

    //insert all contact in trie
    for(int i=0;i<contactList.size();i++){
        string str = contactList[i];
        t->insertWord(str);
    }

    //return ans
    return t->getSuggestions(queryStr);
 }


int main(){
    vector<string> contactList{"amit","ajay","vijay","anil"};
    string queryStr = "ami";


    // cout<<contactList.size();
    Trie *t = new Trie();
    for(int i=0;i<contactList.size();i++){
        string str = contactList[i];
        t->insertWord(str);
    }

    vector<vector<string>> suggestions = t->getSuggestions(queryStr);

    for(int i=0;i<suggestions.size();i++){
        for(int j=0;j<suggestions[i].size();j++){
            cout<<suggestions[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}



 