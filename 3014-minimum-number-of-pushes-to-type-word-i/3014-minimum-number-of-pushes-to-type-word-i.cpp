class Solution {
public:
    int minimumPushes(string word) {
        int size= word.length();
        if(size<=8) return size;
        else if(8<size && size<=16){
            int temp=8;
            size-=8;
            size*=2;
            temp+=size;
            return temp;
        }
        else if(16<size && size<=24){
            int temp=24;
            size=size-16;
            size=size*3;
            temp+=size;
            return temp;
        }
        else{
            int temp=48;
            size-=24;
            size=size*4;
            temp+=size;
            return temp;
        }

    }
};