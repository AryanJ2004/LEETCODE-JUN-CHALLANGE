class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int sum=0;
        for(int i=0;i<students.size();i++)
        {
            sum+=abs(students[i]-seats[i]);
        }
        int c=abs(sum);
        return c;
    }
};