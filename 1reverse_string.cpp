class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int len= str.length();
        int i=0;
        int j=len-1;
        
        while(i<j){
            swap(str[i],str[j]);
            i++;
            j--;
        }
        return str;
    }
};
