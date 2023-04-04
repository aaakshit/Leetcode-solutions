class Solution {
public:
    int partitionString(string s) {
        
        int len=s.length();//getting size of string

        string str="";
        int count=1;
        for(int i=0;i<len;i++){
            //Searching for the s[i] is it present in string or not
            if(str.find(s[i])!=-1){
                count++;
                str=s[i];
            }
            // Adding the Charater to the string;
            str+=s[i];
        }
        
        return count;


    }
};