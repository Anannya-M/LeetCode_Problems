<<<<<<< HEAD
public class Rotate Array {
public:
    void printArray(int nums[],int n){
        cout<<"[";
        for (int i =0; i< n;i++){
            cout <<nums[i]<<",";
        }
        cout<<"]"<<endl;
        return ;
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res = nums;
        //int index = (i+k)% n;
        for (int i =0;i<n;i++){
            nums[(i+k)% n] = res[i];

        }
        
    }
};
=======
public class Rotate Array {
public:
    void printArray(int nums[],int n){
        cout<<"[";
        for (int i =0; i< n;i++){
            cout <<nums[i]<<",";
        }
        cout<<"]"<<endl;
        return ;
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res = nums;
        //int index = (i+k)% n;
        for (int i =0;i<n;i++){
            nums[(i+k)% n] = res[i];

        }
        
    }
};
>>>>>>> 00b0fa39de026e2ea6cc98d517f009d9b1a76392
   