/*

6. ZigZag Conversion
Medium

2065

5306

Add to List

Share
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);
 

Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Example 2:

Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I
Example 3:

Input: s = "A", numRows = 1
Output: "A"
 

Constraints:

1 <= s.length <= 1000
s consists of English letters (lower-case and upper-case), ',' and '.'.
1 <= numRows <= 1000
Accepted
521,980
Submissions
1,393,684


*/



// my solution, store the whole pattern in a matrix. 

class Solution {
public:
    string convert(string s, int numRows) {
        // constrain conditions
        if(s.size()==0||s.size()>1000){
            return "";
        }
        if(numRows==0||numRows>1000){
            return "";
        }
        int i;
        for(i=0;i<s.size();i++){
            if(!(s[i]>='a'&&s[i]<='z')&&!(s[i]>='A'&&s[i]<='Z')&&!(s[i]==',')&&!(s[i]=='.')){
                break;
            }
        }
        if(i!=s.size()){
            return "";
        }
        
        // simple
        if(numRows==1){ // 一行 只能一行铺开
            return s;
        }
        
        // main
        int s_idx = 0;
        vector<vector<int>> out_matrix;
        int end_flag=0;
        while(true){
            for(i=0;(i<numRows-1)&&(end_flag==0);i++){
                vector<int> col;
                if(i==0){
                    for(int z=0;z<numRows;z++){
                        if(end_flag==0){
                            col.push_back(s[s_idx++]);
                            if(s_idx>=s.size()){
                                end_flag=1;
                            }   
                        }
                        else{
                            col.push_back(' ');
                        }
                        
                        
                    }
                    
                }
                else{
                    int identity_pos = numRows - i-1;
                    for(int z=0;z<identity_pos;z++){
                        col.push_back(' ');
                    }
                    if(end_flag==0){
                        col.push_back(s[s_idx++]);
                        if(s_idx>=s.size()){
                            end_flag=1;
                        }
                    }
                    else{
                        col.push_back(' ');
                    }
                    
                    
                    for(int z=identity_pos+1;z<numRows;z++){
                        col.push_back(' ');
                    }
                }
                if(col.size()!=numRows){
                    return "!!!!";
                }
                // 先按照 列行转置 方式存储，最后输出时候再转置
                out_matrix.push_back(col);
                
            }//end for
            
            if(end_flag==1){
                break;
            }
        }//end while
        
        // transmit to outputs
        string out_str;
        int str_idx=0;
        //return out_str.insert(0,1,out_matrix[out_matrix.size()-1][2]);
        for(int m=0;m<out_matrix[0].size();m++){
            for(int n=0;n<out_matrix.size();n++){
               if(out_matrix[n][m]!=' '){ // 不要把两个index顺序写错了
                    out_str.insert(str_idx++,1,out_matrix[n][m]);
                } // c++中区分“ ” 与 ‘ ’
                    
            }
        }
        return out_str;
        
    }
};





// faster solution.  
// compute the iteration index, and then transmit it into row index. In this way, we can directly save each char in the string of each row. only O(N) time complexity






























