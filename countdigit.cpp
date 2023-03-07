class Solution{
public:
    int evenlyDivides(int N){
       
          int t=N;

        int count=0;

        while (N>0){

            int last = N%10;

            if(last !=0&&t%last==0)

                count++;

            N=N/10;

    }

    return count;

}
};
