import java.util.*;

class Pattern
{
	public void Pattern(String str)
	{
		for(int i = 0; i < (str.length()*2)-1; i++)
		{
			for(int j = 0; j < str.length(); j++)
			{
				if(i >= j&& (i+j <= ((str.length()-1)*2)))
				{
				  System.out.print(str.charAt(j)+"\t");
				}
			}
			System.out.println();
		}
	}
}

class Prog38_5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string : ");
		String sValue = sobj.nextLine();
		
		Pattern obj = new Pattern();
		
		obj.Pattern(sValue);
	}
}
