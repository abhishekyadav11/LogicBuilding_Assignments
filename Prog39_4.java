import java.util.*;

class Pattern
{
	public void Pattern(String str)
	{
		for(int i = 0; i < (str.length()*2)-1; i++)
		{
			for(int j = 0; j < str.length(); j++)
			{
				if(i+j <= str.length()-1)
				{
					System.out.print(str.charAt(j)+"\t");
				}
				else if(i-j >= str.length()-1)
				{
					System.out.print(str.charAt(j)+"\t");
				}
				else
				{
					System.out.print("*\t");
				}
			}
			System.out.println();
		}
	}
}

class Prog39_4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter String : ");
		String sValue = sobj.nextLine();
		
		Pattern obj = new Pattern();
		
		obj.Pattern(sValue);
	}
}
