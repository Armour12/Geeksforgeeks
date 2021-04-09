class Minimisethemaxdiff{
    class Pair{
        private int value;
        private int index;
        Pair(int value, int index){
            this.value=value;
            this.index=index;
        }
        public int getValue(){
            return this.value;
        }
        public int getIndex(){
            return this.index;
        }
    }
    int getMinDiff(int[] arr, int n, int k){
        ArrayList<Pair> possibleHeights = new ArrayList<>();
        int[] visited =new int[n];
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]-k>=0)
            {

            }
        }
    }
}