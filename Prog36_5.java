import java.util.*;

class Pattern
{
   public void Pattern(int iRow, int iCol)
   {
	   int iCnt = 1;
	   for(int i = 0; i < iRow; i++)
	   {
		   for(int j = 0; j < iCol; j++)
		   {
			   System.out.print(iCnt+"\t");
			   iCnt++;
		   }
		   System.out.println();
	   }
   }

}

class Prog36_5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter row Count : ");
		int iValue1 = sobj.nextInt();
		
		System.out.println("Enter column Count : ");
		int iValue2 = sobj.nextInt();
		
		Pattern obj = new Pattern();
		
		obj.Pattern(iValue1,iValue2);
	}
}