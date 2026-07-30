class Solution {
public:
    int minimumPushes(string word) {
        if(word.size()<=8){
            return word.size();
        }
        else if(word.size()>8 && word.size()<16){
            return (word.size()%8)*2 +8;
        }
        else if(word.size()==16){
            return 24;
        }
        else if(word.size()==24){
            return 48;
        }
        else if(word.size()>16 && word.size()<24){
            return (word.size()%8)*3 +24;
        }
        else{
            return (word.size()%8)*4 + 48;
        }


        return 0;
    

    }
};