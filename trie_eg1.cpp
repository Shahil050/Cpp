#include<iostream>
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
            int index=word[0]-'A';
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

        bool searchUtil(trieNode *root,string word){
            
            //base case
            if(word.length() == 0){
                return root->isTerminal;
            }

            int index = word[0] - 'A';
            trieNode *child;

            //present
            if(root->children[index] != NULL){
                child = root->children[index];
            }
            else{
                //absent
                return false;
            }

            //Recursion
            return searchUtil(child,word.substr(1));
            }
        

        bool searchWord(string word){
            return searchUtil(root,word);
        }

};

int main(){
    Trie *t= new Trie();
    t->insertWord("ABCD");
    cout<<"Present or Not "<<t->searchWord("ABCD")<<endl;
    return 0;
}