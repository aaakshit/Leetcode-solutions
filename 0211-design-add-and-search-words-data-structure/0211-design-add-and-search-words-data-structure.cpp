//Implementing a class for defining a new data type, named trie
class trie{
    public:
    trie* a[26];
    bool terminal;

    //constructor to initialize the values
    trie()
    {
        terminal=false;
        for(int i=0;i<26;i++)
            a[i]=NULL;
    }
};

//given class
class WordDictionary {
public:

    //creating the starting trie, named root
    trie* root;

    //contructor to initialize the values
    WordDictionary() {
        root=new trie;              //intializing the starting root of the trie
    }
    
    //self made function to add word into our data structure
    void add(trie* &root,string word,int index)
    {
        //base case starts
        if(index==word.size())                         
        {
            root->terminal=true;
            return;
        }      
        //base case ends

        //word[index]-'a' will give us the proper integer index
        if(root->a[word[index]-'a']==NULL)
            root->a[word[index]-'a']=new trie;

        add(root->a[word[index]-'a'],word,index+1);
    }

    //given function
    void addWord(string word) {
        add(root,word,0);
    }
    
    //self made function to search word in our data structure
    bool searching(trie* root,string word,int index)
    {
        //base cases starts
        if(index==word.size() && root->terminal==true)
            return true;
        if(index==word.size() && root->terminal==false)
            return false;
        //base cases ends

        //In the problem itself, it is given that, dot(.) might also
        //be given while searching any string. So, whenever we get
        //a dot, we will look at each of the pointers in our array
        //of the current root because dot might represent any 
        //character. So, for that reason we have a FOR loop here...
        if(word[index]=='.')
        {
            for(int i=0;i<26;i++)
            {
                bool a;
                if(root->a[i]!=NULL)
                    a=searching(root->a[i],word,index+1);

                    //base case : If you get true then no need to
                    //check further, that's why directly return
                    //true from here itself. 
                    if(a==true)             
                    return true;
            }
            return false;
        }
        //If it is not a dot, then it is definitely any other character 
        else
        {
            //base starts
            if(root->a[word[index]-'a']==NULL)
            return false;
            //base case ends

            return searching(root->a[word[index]-'a'],word,index+1);
        }
    }

    //given function
    bool search(string word) {
        return searching(root,word,0);
    }
};
/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */