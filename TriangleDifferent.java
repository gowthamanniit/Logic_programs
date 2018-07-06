/* 
                  91
              82  81
          73  72  71
      64  63  62  61
  55  54  53  52  51
      44  43  42  41
          33  32  31
              22  21
                  11  
  
 */
public class TriangleDifferent {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		int r=9; // input odd no. only
		int c=r/2+1;
		int k=1;
		int m=c;
		for(int i=r;i>=m;i--)
		{
			for(int j=c;j>=1;j--)
			{
				if(k>=j)
				System.out.print("  "+i+j);
				else
				System.out.print("    ");
			}
			System.out.println();
			k++;
		}
		for(int i=m-1;i>=1;i--)
		{
			for(int j=c;j>=1;j--)
			{
				if(i>=j)
				System.out.print("  "+i+j);
				else
				System.out.print("    ");
			}
			System.out.println();
		}
		
	}

}
