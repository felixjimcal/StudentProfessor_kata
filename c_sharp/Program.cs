using c_sharp;

class Program
{
    static void Main()
    {
        Console.Write("Helloo insert total of uni members: ");
        int totalMembers = Convert.ToInt32(Console.ReadLine());

        List<UniversityMember> uniMembers = new List<UniversityMember>();
        for (int i = 0; i < totalMembers; i++)
        {
            Console.Write("Indicate member type (1-2):");
            int memberType = Convert.ToInt32(Console.ReadLine());

            switch (memberType)
            {
                case 1:
                    uniMembers.Add(new Professor());
                    break;

                case 2:
                    uniMembers.Add(new Student());
                    break;

                default:
                    Console.WriteLine("Incorrect value, try again");
                    break;
            }
            uniMembers.Last().setData();
        }

        foreach (UniversityMember member in uniMembers)
        {
            member.getData();
            Console.WriteLine("\n");
        }
    }
}