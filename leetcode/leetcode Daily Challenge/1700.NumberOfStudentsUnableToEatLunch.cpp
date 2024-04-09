// problem link : https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int nb0=0;
        int nb1=0;
        for(auto &u:students){
            nb0+=(u==0);
            nb1+=(u==1);
        }

        for(auto &u:sandwiches){
            if(nb0==0 && u==0)break;
            if(nb1==0 && u==1)break;
            nb0-=(u==0);
            nb1-=(u==1);
        }
        return nb0+nb1;
    }
};
