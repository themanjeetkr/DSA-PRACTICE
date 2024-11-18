    #include <iostream>
    using namespace std;
    void merge(int arr1[], int n, int arr2[], int m, int arr3[])
    {
        int i = 0;
        int j = 0;
        int k = 0;
        while (i < n && j < m)    //loop for check the condion 
        {
            if (arr1[i] < arr2[j])
            {
                arr3[k] = arr1[i];
                k++;
                i++;
            }
            else
            {
                arr3[k] = arr2[j];
                k++;
                j++;
            }
        }
        while (i < n)
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        while (j < m)
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    void print(int ans[],int n){
        cout<<"the merge sorted array is: " <<endl;
        for (int i = 0; i < n; i++)
        {
            
            cout<<ans[i]<<" ";
        }
        
    }

    int main()
    {
        int arr1[4] = {2, 5, 7, 8};
        int arr2[3] = {3, 6, 9};
        int arr3[7] = {0};
        merge(arr1, 4, arr2, 3, arr3);
        print(arr3,7);
        
    }