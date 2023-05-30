public class Merge_Sorting {
    /*
    created by kang ono
    https://onophp.blogspot.com/
 */
  public static void main(String a[])
{

     int n[] = {4,7,1,2,9,5};
     System.out.println("Sebelum di Urutkan merge sort ");
     for(int i = 0; i < n.length; i++)
     {
        System.out.print(n[i]+" ");
     }
     System.out.println();
      
     initializemergeSort(n,0,n.length-1);
     System.out.println();   
     System.out.println("Setelah di Urutkan merge sort ");
     for(int i = 0; i < n.length; i++)
     {
        System.out.print(n[i]+" ");
     }

}
   public static void initializemergeSort(int n[], int l, int h)
  { 
     int low = l;
     int high = h;
     if (low>=high)
     {
        return;
     }
     int middle=(low+high)/2;
     initializemergeSort(n,low,middle);
     initializemergeSort(n,middle+1,high);
     int end_low=middle;
     int start_high=middle+1;
     while ((l<=end_low) && (start_high<=high))
     {
        if (n[low]<n[start_high])
        {
           low++;
        }
        else
      {
           int Temp=n[start_high];
           for (int k=start_high-1;k>=low;k--)
           {
              n[k+1]=n[k];
           }
           n[low]=Temp;
           low++;
           end_low++;
           start_high++;
      }
    }
  }  
} 